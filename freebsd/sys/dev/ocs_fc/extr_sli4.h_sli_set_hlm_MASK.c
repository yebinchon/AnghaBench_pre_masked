
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int hlm; } ;
struct TYPE_7__ {TYPE_1__ flag; } ;
struct TYPE_8__ {int high_login_mode; TYPE_2__ features; } ;
struct TYPE_9__ {TYPE_3__ config; int os; } ;
typedef TYPE_4__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int32_t
FUNC_1(sli4_t *VAR_2, uint32_t VAR_3)
{
 if (VAR_3 && !VAR_2->config.features.flag.hlm) {
  FUNC_0(VAR_2->os, "HLM not supported\n");
  return -1;
 }

 VAR_2->config.high_login_mode = VAR_3 != 0 ? VAR_1 : VAR_0;

 return 0;
}
