
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int,scalar_t__,int ,int) ;
 int FUNC_1 (char*,int,int,int,scalar_t__,int) ;

__attribute__((used)) static uint8_t
FUNC_2(int VAR_11, int VAR_12, int VAR_13)
{
 uint32_t VAR_14;
 uint8_t VAR_15, VAR_16;


 VAR_14 = FUNC_0(VAR_11, VAR_12, 0, VAR_5, 2);
 if (VAR_14 == VAR_6)
  return (VAR_8);
 VAR_14 = FUNC_0(VAR_11, VAR_12, 0, VAR_2, 1);
 if ((VAR_14 & VAR_0) > VAR_9)
  return (VAR_8);
 if (VAR_14 & VAR_1)
  VAR_16 = VAR_7;
 else
  VAR_16 = 0;


 for (VAR_15 = 0; VAR_15 <= VAR_16; VAR_15++) {
  VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_15, VAR_5, 2);
  if (VAR_14 == VAR_6)
   continue;
  VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_15, VAR_4, 1);






  if (VAR_14 != VAR_13 + 1)
   continue;
  VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_15, VAR_3, 1);
  if (VAR_10)
   FUNC_1(
  "ACPI: Found matching pin for %d.%d.INT%c at func %d: %d\n",
       VAR_11, VAR_12, VAR_13 + 'A', VAR_15, VAR_14);
  if (VAR_14 != VAR_8)
   return (VAR_14);
 }
 return (VAR_8);
}
