
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int * ACPI_HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 ACPI_HANDLE VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0) ||
     FUNC_0(VAR_5, "PNP0D10") == VAR_0)
  return (VAR_2);

 FUNC_2(VAR_4, VAR_3);

 return (VAR_1);
}
