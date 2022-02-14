
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNS16 ;
struct TYPE_4__ {int ** pSearch; scalar_t__ nLists; } ;
typedef int STRINGINFO ;
typedef int FICL_WORD ;
typedef int FICL_HASH ;
typedef TYPE_1__ FICL_DICT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ,int ) ;

FICL_WORD *FUNC_4(FICL_DICT *VAR_0, STRINGINFO VAR_1)
{
    FICL_WORD *VAR_2 = ((void*)0);
    FICL_HASH *VAR_3;
    int VAR_4;
    UNS16 VAR_5 = FUNC_2(VAR_1);

    FUNC_0(VAR_0);

    FUNC_1(1);

    for (VAR_4 = (int)VAR_0->nLists - 1; (VAR_4 >= 0) && (!VAR_2); --VAR_4)
    {
        VAR_3 = VAR_0->pSearch[VAR_4];
        VAR_2 = FUNC_3(VAR_3, VAR_1, VAR_5);
    }

    FUNC_1(0);
    return VAR_2;
}
