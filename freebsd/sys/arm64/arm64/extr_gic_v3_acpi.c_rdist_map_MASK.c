
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct madt_table_data {int count; int dev; int parent; } ;
struct TYPE_5__ {int Length; int BaseAddress; } ;
struct TYPE_4__ {int Type; } ;
typedef TYPE_1__ ACPI_SUBTABLE_HEADER ;
typedef TYPE_2__ ACPI_MADT_GENERIC_REDISTRIBUTOR ;



 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(ACPI_SUBTABLE_HEADER *VAR_1, void *VAR_2)
{
 ACPI_MADT_GENERIC_REDISTRIBUTOR *VAR_3;
 struct madt_table_data *VAR_4;

 VAR_4 = (struct madt_table_data *)VAR_2;

 switch(VAR_1->Type) {
 case 128:
  VAR_3 = (ACPI_MADT_GENERIC_REDISTRIBUTOR *)VAR_1;

  VAR_4->count++;
  FUNC_0(VAR_4->parent, VAR_4->dev,
      VAR_0, VAR_4->count, VAR_3->BaseAddress,
      VAR_3->Length);
  break;

 default:
  break;
 }
}
