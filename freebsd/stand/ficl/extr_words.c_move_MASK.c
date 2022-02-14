
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_VM ;
typedef int FICL_UNS ;


 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1;
    char *VAR_2;
    char *VAR_3;




    VAR_1 = FUNC_1();
    VAR_2 = FUNC_0();
    VAR_3 = FUNC_0();

    if (VAR_1 == 0)
        return;




    if (VAR_3 >= VAR_2)
    {
        for (; VAR_1 > 0; VAR_1--)
            *VAR_2++ = *VAR_3++;
    }
    else
    {
        VAR_2 += VAR_1-1;
        VAR_3 += VAR_1-1;
        for (; VAR_1 > 0; VAR_1--)
            *VAR_2-- = *VAR_3--;
    }

    return;
}
