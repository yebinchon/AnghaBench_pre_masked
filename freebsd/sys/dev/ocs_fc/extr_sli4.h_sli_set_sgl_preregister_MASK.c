
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int sgl_pre_registered; scalar_t__ sgl_pre_registration_required; } ;
struct TYPE_5__ {TYPE_1__ config; int os; } ;
typedef TYPE_2__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int32_t
FUNC_1(sli4_t *VAR_2, uint32_t VAR_3)
{
 if ((VAR_3 == 0) && VAR_2->config.sgl_pre_registration_required) {
  FUNC_0(VAR_2->os, "SGL pre-registration required\n");
  return -1;
 }

 VAR_2->config.sgl_pre_registered = VAR_3 != 0 ? VAR_1 : VAR_0;

 return 0;
}
