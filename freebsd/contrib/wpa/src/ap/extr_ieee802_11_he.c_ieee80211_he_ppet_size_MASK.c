
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u8 FUNC_0(u8 VAR_5, const u8 *VAR_6)
{
 u8 VAR_7 = 0, VAR_8;

 if ((VAR_6[VAR_1] &
      VAR_0) == 0)
  return 0;

 VAR_8 = (VAR_5 >> VAR_4) &
  VAR_3;
 while (VAR_8) {
  if (VAR_8 & 0x1)
   VAR_7++;
  VAR_8 >>= 1;
 }

 VAR_7 *= 1 + (VAR_5 & VAR_2);
 VAR_7 = (VAR_7 * 6) + 7;
 if (VAR_7 % 8)
  VAR_7 += 8;
 VAR_7 /= 8;

 return VAR_7;
}
