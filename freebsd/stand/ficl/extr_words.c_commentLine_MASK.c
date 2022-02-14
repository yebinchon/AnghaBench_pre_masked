
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_VM ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    char *VAR_1 = FUNC_0(VAR_0);
    char *VAR_2 = FUNC_1(VAR_0);
    char VAR_3 = *VAR_1;

    while ((VAR_1 != VAR_2) && (VAR_3 != '\r') && (VAR_3 != '\n'))
    {
        VAR_3 = *++VAR_1;
    }






    if (VAR_1 != VAR_2)
    {
        VAR_1++;

        if ( (VAR_1 != VAR_2) && (VAR_3 != *VAR_1)
             && ((*VAR_1 == '\r') || (*VAR_1 == '\n')) )
            VAR_1++;
    }

    FUNC_2(VAR_0, VAR_1);
    return;
}
