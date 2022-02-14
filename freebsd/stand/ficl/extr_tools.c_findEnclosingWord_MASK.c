
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_WORD ;
typedef int FICL_VM ;
typedef int FICL_DICT ;
typedef int CELL ;


 int FUNC_0 (int *,void*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static FICL_WORD *FUNC_3(FICL_VM *VAR_1, CELL *VAR_2)
{
    FICL_WORD *VAR_3;
    FICL_DICT *VAR_4 = FUNC_2(VAR_1);
    int VAR_5;

    if (!FUNC_0(VAR_4, (void *)VAR_2))
        return ((void*)0);

    for (VAR_5 = VAR_0; VAR_5 > 0; --VAR_5, --VAR_2)
    {
        VAR_3 = (FICL_WORD *)(VAR_2 + 1 - (sizeof (FICL_WORD) / sizeof (CELL)));
        if (FUNC_1(VAR_4, VAR_3))
            return VAR_3;
    }

    return ((void*)0);
}
