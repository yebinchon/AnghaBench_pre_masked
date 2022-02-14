
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ DeviceId; scalar_t__ Type; } ;
typedef TYPE_1__ ACPI_IVRS_HEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0(ACPI_IVRS_HEADER *VAR_3, ACPI_IVRS_HEADER *VAR_4)
{



 if ((VAR_3->DeviceId == VAR_4->DeviceId) &&
  (VAR_3->Type == VAR_1) &&
  ((VAR_4->Type == VAR_0) ||
  (VAR_4->Type == VAR_2))) {
  return (1);
 }

 return (0);
}
