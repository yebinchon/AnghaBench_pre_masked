
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int csa_res ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(csa_res *VAR_10, u_long VAR_11)
{
 u_long VAR_12, VAR_13, VAR_14, VAR_15;
 u_long VAR_16, VAR_17, VAR_18;
 u_long VAR_19, VAR_20;
 u_long VAR_21;

 VAR_21 = 48000;





 if((VAR_11 * 9) < VAR_21)
  return;





 if(VAR_11 > VAR_21)
  return;
 VAR_14 = VAR_11 << 16;
 VAR_13 = VAR_14 / VAR_21;
 VAR_14 -= VAR_13 * VAR_21;
 VAR_14 <<= 7;
 VAR_13 <<= 7;
 VAR_13 += VAR_14 / VAR_21;
 VAR_13 ^= 0xFFFFFFFF;
 VAR_13++;
 VAR_14 = VAR_21 << 16;
 VAR_12 = VAR_14 / VAR_11;
 VAR_14 -= VAR_12 * VAR_11;
 VAR_14 <<= 10;
 VAR_12 <<= 10;
 VAR_15 = VAR_14 / VAR_11;
 VAR_12 += VAR_15;
 VAR_14 -= VAR_15 * VAR_11;
 VAR_16 = VAR_14 / VAR_9;
 VAR_14 -= VAR_16 * VAR_9;
 VAR_17 = VAR_14;
 VAR_18 = ((VAR_21 * 24) + VAR_11 - 1) / VAR_11;




 FUNC_0(VAR_10, VAR_7,
       ((VAR_17 << 16) & 0xFFFF0000) | (VAR_16 & 0xFFFF));
 FUNC_0(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10, VAR_2,
      (((VAR_8 + (VAR_18 << 2)) << 16) & 0xFFFF0000) | 0x80);
 FUNC_0(VAR_10, VAR_5, VAR_12);






 VAR_19 = 1;
 for(VAR_20 = 2; VAR_20 <= 64; VAR_20 *= 2)
 {
  if(((VAR_11 / VAR_20) * VAR_20) !=
     VAR_11)
  {
   VAR_19 *= 2;
  }
 }
 if(((VAR_11 / 3) * 3) !=
    VAR_11)
 {
  VAR_19 *= 3;
 }
 for(VAR_20 = 5; VAR_20 <= 125; VAR_20 *= 5)
 {
  if(((VAR_11 / VAR_20) * VAR_20) !=
     VAR_11)
  {
   VAR_19 *= 5;
  }
 }




 FUNC_0(VAR_10, VAR_3, VAR_19);
 FUNC_0(VAR_10, VAR_4, (0x00800000 | VAR_19));
 FUNC_0(VAR_10, VAR_1, 0x0000FFFF);
 FUNC_0(VAR_10, VAR_6, ((65536 * VAR_11) / 24000));
 FUNC_0(VAR_10, (VAR_6 + 4), 0x0000FFFF);
}
