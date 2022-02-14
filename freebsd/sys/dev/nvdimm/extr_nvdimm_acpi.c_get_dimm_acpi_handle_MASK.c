
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nfit_handle_t ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,int ,int *,void*,int **) ;
 int VAR_1 ;

__attribute__((used)) static ACPI_HANDLE
FUNC_2(ACPI_HANDLE VAR_2, nfit_handle_t VAR_3)
{
 ACPI_HANDLE VAR_4;
 ACPI_STATUS VAR_5;

 VAR_4 = ((void*)0);
 VAR_5 = FUNC_1(VAR_0, VAR_2, 1, VAR_1,
     ((void*)0), (void *)(uintptr_t)VAR_3, &VAR_4);
 if (FUNC_0(VAR_5))
  VAR_4 = ((void*)0);
 return (VAR_4);
}
