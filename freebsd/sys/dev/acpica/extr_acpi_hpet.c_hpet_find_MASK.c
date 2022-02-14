
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ) ;
 char** VAR_1 ;

__attribute__((used)) static ACPI_STATUS
FUNC_4(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4,
    void **VAR_5)
{
 char **VAR_6;
 uint32_t VAR_7 = (uint32_t)(uintptr_t)VAR_4;
 uint32_t VAR_8 = 0;

 for (VAR_6 = VAR_1; *VAR_6 != ((void*)0); VAR_6++) {
  if (FUNC_2(VAR_2, *VAR_6))
          break;
 }
 if (*VAR_6 == ((void*)0))
  return (VAR_0);
 if (FUNC_0(FUNC_1(VAR_2, "_UID", &VAR_8)) ||
     VAR_7 == VAR_8)
  *VAR_5 = FUNC_3(VAR_2);
 return (VAR_0);
}
