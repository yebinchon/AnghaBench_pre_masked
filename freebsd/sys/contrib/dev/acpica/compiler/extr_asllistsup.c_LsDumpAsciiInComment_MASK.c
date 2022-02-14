
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT8 ;
typedef size_t UINT32 ;


 int FUNC_0 (size_t,char*,...) ;
 scalar_t__ FUNC_1 (char) ;

void
FUNC_2 (
    UINT32 VAR_0,
    UINT32 VAR_1,
    UINT8 *VAR_2)
{
    UINT8 VAR_3 = 0;
    UINT8 VAR_4;
    UINT32 VAR_5;


    FUNC_0 (VAR_0, "    \"");
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
        VAR_4 = VAR_3;
        VAR_3 = VAR_2[VAR_5];

        if (FUNC_1 (VAR_3))
        {


            if (((VAR_4 == '*') && (VAR_3 == '/')) ||
                ((VAR_4 == '/') && (VAR_3 == '*')))
            {


                FUNC_0 (VAR_0, " ");
            }

            FUNC_0 (VAR_0, "%c", VAR_3);
        }
        else
        {


            FUNC_0 (VAR_0, ".");
        }
    }

    FUNC_0 (VAR_0, "\"");
}
