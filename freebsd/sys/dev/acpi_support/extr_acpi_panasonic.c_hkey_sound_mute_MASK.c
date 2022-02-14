
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(ACPI_HANDLE VAR_3, int VAR_4, UINT32 *VAR_5)
{

 FUNC_0(VAR_2);
 switch (VAR_4) {
 case 128:
  if (*VAR_5 != 0 && *VAR_5 != 1)
   return (VAR_0);
  FUNC_2(VAR_3, VAR_1, *VAR_5);
  break;
 case 129:
  *VAR_5 = FUNC_1(VAR_3, VAR_1);
  break;
 }

 return (0);
}
