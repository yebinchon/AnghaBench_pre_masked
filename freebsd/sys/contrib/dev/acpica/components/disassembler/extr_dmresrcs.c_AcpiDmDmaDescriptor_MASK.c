
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int DmaChannelMask; int Flags; } ;
struct TYPE_5__ {TYPE_1__ Dma; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_6 (char*,...) ;

void
FUNC_7 (
    ACPI_OP_WALK_INFO *VAR_3,
    AML_RESOURCE *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{

    FUNC_5 (VAR_6);
    FUNC_6 ("DMA (%s, %s, %s, ",
        VAR_2 [FUNC_1 (VAR_4->Dma.Flags, 5)],
        VAR_0 [FUNC_0 (VAR_4->Dma.Flags, 2)],
        VAR_1 [FUNC_2 (VAR_4->Dma.Flags)]);



    FUNC_4 ();
    FUNC_6 (")\n");

    FUNC_5 (VAR_6 + 1);
    FUNC_3 (VAR_4->Dma.DmaChannelMask);
}
