
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int const*) ;

const u8 * FUNC_1(const u8 *VAR_0, size_t VAR_1, u16 VAR_2, u16 *VAR_3)
{
 u16 VAR_4, VAR_5;
 const u8 *VAR_6 = VAR_0, *VAR_7 = VAR_0 + VAR_1;

 while (VAR_7 - VAR_6 >= 4) {
  VAR_4 = FUNC_0(VAR_6);
  VAR_6 += 2;
  VAR_5 = FUNC_0(VAR_6);
  VAR_6 += 2;
  if (VAR_5 > VAR_7 - VAR_6)
   return ((void*)0);
  if (VAR_4 == VAR_2) {
   *VAR_3 = VAR_5;
   return VAR_6;
  }
  VAR_6 += VAR_5;
 }

 return ((void*)0);
}
