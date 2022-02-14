
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int ) ;

char *
FUNC_1 (
    char *VAR_2,
    char *VAR_3)
{
    UINT32 VAR_4;
    UINT32 VAR_5;


    for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
    {
        VAR_1[VAR_4] = VAR_2[VAR_4];
    }

    VAR_1[VAR_4] = '_';
    VAR_4++;

    for (VAR_5 = 0; VAR_5 < 8 && (VAR_3[VAR_5] != ' ') && (VAR_3[VAR_5] != 0); VAR_4++, VAR_5++)
    {
        VAR_1[VAR_4] = VAR_3[VAR_5];
    }

    VAR_1[VAR_4] = 0;
    FUNC_0 (VAR_1, VAR_0);
    return (VAR_1);
}
