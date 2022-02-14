
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRINGINFO ;
typedef void FICL_WORD ;
typedef int FICL_VM ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_0, STRINGINFO VAR_1, void *VAR_2)
{
    FICL_WORD *VAR_3;

    VAR_3 = FUNC_3(FUNC_4(VAR_0), VAR_1);
    if (VAR_3)
    {
        FUNC_1(VAR_3);
        FUNC_0((FUNC_5(VAR_3) ? 1 : -1));
    }
    else
    {
        FUNC_1(VAR_2);
        FUNC_2(0);
    }
    return;
}
