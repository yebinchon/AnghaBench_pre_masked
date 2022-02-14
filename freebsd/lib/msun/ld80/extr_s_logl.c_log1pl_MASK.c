
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16_t ;


 int FUNC_0 (long double*) ;
 long double FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,long double) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 long double FUNC_5 (int) ;
 long double FUNC_6 (int) ;
 long double FUNC_7 (int) ;
 int VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 long double VAR_5 ;
 long double VAR_6 ;
 long double VAR_7 ;
 long double VAR_8 ;
 int FUNC_8 (long double,long double) ;
 int FUNC_9 (long double) ;
 int FUNC_10 (float,int) ;
 int FUNC_11 (long double,int) ;
 int FUNC_12 (long double,long double,scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 long double VAR_9 ;
 long double VAR_10 ;
 int VAR_11 ;

long double
FUNC_15(long double VAR_12)
{
 long double VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 long double VAR_21, VAR_22;
 uint64_t VAR_23, VAR_24;
 int VAR_25, VAR_26;
 int16_t VAR_27, VAR_28;

 FUNC_0(&VAR_12);
 FUNC_3(VAR_28, VAR_24, VAR_12);
 if (VAR_28 < 0x3fff) {
  VAR_27 = VAR_28 & 0x7fff;
  if (VAR_27 >= 0x3fff) {
   if (VAR_27 == 0x3fff && VAR_24 == 0x8000000000000000ULL)
    FUNC_9(-1 / VAR_11);

   FUNC_9((VAR_12 - VAR_12) / (VAR_12 - VAR_12));
  }
  if (VAR_27 <= 0x3fbe) {
   if ((int)VAR_12 == 0)
    FUNC_9(VAR_12);
  }
  VAR_21 = 1;
  VAR_17 = VAR_12;
 } else if (VAR_28 >= 0x7fff) {
  FUNC_9(VAR_12 + VAR_12);



 } else if (VAR_28 < 0x407f) {
  VAR_21 = VAR_12;
  VAR_17 = 1;
 } else {
  VAR_21 = VAR_12;
  VAR_17 = 0;
 }
 FUNC_2();
 VAR_12 = VAR_21 + VAR_17;
 VAR_17 = (VAR_21 - VAR_12) + VAR_17;

 FUNC_3(VAR_28, VAR_24, VAR_12);
 VAR_26 = -16383;

 VAR_26 += VAR_28;
 VAR_23 = VAR_24 & 0x7fffffffffffffffULL;
 VAR_16 = VAR_26;

 FUNC_11(VAR_12, 0x3fff);
 VAR_22 = 1;
 FUNC_11(VAR_22, 0x7ffe - (VAR_28 & 0x7fff));
 VAR_17 *= VAR_22;

 VAR_25 = (VAR_23 + (1LL << (VAR_1 - 2))) >> (VAR_1 - 1);
 if (0)
  VAR_14 = VAR_12 * FUNC_6(VAR_25) - 1;
 else {



  long double VAR_29, VAR_30;
  float VAR_31;

  FUNC_10(VAR_31, (VAR_24 >> 40) | 0x3f800000);
  VAR_29 = VAR_31;
  VAR_30 = VAR_12 - VAR_29;
  VAR_14 = VAR_29 * FUNC_6(VAR_25) - 1 + VAR_30 * FUNC_6(VAR_25);

 }
 VAR_15 = VAR_17 * FUNC_6(VAR_25);
 VAR_13 = VAR_14 + VAR_15;
 VAR_15 = VAR_14 - VAR_13 + VAR_15;
 VAR_14 = VAR_13;

 VAR_20 = VAR_13 * VAR_13;
 VAR_19 = VAR_20 * VAR_13 * VAR_20 * (VAR_20 * (VAR_13 * VAR_8 + VAR_7) + (VAR_13 * VAR_6 + VAR_5)) +
     (FUNC_5(VAR_25) + VAR_16 * VAR_10 + VAR_15 + VAR_20 * VAR_13 * (VAR_13 * VAR_4 + VAR_3)) + VAR_20 * VAR_2;
 VAR_18 = VAR_14;





 FUNC_12(VAR_18, VAR_19, FUNC_4(VAR_25) + VAR_16 * VAR_9);
 FUNC_8(VAR_18, VAR_19);
}
