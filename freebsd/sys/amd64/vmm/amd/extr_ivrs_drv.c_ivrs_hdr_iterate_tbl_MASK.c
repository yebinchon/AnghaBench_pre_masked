
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int (* ivhd_iter_t ) (TYPE_2__*,void*) ;
struct TYPE_6__ {scalar_t__ Length; } ;
struct TYPE_8__ {TYPE_1__ Header; } ;
struct TYPE_7__ {int Length; int Type; } ;
typedef TYPE_3__ ACPI_TABLE_IVRS ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_IVRS_HEADER ;


 scalar_t__ FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int ,int,int **) ;



 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(ivhd_iter_t VAR_1, void *VAR_2)
{
 ACPI_TABLE_IVRS *VAR_3;
 ACPI_IVRS_HEADER *VAR_4, *VAR_5;
 ACPI_STATUS VAR_6;

 VAR_6 = FUNC_1(VAR_0, 1, (ACPI_TABLE_HEADER **)&VAR_3);
 if (FUNC_0(VAR_6))
  return;

 if (VAR_3->Header.Length == 0) {
  return;
 }

 VAR_4 = (ACPI_IVRS_HEADER *)(VAR_3 + 1);
 VAR_5 = (ACPI_IVRS_HEADER *)((char *)VAR_3 + VAR_3->Header.Length);

 while (VAR_4 < VAR_5) {
  if ((uint8_t *)VAR_4 + VAR_4->Length > (uint8_t *)VAR_5) {
   FUNC_2("AMD-Vi:IVHD/IVMD is corrupted, length : %d\n",
       VAR_4->Length);
   break;
  }

  switch (VAR_4->Type) {
  case 129:
  case 130:
  case 128:
   if (!VAR_1(VAR_4, VAR_2))
    return;
   break;

  case 133:
  case 132:
  case 131:
   if (!VAR_1(VAR_4, VAR_2))
    return;

   break;

  default:
   FUNC_2("AMD-Vi:Not IVHD/IVMD type(%d)", VAR_4->Type);

  }

  VAR_4 = (ACPI_IVRS_HEADER *)((uint8_t *)VAR_4 +
   VAR_4->Length);
 }
}
