
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ PciSegment; int EndBusNumber; int StartBusNumber; int Address; } ;
struct TYPE_4__ {int Length; } ;
typedef int ACPI_TABLE_MCFG ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_MCFG_ALLOCATION ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,TYPE_1__**) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{

 ACPI_TABLE_HEADER *VAR_1;
 ACPI_MCFG_ALLOCATION *VAR_2, *VAR_3;
 ACPI_STATUS VAR_4;

 VAR_4 = FUNC_1(VAR_0, 1, &VAR_1);
 if (FUNC_0(VAR_4))
  return;

 VAR_3 = (ACPI_MCFG_ALLOCATION *)((char *)VAR_1 + VAR_1->Length);
 VAR_2 = (ACPI_MCFG_ALLOCATION *)((ACPI_TABLE_MCFG *)VAR_1 + 1);
 while (VAR_2 < VAR_3) {
  if (VAR_2->PciSegment == 0) {
   FUNC_2(VAR_2->Address, VAR_2->StartBusNumber,
       VAR_2->EndBusNumber);
   return;
  }
  VAR_2++;
 }

}
