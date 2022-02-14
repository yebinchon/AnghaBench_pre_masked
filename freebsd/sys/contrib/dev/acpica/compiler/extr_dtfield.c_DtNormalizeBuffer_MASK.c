
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT32 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (
    char *VAR_2,
    UINT32 *VAR_3)
{
    char *VAR_4;
    char *VAR_5;
    UINT32 VAR_6 = 0;
    BOOLEAN VAR_7 = VAR_1;
    char VAR_8;


    VAR_4 = FUNC_0 (FUNC_1 (VAR_2) + 1);
    VAR_5 = VAR_4;

    while ((VAR_8 = *VAR_2++))
    {
        switch (VAR_8)
        {


        case '[':
        case ']':
        case ' ':
        case ',':

            VAR_7 = VAR_1;
            break;

        default:

            if (VAR_7)
            {


                if (VAR_4[0])
                {
                    *VAR_5++ = ' ';
                    VAR_6++;
                }

                VAR_7 = VAR_0;
            }

            *VAR_5++ = VAR_8;
            break;
        }
    }

    *VAR_3 = VAR_6 + 1;
    return (VAR_4);
}
