
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef size_t UINT32 ;
struct TYPE_6__ {int * TableOffsetEntry; } ;
struct TYPE_5__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 TYPE_3__* FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (size_t,int,char*,size_t) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4 (
    ACPI_TABLE_HEADER *VAR_1)
{
    UINT64 *VAR_2;
    UINT32 VAR_3;
    UINT32 VAR_4;
    UINT32 VAR_5;




    VAR_2 = FUNC_0 (VAR_0, VAR_1)->TableOffsetEntry;
    VAR_4 = sizeof (ACPI_TABLE_HEADER);



    VAR_3 = (VAR_1->Length - sizeof (ACPI_TABLE_HEADER)) / sizeof (UINT64);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        FUNC_2 (VAR_4, sizeof (UINT64), "ACPI Table Address", VAR_5);
        FUNC_3 ("%8.8X%8.8X\n", FUNC_1 (VAR_2[VAR_5]));
        VAR_4 += sizeof (UINT64);
    }
}
