
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
typedef int int16_t ;


 int FUNC_0 (long double*) ;
 long double FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,long long,long long,long double) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 double FUNC_5 (int) ;
 long double FUNC_6 (int) ;
 long double FUNC_7 (int) ;
 int FUNC_8 (long double,int,long long,long long) ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 long double VAR_7 ;
 long double VAR_8 ;
 long double VAR_9 ;
 long double VAR_10 ;
 long double VAR_11 ;
 long double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 int FUNC_9 (long double,long double) ;
 int FUNC_10 (long double) ;
 int FUNC_11 (long double,int) ;
 int FUNC_12 (long double,long double,scalar_t__) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 double VAR_15 ;
 double VAR_16 ;
 int VAR_17 ;

long double
FUNC_15(long double VAR_18)
{
 long double VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 long double VAR_24, VAR_25;
 double VAR_26, VAR_27, VAR_28;
 uint64_t VAR_29, VAR_30;
 int VAR_31, VAR_32;
 int16_t VAR_33, VAR_34;

 FUNC_0(&VAR_18);
 FUNC_3(VAR_34, VAR_29, VAR_30, VAR_18);
 if (VAR_34 < 0x3fff) {
  VAR_33 = VAR_34 & 0x7fff;
  if (VAR_33 >= 0x3fff) {
   if (VAR_33 == 0x3fff && (VAR_29 | VAR_30) == 0)
    FUNC_10(-1 / VAR_17);

   FUNC_10((VAR_18 - VAR_18) / (VAR_18 - VAR_18));
  }
  if (VAR_33 <= 0x3f8d) {
   if ((int)VAR_18 == 0)
    FUNC_10(VAR_18);
  }
  VAR_24 = 1;
  VAR_21 = VAR_18;
 } else if (VAR_34 >= 0x7fff) {
  FUNC_10(VAR_18 + VAR_18);
 } else if (VAR_34 < 0x40e1) {
  VAR_24 = VAR_18;
  VAR_21 = 1;
 } else {
  VAR_24 = VAR_18;
  VAR_21 = 0;
 }
 FUNC_2();
 VAR_18 = VAR_24 + VAR_21;
 VAR_21 = (VAR_24 - VAR_18) + VAR_21;

 FUNC_3(VAR_34, VAR_29, VAR_30, VAR_18);
 VAR_32 = -16383;

 VAR_32 += VAR_34;
 VAR_28 = VAR_32;

 FUNC_11(VAR_18, 0x3fff);
 VAR_25 = 1;
 FUNC_11(VAR_25, 0x7ffe - (VAR_34 & 0x7fff));
 VAR_21 *= VAR_25;

 VAR_31 = (VAR_29 + (1LL << (VAR_1 - 2))) >> (VAR_1 - 1);
 if (0)
  VAR_20 = VAR_18 * FUNC_6(VAR_31) - 1;
 else {



  long double VAR_35;
  double VAR_36;

  FUNC_8(VAR_35, 0x3fff, VAR_29,
      VAR_30 & 0xffffffffff000000ULL);
  VAR_36 = VAR_18 - VAR_35;
  VAR_20 = VAR_35 * FUNC_6(VAR_31) - 1 + VAR_36 * FUNC_6(VAR_31);

 }
 VAR_26 = VAR_21 * FUNC_6(VAR_31);
 VAR_19 = VAR_20 + VAR_26;
 VAR_26 = VAR_20 - VAR_19 + VAR_26;
 VAR_20 = VAR_19;

 VAR_27 = (double)VAR_19;
 VAR_23 = VAR_19 * VAR_19 * VAR_19 * (VAR_8 +
     VAR_19 * (VAR_9 + VAR_19 * (VAR_10 + VAR_19 * (VAR_11 + VAR_19 * (VAR_12 + VAR_19 * (VAR_13 +
     VAR_27 * (VAR_14 + VAR_27 * (VAR_2 + VAR_27 * (VAR_3 + VAR_27 * (VAR_4 + VAR_27 * (VAR_5 +
     VAR_27 * VAR_6))))))))))) + (FUNC_5(VAR_31) + VAR_28 * VAR_16 + VAR_26) + VAR_19 * VAR_19 * VAR_7;
 VAR_22 = VAR_20;





 FUNC_12(VAR_22, VAR_23, FUNC_4(VAR_31) + VAR_28 * VAR_15);
 FUNC_9(VAR_22, VAR_23);
}
