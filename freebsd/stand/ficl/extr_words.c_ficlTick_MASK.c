
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRINGINFO ;
typedef int FICL_WORD ;
typedef int FICL_VM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int,int ) ;

void FUNC_8(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1 = ((void*)0);
    STRINGINFO VAR_2 = FUNC_6(VAR_0);




    VAR_1 = FUNC_3(FUNC_5(VAR_0), VAR_2);
    if (!VAR_1)
    {
        int VAR_3 = FUNC_1(VAR_2);
        FUNC_7(VAR_0, "%.*s not found", VAR_3, FUNC_2(VAR_2));
    }
    FUNC_0(VAR_1);
    return;
}
