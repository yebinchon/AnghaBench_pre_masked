
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kbd; int aux; } ;
typedef int KBDC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(KBDC VAR_4)
{
    int VAR_5;

    if (FUNC_2(&FUNC_3(VAR_4)->aux))
        return FUNC_6(&FUNC_3(VAR_4)->aux);
    VAR_5 = FUNC_5(FUNC_3(VAR_4)) & VAR_2;
    if (VAR_5 == VAR_3) {
        FUNC_0(VAR_0);
        FUNC_1(&FUNC_3(VAR_4)->kbd, FUNC_4(FUNC_3(VAR_4)));
        VAR_5 = FUNC_5(FUNC_3(VAR_4)) & VAR_2;
    }
    if (VAR_5 == VAR_1) {
        FUNC_0(VAR_0);
        return FUNC_4(FUNC_3(VAR_4));
    }
    return -1;
}
