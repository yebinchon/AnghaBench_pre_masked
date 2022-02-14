
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_VM ;
typedef scalar_t__ FICL_UNS ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    char VAR_1;
    FICL_UNS VAR_2;
    char *VAR_3;



    VAR_1 = (char)FUNC_0();
    VAR_2 = FUNC_2();
    VAR_3 = (char *)FUNC_1();

    while (VAR_2 > 0)
    {
        *VAR_3++ = VAR_1;
        VAR_2--;
    }
    return;
}
