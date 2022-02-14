
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int * ACPI_HANDLE ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, char *VAR_3,
    size_t VAR_4)
{
 ACPI_HANDLE VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 != ((void*)0))
  VAR_6 = FUNC_2(VAR_3, VAR_4, "handle=%s", FUNC_0(VAR_5));
 else
  VAR_6 = FUNC_2(VAR_3, VAR_4, "");

 if (VAR_6 >= VAR_4)
  return (VAR_0);
 return (0);
}
