
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

void
FUNC_2(uint32_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
                     uint32_t VAR_4, uint32_t VAR_5)
{

 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 int32_t VAR_10, VAR_11;

 FUNC_0(VAR_5 <= 3);
 FUNC_0(VAR_3 <= 32);
 FUNC_0(VAR_4 + VAR_3 <= 319);

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 VAR_8 = (VAR_4 - 1) / 8;
 VAR_10 = (VAR_4 - 1) % 8;
 VAR_11 = VAR_3;
 while (VAR_11 > 0) {
  VAR_9 = (VAR_10 + VAR_11 > 8) ?
   8 : VAR_10 + VAR_11;
  VAR_7 = (((1 << VAR_9) - 1) ^ ((1 << VAR_10) - 1)) <<
   (VAR_5 * 8);
  VAR_1[VAR_8] &= ~VAR_7;
  VAR_1[VAR_8] |= ((VAR_6 << VAR_10) <<
   (VAR_5 * 8)) & VAR_7;
  VAR_11 -= 8 - VAR_10;
  VAR_6 = VAR_6 >> (8 - VAR_10);
  VAR_10 = 0;
  VAR_8++;
 }

}
