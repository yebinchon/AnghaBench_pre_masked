
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int fbtp_patchval; int * fbtp_patchpoint; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int fbt_patchval_t ;




 int FUNC_0 () ;

void
FUNC_1(fbt_probe_t *VAR_0, fbt_patchval_t VAR_1)
{

 switch(VAR_0->fbtp_patchval) {
 case 129:
  *(uint16_t *)VAR_0->fbtp_patchpoint = (uint16_t)VAR_1;
  FUNC_0();
  break;
 case 128:
  *VAR_0->fbtp_patchpoint = VAR_1;
  FUNC_0();
  break;
 };
}
