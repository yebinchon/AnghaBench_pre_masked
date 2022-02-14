
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (
    char *VAR_1,
    char *VAR_2)
{
    UINT32 VAR_3;


    for (VAR_3 = 0; (VAR_3 < VAR_0); VAR_3++)
    {
        if (*VAR_1)
        {
            *VAR_2 = *VAR_1;
            VAR_1++;
        }
        else
        {
            *VAR_2 = '_';
        }

        VAR_2++;
    }
}
