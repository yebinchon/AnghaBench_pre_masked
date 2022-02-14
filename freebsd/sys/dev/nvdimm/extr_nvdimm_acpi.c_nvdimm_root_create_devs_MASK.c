
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nfit_handle_t ;
typedef int * device_t ;
typedef int ACPI_TABLE_NFIT ;
typedef int * ACPI_HANDLE ;


 int * FUNC_0 (int *,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,uintptr_t*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int ) ;
 uintptr_t* FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5, ACPI_TABLE_NFIT *VAR_6)
{
 ACPI_HANDLE VAR_7, VAR_8;
 device_t VAR_9;
 nfit_handle_t *VAR_10, *VAR_11;
 uintptr_t *VAR_12;
 int VAR_13;

 VAR_7 = FUNC_1(VAR_5);
 FUNC_2(VAR_6, &VAR_10, &VAR_13);
 for (VAR_11 = VAR_10; VAR_11 < VAR_10 + VAR_13; VAR_11++) {
  VAR_8 = FUNC_6(VAR_7, *VAR_11);
  if (VAR_8 == ((void*)0))
   continue;

  VAR_9 = FUNC_0(VAR_5, 100, "nvdimm", -1);
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_5, "failed to create nvdimm\n");
   return (VAR_0);
  }
  VAR_12 = FUNC_7(VAR_4, sizeof(uintptr_t),
      VAR_1, VAR_3 | VAR_2);
  FUNC_4(VAR_9, VAR_12);
  FUNC_8(VAR_9, VAR_8);
  FUNC_9(VAR_9, *VAR_11);
 }
 FUNC_5(VAR_10, VAR_1);
 return (0);
}
