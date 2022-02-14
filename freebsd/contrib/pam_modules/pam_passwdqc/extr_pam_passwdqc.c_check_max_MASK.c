
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max; } ;
struct TYPE_5__ {TYPE_1__ qc; } ;
typedef TYPE_2__ params_t ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(params_t *VAR_4, pam_handle_t *VAR_5, const char *VAR_6)
{
 if ((int)FUNC_1(VAR_6) > VAR_4->qc.max) {
  if (VAR_4->qc.max != 8) {
   FUNC_0(VAR_5, VAR_2, VAR_0);
   return -1;
  }
  FUNC_0(VAR_5, VAR_3, VAR_1);
 }

 return 0;
}
