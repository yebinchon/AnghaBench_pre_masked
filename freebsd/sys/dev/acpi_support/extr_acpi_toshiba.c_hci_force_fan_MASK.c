
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(ACPI_HANDLE VAR_6, int VAR_7, UINT32 *VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_5);
 if (VAR_7 == VAR_4) {
  if (*VAR_8 > 1)
   return (VAR_0);
  *VAR_8 <<= VAR_1;
 }
 VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_3, VAR_8);
 if (VAR_9 == 0 && VAR_7 == VAR_2)
  *VAR_8 >>= VAR_1;
 return (VAR_9);
}
