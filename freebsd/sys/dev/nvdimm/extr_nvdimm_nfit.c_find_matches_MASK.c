
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ Type; scalar_t__ Length; } ;
struct TYPE_5__ {int Length; } ;
struct TYPE_6__ {TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_TABLE_NFIT ;
typedef TYPE_3__ ACPI_NFIT_HEADER ;


 int FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(ACPI_TABLE_NFIT *VAR_0, uint16_t VAR_1, uint16_t VAR_2,
    uint64_t VAR_3, uint64_t VAR_4, void **VAR_5, int VAR_6)
{
 ACPI_NFIT_HEADER *VAR_7, *VAR_8;
 uint64_t VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_7 = (ACPI_NFIT_HEADER *)(VAR_0 + 1);
 VAR_8 = (ACPI_NFIT_HEADER *)((char *)VAR_0 +
     VAR_0->Header.Length);
 VAR_10 = FUNC_2(FUNC_1(VAR_3), 8) / 8;
 VAR_11 = 0;

 while (VAR_7 < VAR_8) {
  if (VAR_7->Type == VAR_1) {
   FUNC_0((char *)VAR_7 + VAR_2, &VAR_9, VAR_10);
   VAR_9 &= VAR_3;
   if (VAR_9 == VAR_4) {
    if (VAR_6 > 0) {
     VAR_5[VAR_11] = VAR_7;
     VAR_6--;
    }
    VAR_11++;
   }
  }
  if (VAR_7->Length == 0)
   break;
  VAR_7 = (ACPI_NFIT_HEADER *)((char *)VAR_7 + VAR_7->Length);
 }
 return (VAR_11);
}
