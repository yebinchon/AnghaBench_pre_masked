
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef scalar_t__ UINT8 ;


 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4 (
    char *VAR_3,
    UINT8 VAR_4)
{
    time_t VAR_5;


    FUNC_3 (&VAR_5);



    FUNC_1 ("/*\n");
    FUNC_1 (FUNC_0 (VAR_1, " * "));

    if (VAR_4 == VAR_0)
    {
        if (VAR_2)
        {
            FUNC_1 (
                " * Disassembling to symbolic ASL+ operators\n"
                " *\n");
        }
        else
        {
            FUNC_1 (
                " * Disassembling to non-symbolic legacy ASL operators\n"
                " *\n");
        }
    }

    FUNC_1 (" * Disassembly of %s, %s", VAR_3, FUNC_2 (&VAR_5));
    FUNC_1 (" *\n");
}
