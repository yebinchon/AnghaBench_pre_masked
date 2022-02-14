
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aux; int kbd; } ;
typedef int KBDC ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(KBDC VAR_0)
{
    if (FUNC_0(&FUNC_1(VAR_0)->kbd))
        return FUNC_3(&FUNC_1(VAR_0)->kbd);
    if (FUNC_0(&FUNC_1(VAR_0)->aux))
        return FUNC_3(&FUNC_1(VAR_0)->aux);
    if (!FUNC_4(FUNC_1(VAR_0)))
        return -1;
    return FUNC_2(FUNC_1(VAR_0));
}
