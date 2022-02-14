
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {int Granularity; } ;
struct TYPE_8__ {TYPE_1__ Address64; } ;
typedef int AML_RESOURCE_ADDRESS64 ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (
    ACPI_OP_WALK_INFO *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{



    FUNC_0 (VAR_2, VAR_0, VAR_4);



    FUNC_1 (&VAR_2->Address64.Granularity, 64, VAR_4);



    FUNC_4 (VAR_4 + 1);
    FUNC_5 (VAR_2, sizeof (AML_RESOURCE_ADDRESS64), VAR_3);



    FUNC_3 ();



    FUNC_2 (VAR_2);
    FUNC_6 (")\n");
}
