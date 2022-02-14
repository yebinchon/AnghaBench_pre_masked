
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 int * FUNC_2 (int *,int ,char*,int) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(driver_t *VAR_0, device_t VAR_1)
{
 ACPI_HANDLE VAR_2;
 device_t VAR_3;


 if (FUNC_4(VAR_1, "acpi_perf", -1) != ((void*)0))
  return;


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0))
  return;
 if (FUNC_0(FUNC_1(VAR_2, "_PSS", ((void*)0), ((void*)0))))
  return;







 if ((VAR_3 = FUNC_2(VAR_1, 0, "acpi_perf", -1)) != ((void*)0))
  FUNC_6(VAR_3);
 else
  FUNC_5(VAR_1, "add acpi_perf child failed\n");
}
