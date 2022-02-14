
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STRINGINFO ;
typedef int FICL_VM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

STRINGINFO FUNC_6(FICL_VM *VAR_0, char VAR_1, char VAR_2)
{
    STRINGINFO VAR_3;
    char *VAR_4 = FUNC_3(VAR_0);
    char *VAR_5 = FUNC_4(VAR_0);
    char VAR_6;

    if (VAR_2)
    {
        while ((VAR_4 != VAR_5) && (*VAR_4 == VAR_1))
            VAR_4++;
    }

    FUNC_2(VAR_3, VAR_4);

    for (VAR_6 = *VAR_4; (VAR_4 != VAR_5)
                  && (VAR_6 != VAR_1)
                  && (VAR_6 != '\r')
                  && (VAR_6 != '\n'); VAR_6 = *++VAR_4)
    {
        ;
    }


    FUNC_1(VAR_3, VAR_4 - FUNC_0(VAR_3));

    if ((VAR_4 != VAR_5) && (*VAR_4 == VAR_1))
        VAR_4++;

    FUNC_5(VAR_0, VAR_4);
    return VAR_3;
}
