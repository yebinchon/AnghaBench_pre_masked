
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_2(uint32_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;
 int32_t VAR_11;

 FUNC_0(VAR_4 <= 3);
 FUNC_0(VAR_2 <= 32);
 FUNC_0(VAR_3 + VAR_2 <= VAR_0);

 VAR_7 = (VAR_3 - 1) / 8;
 VAR_9 = (VAR_3 - 1) % 8;
 VAR_11 = VAR_2;
 VAR_10 = 0;
 while (VAR_11 > 0) {
  VAR_8 = (VAR_9 + VAR_11 > 8) ?
   (8) : (VAR_9 + VAR_11);
  VAR_6 = (((1 << VAR_8) - 1) ^ ((1 << VAR_9) - 1)) <<
   (VAR_4 * 8);
  VAR_5 |= (((VAR_1[VAR_7] & VAR_6) >> (VAR_4 * 8)) >>
   VAR_9) << VAR_10;
  VAR_10 += VAR_8 - VAR_9;
  VAR_11 -= (8 - VAR_9);
  VAR_9 = 0;
  VAR_7++;
 }
 VAR_5 = FUNC_1(VAR_5, VAR_2);
 return VAR_5;
}
