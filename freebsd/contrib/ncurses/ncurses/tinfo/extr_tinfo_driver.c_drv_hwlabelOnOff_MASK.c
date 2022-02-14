
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * csp; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(TERMINAL_CONTROL_BLOCK * VAR_2, int VAR_3)
{
    SCREEN *VAR_4 = VAR_2->csp;

    FUNC_0();
    if (VAR_3) {
 FUNC_1("label_on", VAR_1);
    } else {
 FUNC_1("label_off", VAR_0);
    }
}
