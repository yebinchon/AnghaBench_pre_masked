
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;





 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,scalar_t__,int *) ;
 int FUNC_3 (int,scalar_t__,int *) ;
 int VAR_5 ;

void
FUNC_4 (
    UINT32 VAR_6)
{
    UINT32 VAR_7;


    if (VAR_2 == 0)
    {
        return;
    }



    switch (VAR_6)
    {
    case 128:

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
        {
            FUNC_0 (VAR_6, "%2.2X ", VAR_0[VAR_7]);
        }

        for (VAR_7 = 0; VAR_7 < ((VAR_4 - VAR_2) * 3); VAR_7++)
        {
            FUNC_1 (VAR_6, ".", 1);
        }



        FUNC_2 (VAR_6, VAR_2, VAR_0);
        break;


    case 130:

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
        {
            if (VAR_7 > 0)
            {
                FUNC_0 (VAR_6, ",");
            }

            FUNC_0 (VAR_6, "0%2.2Xh", VAR_0[VAR_7]);
        }

        for (VAR_7 = 0; VAR_7 < ((VAR_4 - VAR_2) * 5); VAR_7++)
        {
            FUNC_1 (VAR_6, " ", 1);
        }

        FUNC_0 (VAR_6, "  ;%8.8X",
            VAR_1 - VAR_4);



        FUNC_2 (VAR_6, VAR_2, VAR_0);
        break;


    case 129:

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
        {
            FUNC_0 (VAR_6, "0x%2.2X,", VAR_0[VAR_7]);
        }



        for (VAR_7 = 0; VAR_7 < ((VAR_4 - VAR_2) * 5); VAR_7++)
        {
            FUNC_1 (VAR_6, " ", 1);
        }



        FUNC_0 (VAR_6, "    /* %8.8X",
            VAR_1 - VAR_2);



        FUNC_3 (VAR_6, VAR_2, VAR_0);
        FUNC_0 (VAR_6, " */");
        break;

    default:



        return;
    }

    FUNC_0 (VAR_6, "\n");

    VAR_2 = 0;
    VAR_3 = VAR_5;
}
