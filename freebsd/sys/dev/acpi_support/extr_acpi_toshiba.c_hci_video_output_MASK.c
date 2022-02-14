
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int,int ,int*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(ACPI_HANDLE VAR_7, int VAR_8, UINT32 *VAR_9)
{
 int VAR_10;
 ACPI_STATUS VAR_11;

 FUNC_0(VAR_6);
 if (VAR_8 == VAR_3) {
  if (*VAR_9 < 1 || *VAR_9 > 7)
   return (VAR_0);
  if (VAR_7 == ((void*)0))
   return (VAR_1);
  *VAR_9 |= VAR_4;
  VAR_11 = FUNC_2(VAR_7, VAR_5, *VAR_9);
  if (FUNC_1(VAR_11))
   VAR_10 = 0;
  else
   VAR_10 = VAR_1;
 } else {
  VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_2, VAR_9);
  if (VAR_10 == 0)
   *VAR_9 &= 0xff;
 }

 return (VAR_10);
}
