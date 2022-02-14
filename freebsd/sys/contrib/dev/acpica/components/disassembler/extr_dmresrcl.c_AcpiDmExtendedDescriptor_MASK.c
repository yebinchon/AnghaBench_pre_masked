
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int TypeSpecific; int Granularity; } ;
struct TYPE_7__ {TYPE_1__ ExtAddress64; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (
    ACPI_OP_WALK_INFO *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{



    FUNC_0 (
        VAR_2, VAR_0, VAR_4);



    FUNC_1 (&VAR_2->ExtAddress64.Granularity, 64, VAR_4);



    FUNC_5 (VAR_4 + 1);
    FUNC_4 (VAR_2->ExtAddress64.TypeSpecific,
        "Type-Specific Attributes");



    FUNC_5 (VAR_4 + 1);
    FUNC_3 ();



    FUNC_2 (VAR_2);
    FUNC_6 (")\n");
}
