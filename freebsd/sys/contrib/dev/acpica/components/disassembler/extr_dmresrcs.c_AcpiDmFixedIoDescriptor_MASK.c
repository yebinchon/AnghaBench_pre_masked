
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int AddressLength; int Address; } ;
struct TYPE_5__ {TYPE_1__ FixedIo; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;

void
FUNC_5 (
    ACPI_OP_WALK_INFO *VAR_0,
    AML_RESOURCE *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{

    FUNC_3 (VAR_3);
    FUNC_4 ("FixedIO (\n");

    FUNC_3 (VAR_3 + 1);
    FUNC_1 (VAR_1->FixedIo.Address, "Address");

    FUNC_3 (VAR_3 + 1);
    FUNC_2 (VAR_1->FixedIo.AddressLength, "Length");



    FUNC_3 (VAR_3 + 1);
    FUNC_0 ();
    FUNC_4 (")\n");
}
