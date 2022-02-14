
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * caddr_t ;
struct TYPE_5__ {int * Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 char FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5(ACPI_TABLE_HEADER *VAR_9,
    ACPI_TABLE_HEADER **VAR_10)
{
 char VAR_11[] = "acpi_dsdt";
 caddr_t VAR_12;
 ACPI_TABLE_HEADER *VAR_13;
 size_t VAR_14;

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  return (VAR_2);

 *VAR_10 = ((void*)0);
 if (!FUNC_0(VAR_9->Signature, VAR_1))




  return (VAR_6);

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 == ((void*)0))
  return (VAR_4);
 VAR_13 = FUNC_1(VAR_12);
 VAR_14 = FUNC_2(VAR_12);
 if (VAR_13 == ((void*)0) || VAR_14 == 0)
  return (VAR_3);


 VAR_7 = VAR_8;

 *VAR_10 = VAR_13;
 return (VAR_5);
}
