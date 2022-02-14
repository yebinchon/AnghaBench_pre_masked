
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_1, device_t VAR_2)
{


 if (FUNC_2("asus_wmi"))
  return;


 if (FUNC_3(VAR_2, "acpi_asus_wmi", -1) != ((void*)0))
  return;


 if (!FUNC_0(VAR_2,
     VAR_0))
  return;

 if (FUNC_1(VAR_2, 0, "acpi_asus_wmi", -1) == ((void*)0))
  FUNC_4(VAR_2, "add acpi_asus_wmi child failed\n");
}
