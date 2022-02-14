
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
 int FUNC_2 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_2, int VAR_3, char *VAR_4)
{
    SCREEN *VAR_5 = VAR_2->csp;

    FUNC_0();
    if (VAR_3 > 0 && VAR_3 <= VAR_0) {
 FUNC_1("plab_norm",
        FUNC_2(VAR_1, VAR_3, VAR_4));
    }
}
