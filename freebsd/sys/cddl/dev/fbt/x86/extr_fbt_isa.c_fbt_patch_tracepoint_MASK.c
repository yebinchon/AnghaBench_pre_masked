
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int register_t ;
struct TYPE_3__ {int * fbtp_patchpoint; } ;
typedef TYPE_1__ fbt_probe_t ;
typedef int fbt_patchval_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void
FUNC_4(fbt_probe_t *VAR_0, fbt_patchval_t VAR_1)
{
 register_t VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_0();
 *VAR_0->fbtp_patchpoint = VAR_1;
 FUNC_3(VAR_3);
 FUNC_2(VAR_2);
}
