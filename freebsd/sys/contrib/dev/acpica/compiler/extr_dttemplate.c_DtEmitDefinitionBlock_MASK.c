
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int FILE ;


 int FUNC_0 (int ,char*,char*,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (
    FILE *VAR_1,
    char *VAR_2,
    char *VAR_3,
    UINT32 VAR_4)
{
    int VAR_5;


    VAR_5 = FUNC_0 (*VAR_1,
        "DefinitionBlock (\"\", \"%4.4s\", 2, \"Intel\", \"_%4.4s_%.2X\", 0x00000001)\n"
        "{\n"
        "    Method (%2.2s%.2X)\n"
        "    {\n"
        "    }\n"
        "}\n\n",
        VAR_3, VAR_3, VAR_4, VAR_3, VAR_4);

    if (VAR_5 < 0)
    {
        FUNC_0 (VAR_0,
            "Could not write %4.4s to output file %s\n",
            VAR_3, VAR_2);
    }

    return (VAR_5);
}
