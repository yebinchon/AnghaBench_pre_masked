
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*,char*,...) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,char*,char*,...) ;
 int FUNC_2 (char*,char*,char*,char*,...) ;
 int VAR_7 ;

void
FUNC_3 (
    UINT8 VAR_8)
{
    char *VAR_9;
    char VAR_10[] = "     *";
    char VAR_11[] = "";


    if (!VAR_1)
    {
        return;
    }

    if (VAR_1 == VAR_2)
    {
        return;
    }

    VAR_9 = VAR_8 ? VAR_10 : VAR_11;

    FUNC_2 (VAR_3,
        "%s iASL Warning: There %s %u external control method%s found during\n"
        "%s disassembly, but only %u %s resolved (%u unresolved). Additional\n"
        "%s ACPI tables may be required to properly disassemble the code. This\n"
        "%s resulting disassembler output file may not compile because the\n"
        "%s disassembler did not know how many arguments to assign to the\n"
        "%s unresolved methods. Note: SSDTs can be dynamically loaded at\n"
        "%s runtime and may or may not be available via the host OS.\n",
        VAR_9, (VAR_1 != 1 ? "were" : "was"),
        VAR_1, (VAR_1 != 1 ? "s" : ""),
        VAR_9, VAR_2,
        (VAR_2 != 1 ? "were" : "was"),
        (VAR_1 - VAR_2),
        VAR_9, VAR_9, VAR_9, VAR_9, VAR_9);

    FUNC_2 (VAR_4,
        "%s To specify the tables needed to resolve external control method\n"
        "%s references, the -e option can be used to specify the filenames.\n"
        "%s Example iASL invocations:\n"
        "%s     iasl -e ssdt1.aml ssdt2.aml ssdt3.aml -d dsdt.aml\n"
        "%s     iasl -e dsdt.aml ssdt2.aml -d ssdt1.aml\n"
        "%s     iasl -e ssdt*.aml -d dsdt.aml\n",
        VAR_9, VAR_9, VAR_9, VAR_9, VAR_9, VAR_9);

    FUNC_2 (VAR_5,
        "%s In addition, the -fe option can be used to specify a file containing\n"
        "%s control method external declarations with the associated method\n"
        "%s argument counts. Each line of the file must be of the form:\n"
        "%s     External (<method pathname>, MethodObj, <argument count>)\n"
        "%s Invocation:\n"
        "%s     iasl -fe refs.txt -d dsdt.aml\n",
        VAR_9, VAR_9, VAR_9, VAR_9, VAR_9, VAR_9);

    FUNC_2 (VAR_6,
        "%s The following methods were unresolved and many not compile properly\n"
        "%s because the disassembler had to guess at the number of arguments\n"
        "%s required for each:\n",
        VAR_9, VAR_9, VAR_9);

    if (VAR_8)
    {
        if (!VAR_0)
        {


           FUNC_0 ("    /*\n%s     *\n%s     *\n%s     *\n%s     */\n",
               VAR_3, VAR_4, VAR_5,
               VAR_6);
        }
        else
        {


            FUNC_0 ("    /*\n%s     *\n%s     *\n%s     */\n",
               VAR_3, VAR_5, VAR_6);
        }
    }
    else
    {
        if (!VAR_0)
        {


            FUNC_1 (VAR_7, "\n%s\n%s\n%s\n",
               VAR_3, VAR_4, VAR_5);
        }
        else
        {


            FUNC_1 (VAR_7, "\n%s\n%s\n",
               VAR_3, VAR_5);
        }
    }
}
