
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Width; int Channels; int RequestLines; } ;
struct TYPE_5__ {TYPE_1__ FixedDma; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (char*,...) ;

void
FUNC_3 (
    ACPI_OP_WALK_INFO *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{

    FUNC_1 (VAR_4);
    FUNC_2 ("FixedDMA (0x%4.4X, 0x%4.4X, ",
        VAR_2->FixedDma.RequestLines,
        VAR_2->FixedDma.Channels);

    if (VAR_2->FixedDma.Width <= 5)
    {
        FUNC_2 ("%s, ",
            VAR_0 [VAR_2->FixedDma.Width]);
    }
    else
    {
        FUNC_2 ("%X /* INVALID DMA WIDTH */, ",
            VAR_2->FixedDma.Width);
    }



    FUNC_0 ();
    FUNC_2 (")\n");
}
