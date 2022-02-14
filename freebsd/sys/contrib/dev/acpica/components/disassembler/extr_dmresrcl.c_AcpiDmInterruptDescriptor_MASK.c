
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int InterruptCount; scalar_t__* Interrupts; int ResourceLength; int Flags; } ;
struct TYPE_6__ {TYPE_1__ ExtendedIrq; } ;
typedef int AML_RESOURCE_EXTENDED_IRQ ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
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
    UINT32 VAR_8;


    FUNC_4 (VAR_7);
    FUNC_6 ("Interrupt (%s, %s, %s, %s, ",
        VAR_0 [FUNC_2 (VAR_5->ExtendedIrq.Flags)],
        VAR_1 [FUNC_0 (VAR_5->ExtendedIrq.Flags, 1)],
        VAR_2 [FUNC_0 (VAR_5->ExtendedIrq.Flags, 2)],
        VAR_3 [FUNC_1 (VAR_5->ExtendedIrq.Flags, 3)]);






    FUNC_5 (VAR_5,
        sizeof (AML_RESOURCE_EXTENDED_IRQ) +
            ((UINT32) VAR_5->ExtendedIrq.InterruptCount - 1) * sizeof (UINT32),
        VAR_5->ExtendedIrq.ResourceLength);



    FUNC_3 ();
    FUNC_6 (")\n");



    FUNC_4 (VAR_7);
    FUNC_6 ("{\n");
    for (VAR_8 = 0; VAR_8 < VAR_5->ExtendedIrq.InterruptCount; VAR_8++)
    {
        FUNC_4 (VAR_7 + 1);
        FUNC_6 ("0x%8.8X,\n",
            (UINT32) VAR_5->ExtendedIrq.Interrupts[VAR_8]);
    }

    FUNC_4 (VAR_7);
    FUNC_6 ("}\n");
}
