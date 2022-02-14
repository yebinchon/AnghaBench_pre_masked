
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct madt_table_data {int * dist; int parent; } ;
struct TYPE_3__ {int Type; } ;
typedef TYPE_1__ ACPI_SUBTABLE_HEADER ;
typedef int ACPI_MADT_GENERIC_DISTRIBUTOR ;




 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(ACPI_SUBTABLE_HEADER *VAR_1, void *VAR_2)
{
 struct madt_table_data *VAR_3;

 VAR_3 = (struct madt_table_data *)VAR_2;

 switch(VAR_1->Type) {
 case 129:
  if (VAR_3->dist != ((void*)0)) {
   if (VAR_0)
    FUNC_0(VAR_3->parent,
        "gic: Already have a distributor table");
   break;
  }
  VAR_3->dist = (ACPI_MADT_GENERIC_DISTRIBUTOR *)VAR_1;
  break;

 case 128:
  break;

 default:
  break;
 }
}
