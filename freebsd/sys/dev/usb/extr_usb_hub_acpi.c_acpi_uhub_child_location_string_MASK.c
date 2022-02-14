
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int * ACPI_HANDLE ;


 int * FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int ,int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1,
    char *VAR_2, size_t VAR_3)
{
 ACPI_HANDLE VAR_4;

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_2, " handle=", VAR_3);
  FUNC_2(VAR_2, FUNC_1(VAR_4), VAR_3);
 }
 return (0);
}
