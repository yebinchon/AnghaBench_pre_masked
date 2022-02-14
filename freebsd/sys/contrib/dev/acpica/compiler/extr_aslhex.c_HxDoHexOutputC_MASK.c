
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
struct TYPE_2__ {int Filename; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (size_t,char*,...) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (size_t,size_t,int *) ;

__attribute__((used)) static void
FUNC_7 (
    void)
{
    UINT8 VAR_4[VAR_3];
    UINT32 VAR_5;
    UINT32 VAR_6 = 0;
    UINT32 VAR_7;
    UINT32 VAR_8;
    char *VAR_9;




    VAR_9 = FUNC_1 (VAR_2 [VAR_1].Filename);



    VAR_7 = FUNC_2 (VAR_0);
    FUNC_4 (VAR_0, 0);



    FUNC_3 (VAR_1, " * C source code output\n");
    FUNC_3 (VAR_1, " * AML code block contains 0x%X bytes\n *\n */\n",
        VAR_7);

    FUNC_3 (VAR_1, "#ifndef __%s_HEX__\n", VAR_9);
    FUNC_3 (VAR_1, "#define __%s_HEX__\n\n", VAR_9);

    FUNC_0 (VAR_9);
    FUNC_3 (VAR_1, "unsigned char %s_aml_code[] =\n{\n", VAR_9);

    while (VAR_6 < VAR_7)
    {


        VAR_5 = FUNC_5 (VAR_4);
        if (!VAR_5)
        {
            break;
        }

        FUNC_3 (VAR_1, "    ");

        for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
        {





            FUNC_3 (VAR_1, "0x%2.2X", VAR_4[VAR_8]);
            if ((VAR_6 + VAR_8 + 1) < VAR_7)
            {
                FUNC_3 (VAR_1, ",");
            }
            else
            {
                FUNC_3 (VAR_1, " ");
            }
        }



        if (VAR_5 < VAR_3)
        {
            FUNC_3 (VAR_1, "%*s",
                5 * (VAR_3 - VAR_5), " ");
        }



        FUNC_3 (VAR_1, "  /* %8.8X", VAR_6);
        FUNC_6 (VAR_1, VAR_5, VAR_4);

        FUNC_3 (VAR_1, "%*s*/\n",
            VAR_3 - VAR_5 + 1, " ");

        VAR_6 += VAR_5;
    }

    FUNC_3 (VAR_1, "};\n\n");
    FUNC_3 (VAR_1, "#endif\n");
}
