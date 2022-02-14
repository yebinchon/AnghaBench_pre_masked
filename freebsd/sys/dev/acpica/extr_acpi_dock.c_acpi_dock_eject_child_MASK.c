
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_11(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4,
    void **VAR_5)
{
 device_t VAR_6, VAR_7;
 ACPI_HANDLE VAR_8;

 VAR_6 = *(device_t *)VAR_4;
 VAR_8 = FUNC_5(VAR_6);

 if (!FUNC_3(VAR_8, VAR_2))
  goto out;

 FUNC_0(VAR_6, FUNC_2(VAR_6),
     "ejecting device for %s\n", FUNC_6(VAR_2));

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7 != ((void*)0) && FUNC_8(VAR_7)) {
  FUNC_9(&VAR_1);
  FUNC_7(VAR_7);
  FUNC_10(&VAR_1);
 }

 FUNC_1(VAR_2, "_EJ0", 0);
out:
 return (VAR_0);
}
