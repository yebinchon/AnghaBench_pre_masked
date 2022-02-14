
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Flags; int IrqMask; } ;
struct TYPE_5__ {TYPE_1__ Irq; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int,int) ;
 size_t FUNC_1 (int,int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (char*,...) ;

void
FUNC_7 (
    ACPI_OP_WALK_INFO *VAR_4,
    AML_RESOURCE *VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7)
{

    FUNC_5 (VAR_7);
    FUNC_6 ("%s (",
        VAR_1 [FUNC_2 (VAR_6)]);



    if (VAR_6 & 1)
    {
        FUNC_6 ("%s, %s, %s, ",
            VAR_0 [FUNC_2 (VAR_5->Irq.Flags)],
            VAR_2 [FUNC_0 (VAR_5->Irq.Flags, 3)],
            VAR_3 [FUNC_1 (VAR_5->Irq.Flags, 4)]);
    }



    FUNC_4 ();
    FUNC_6 (")\n");

    FUNC_5 (VAR_7 + 1);
    FUNC_3 (VAR_5->Irq.IrqMask);
}
