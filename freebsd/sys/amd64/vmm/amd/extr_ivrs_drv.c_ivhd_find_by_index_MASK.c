
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_ivrs_hdr_args {int i; int * ptr; } ;
typedef int ACPI_IVRS_HARDWARE ;


 int VAR_0 ;
 int FUNC_0 (int ,struct find_ivrs_hdr_args*) ;

__attribute__((used)) static ACPI_IVRS_HARDWARE *
FUNC_1(int VAR_1)
{
 struct find_ivrs_hdr_args VAR_2;

 VAR_2.i = VAR_1;
 VAR_2.ptr = ((void*)0);

 FUNC_0(VAR_0, &VAR_2);

 return ((ACPI_IVRS_HARDWARE *)VAR_2.ptr);
}
