
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int AddressLength; int Alignment; int Maximum; int Minimum; int Flags; } ;
struct TYPE_5__ {TYPE_1__ Io; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_5 (char*,...) ;

void
FUNC_6 (
    ACPI_OP_WALK_INFO *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{

    FUNC_4 (VAR_4);
    FUNC_5 ("IO (%s,\n",
        VAR_0 [FUNC_0 (VAR_2->Io.Flags)]);

    FUNC_4 (VAR_4 + 1);
    FUNC_2 (VAR_2->Io.Minimum, "Range Minimum");

    FUNC_4 (VAR_4 + 1);
    FUNC_2 (VAR_2->Io.Maximum, "Range Maximum");

    FUNC_4 (VAR_4 + 1);
    FUNC_3 (VAR_2->Io.Alignment, "Alignment");

    FUNC_4 (VAR_4 + 1);
    FUNC_3 (VAR_2->Io.AddressLength, "Length");



    FUNC_4 (VAR_4 + 1);
    FUNC_1 ();
    FUNC_5 (")\n");
}
