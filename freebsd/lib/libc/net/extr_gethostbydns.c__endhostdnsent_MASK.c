
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* res_state ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(void)
{
 res_state VAR_2;

 VAR_2 = FUNC_0();
 VAR_2->options &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_2);
}
