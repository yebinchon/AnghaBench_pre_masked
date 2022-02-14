
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_INIT_WALK_INFO ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9(ACPI_HANDLE VAR_6, UINT32 VAR_7, void *VAR_8,
    void **VAR_9)
{
 device_t VAR_10, VAR_11;
 ACPI_HANDLE VAR_12;

 VAR_10 = (device_t)VAR_8;
 VAR_12 = FUNC_6(VAR_10);

 if (!FUNC_4(VAR_12, VAR_6))
  goto out;

 FUNC_0(VAR_10, FUNC_3(VAR_10),
      "inserting device for %s\n", FUNC_7(VAR_6));
 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_10, "error: %s has no associated device\n",
      FUNC_7(VAR_6));
  goto out;
 }

 FUNC_2(VAR_3, VAR_5, VAR_11);

out:
 return (VAR_1);
}
