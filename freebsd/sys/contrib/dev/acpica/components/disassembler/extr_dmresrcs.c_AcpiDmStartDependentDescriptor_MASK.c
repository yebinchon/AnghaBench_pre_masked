
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Flags; } ;
struct TYPE_5__ {TYPE_1__ StartDpf; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4 (
    ACPI_OP_WALK_INFO *VAR_0,
    AML_RESOURCE *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{

    FUNC_2 (VAR_3);

    if (VAR_2 & 1)
    {
        FUNC_3 ("StartDependentFn (0x%2.2X, 0x%2.2X)\n",
            (UINT32) FUNC_1 (VAR_1->StartDpf.Flags),
            (UINT32) FUNC_0 (VAR_1->StartDpf.Flags, 2));
    }
    else
    {
        FUNC_3 ("StartDependentFnNoPri ()\n");
    }

    FUNC_2 (VAR_3);
    FUNC_3 ("{\n");
}
