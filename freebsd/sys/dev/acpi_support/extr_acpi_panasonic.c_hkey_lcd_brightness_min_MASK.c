
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(ACPI_HANDLE VAR_5, int VAR_6, UINT32 *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_4);
 VAR_8 = (FUNC_2() == VAR_3) ?
     VAR_1 : VAR_2;

 switch (VAR_6) {
 case 128:
  return (VAR_0);
  break;
 case 129:
  *VAR_7 = FUNC_1(VAR_5, VAR_8);
  break;
 }

 return (0);
}
