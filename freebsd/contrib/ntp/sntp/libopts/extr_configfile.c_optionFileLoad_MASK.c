
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pzProgName; } ;
typedef TYPE_1__ tOptions ;


 int FUNC_0 (int ) ;
 char** FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;

int
FUNC_4(tOptions * VAR_0, char const * VAR_1)
{
    if (! FUNC_0(FUNC_3(VAR_0, VAR_1)))
        return -1;






    {
        char const ** VAR_2 = FUNC_1(&(VAR_0->pzProgName));
        *VAR_2 = VAR_1;
    }

    FUNC_2(VAR_0);
    return 0;
}
