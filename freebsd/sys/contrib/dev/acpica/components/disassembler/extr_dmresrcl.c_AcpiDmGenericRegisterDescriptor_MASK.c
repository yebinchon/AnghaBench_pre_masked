
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ AccessSize; int Address; int BitOffset; int BitWidth; int AddressSpaceId; } ;
struct TYPE_5__ {TYPE_1__ GenericReg; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6 (
    ACPI_OP_WALK_INFO *VAR_0,
    AML_RESOURCE *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{

    FUNC_4 (VAR_3);
    FUNC_5 ("Register (");
    FUNC_0 (VAR_1->GenericReg.AddressSpaceId);
    FUNC_5 ("\n");

    FUNC_4 (VAR_3 + 1);
    FUNC_3 (VAR_1->GenericReg.BitWidth, "Bit Width");

    FUNC_4 (VAR_3 + 1);
    FUNC_3 (VAR_1->GenericReg.BitOffset, "Bit Offset");

    FUNC_4 (VAR_3 + 1);
    FUNC_2 (VAR_1->GenericReg.Address, "Address");



    FUNC_4 (VAR_3 + 1);
    if (VAR_1->GenericReg.AccessSize)
    {
        FUNC_5 ("0x%2.2X,               // %s\n",
            VAR_1->GenericReg.AccessSize, "Access Size");
        FUNC_4 (VAR_3 + 1);
    }
    else
    {
        FUNC_5 (",");
    }



    FUNC_1 ();
    FUNC_5 (")\n");
}
