
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef size_t UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ,size_t,int *) ;

__attribute__((used)) static void
FUNC_5 (
    void)
{
    UINT8 VAR_3[VAR_2];
    UINT32 VAR_4;
    UINT32 VAR_5 = 0;
    UINT32 VAR_6;
    UINT32 VAR_7;




    VAR_6 = FUNC_0 (VAR_0);
    FUNC_2 (VAR_0, 0);

    FUNC_1 (VAR_1, "; Assembly code source output\n");
    FUNC_1 (VAR_1, "; AML code block contains 0x%X bytes\n;\n",
        VAR_6);

    while (VAR_5 < VAR_6)
    {


        VAR_4 = FUNC_3 (VAR_3);
        if (!VAR_4)
        {
            break;
        }

        FUNC_1 (VAR_1, "  db  ");

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        {




            FUNC_1 (VAR_1, "0%2.2Xh", VAR_3[VAR_7]);
            if ((VAR_7 + 1) < VAR_4)
            {
                FUNC_1 (VAR_1, ",");
            }
        }

        FUNC_1 (VAR_1, " ");



        if (VAR_4 < VAR_2)
        {
            FUNC_1 (VAR_1, "%*s",
                5 * (VAR_2 - VAR_4), " ");
        }



        FUNC_1 (VAR_1, "  ; %8.8X", VAR_5);
        FUNC_4 (VAR_1, VAR_4, VAR_3);

        FUNC_1 (VAR_1, "\n");

        VAR_5 += VAR_4;
    }

    FUNC_1 (VAR_1, "\n");
}
