
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int Minimum; int Flags; } ;
struct TYPE_5__ {TYPE_1__ Memory24; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int * VAR_0 ;
 int FUNC_4 (char*,...) ;

void
FUNC_5 (
    ACPI_OP_WALK_INFO *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{



    FUNC_2 (VAR_4);
    FUNC_4 ("Memory24 (%s,\n",
        VAR_0 [FUNC_0 (VAR_2->Memory24.Flags)]);



    FUNC_3 (&VAR_2->Memory24.Minimum, 16, VAR_4);



    FUNC_2 (VAR_4 + 1);
    FUNC_1 ();
    FUNC_4 (")\n");
}
