
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRINGINFO ;
typedef int FICL_VM ;
typedef scalar_t__ FICL_UNS ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

STRINGINFO FUNC_7(FICL_VM *VAR_0)
{
    char *VAR_1 = FUNC_4(VAR_0);
    char *VAR_2 = FUNC_5(VAR_0);
    STRINGINFO VAR_3;
    FICL_UNS VAR_4 = 0;
    char VAR_5 = 0;

    VAR_1 = FUNC_3(VAR_1, VAR_2);
    FUNC_1(VAR_3, VAR_1);
    for (;;)
    {
        if (VAR_2 == VAR_1)
            break;
        VAR_5 = *VAR_1;
        if (FUNC_2(VAR_5))
            break;
        VAR_4++;
        VAR_1++;
    }

    FUNC_0(VAR_3, VAR_4);

    if ((VAR_2 != VAR_1) && FUNC_2(VAR_5))
        VAR_1++;

    FUNC_6(VAR_0, VAR_1);

    return VAR_3;
}
