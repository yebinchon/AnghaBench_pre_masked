
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
 int FUNC_2 (int *,int,int,int,int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_1,
       int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    SCREEN *VAR_6 = VAR_1->csp;

    FUNC_0();
    if (VAR_0 != ((void*)0)) {
 FUNC_1("initialize_color",
        FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5));
    }
}
