
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3 = VAR_2 >> 1;
 if (VAR_1 == VAR_3) {
  if (VAR_1 == VAR_0)
   return -1;


  return (VAR_2 & 0x01) ? 0 : 1;
 }

 return VAR_1 > VAR_3;
}
