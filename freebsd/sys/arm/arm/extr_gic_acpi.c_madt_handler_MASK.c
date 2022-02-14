
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct madt_table_data {TYPE_2__** intr; int * dist; int parent; } ;
struct TYPE_5__ {size_t CpuInterfaceNumber; } ;
struct TYPE_4__ {int Type; } ;
typedef TYPE_1__ ACPI_SUBTABLE_HEADER ;
typedef TYPE_2__ ACPI_MADT_GENERIC_INTERRUPT ;
typedef int ACPI_MADT_GENERIC_DISTRIBUTOR ;




 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(ACPI_SUBTABLE_HEADER *VAR_2, void *VAR_3)
{
 struct madt_table_data *VAR_4;
 ACPI_MADT_GENERIC_INTERRUPT *VAR_5;

 VAR_4 = (struct madt_table_data *)VAR_3;

 switch(VAR_2->Type) {
 case 129:
  if (VAR_4->dist != ((void*)0)) {
   if (VAR_1)
    FUNC_0(VAR_4->parent,
        "gic: Already have a distributor table");
  } else
   VAR_4->dist =
       (ACPI_MADT_GENERIC_DISTRIBUTOR *)VAR_2;
  break;
 case 128:
  VAR_5 = (ACPI_MADT_GENERIC_INTERRUPT *)VAR_2;
  if (VAR_5->CpuInterfaceNumber < VAR_0)
   VAR_4->intr[VAR_5->CpuInterfaceNumber] = VAR_5;
  break;
 }
}
