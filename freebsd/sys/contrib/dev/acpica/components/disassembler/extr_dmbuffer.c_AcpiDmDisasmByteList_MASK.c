
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef size_t UINT32 ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void
FUNC_3 (
    UINT32 VAR_1,
    UINT8 *VAR_2,
    UINT32 VAR_3)
{
    UINT32 VAR_4;
    UINT32 VAR_5;
    UINT32 VAR_6;
    UINT8 VAR_7;


    if (!VAR_3)
    {
        return;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += VAR_0)
    {


        FUNC_0 (VAR_1);
        if (VAR_3 > VAR_0)
        {
            FUNC_1 ("/* %04X */ ", VAR_4);
        }



        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        {
            VAR_6 = VAR_4 + VAR_5;
            if (VAR_6 >= VAR_3)
            {


                FUNC_1 ("      ");
                continue;
            }

            FUNC_1 (" 0x%2.2X", VAR_2[VAR_6]);



            if (VAR_6 < (VAR_3 - 1))
            {
                FUNC_1 (",");
            }
            else
            {
                FUNC_1 (" ");
            }
        }



        FUNC_1 ("  // ");
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        {
            VAR_6 = VAR_4 + VAR_5;
            if (VAR_6 >= VAR_3)
            {
                break;
            }

            VAR_7 = VAR_2[VAR_6];
            if (FUNC_2 (VAR_7))
            {
                FUNC_1 ("%c", VAR_7);
            }
            else
            {
                FUNC_1 (".");
            }
        }



        FUNC_1 ("\n");
    }
}
