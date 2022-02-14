
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {char* Signature; char* Description; } ;
typedef TYPE_1__ AH_TABLE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1 (
    void)
{
    const AH_TABLE *VAR_2;
    UINT32 VAR_3;


    FUNC_0 ("\nACPI tables supported by iASL version %8.8X:\n"
        "  (Compiler, Disassembler, Template Generator)\n\n",
        VAR_0);



    FUNC_0 ("\n  Supported ACPI tables:\n");
    for (VAR_2 = VAR_1, VAR_3 = 1;
         VAR_2->Signature; VAR_2++, VAR_3++)
    {
        FUNC_0 ("%8u) %s    %s\n", VAR_3,
            VAR_2->Signature, VAR_2->Description);
    }
}
