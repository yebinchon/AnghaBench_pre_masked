
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {uintptr_t Address; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__**) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3(ACPI_HANDLE VAR_3, UINT32 VAR_4, void *VAR_5,
    void **VAR_6)
{
 ACPI_DEVICE_INFO *VAR_7;
 ACPI_STATUS VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_7);
 if (FUNC_0(VAR_8))
  FUNC_2(VAR_1);
 if (VAR_7->Address == (uintptr_t)VAR_5) {
  *(ACPI_HANDLE *)VAR_6 = VAR_3;
  FUNC_2(VAR_0);
 }
 FUNC_2(VAR_2);
}
