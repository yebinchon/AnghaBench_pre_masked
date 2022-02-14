
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ time_t ;
typedef int FILE ;
typedef int BIGNUM ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 void* FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,scalar_t__,scalar_t__) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int * VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_15 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_16 (int *,int ,scalar_t__) ;
 int FUNC_17 (int *,int ,int ,int ,scalar_t__,int ,int *) ;
 int FUNC_18 (int) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_19 (scalar_t__*) ;
 scalar_t__ VAR_23 ;
 int * FUNC_20 (scalar_t__,int) ;

int
FUNC_21(FILE *VAR_24, u_int32_t VAR_25, u_int32_t VAR_26, BIGNUM *VAR_27)
{
 BIGNUM *VAR_28;
 u_int32_t VAR_29, VAR_30, VAR_31, VAR_32;
 u_int32_t VAR_33 = VAR_13 >> 6;
 u_int32_t VAR_34 = VAR_13 >> 6;
 time_t VAR_35, VAR_36;
 u_int32_t VAR_37;
 int VAR_38 = 0;

 VAR_17 = VAR_25;

 if (VAR_25 != 0 &&
     (VAR_25 < VAR_1 || VAR_25 > VAR_0)) {
  FUNC_12("Invalid memory amount (min %ld, max %ld)",
      VAR_1, VAR_0);
  return (-1);
 }





 if (VAR_26 > VAR_10) {
  FUNC_12("Too many bits: %u > %lu", VAR_26, VAR_10);
  return (-1);
 } else if (VAR_26 < VAR_11) {
  FUNC_12("Too few bits: %u < %u", VAR_26, VAR_11);
  return (-1);
 }
 VAR_26--;







 VAR_20 = ((VAR_26 * VAR_26) >> (VAR_7 - VAR_12));





 if (VAR_17 > VAR_0) {
  FUNC_15("Limited memory: %u MB; limit %lu MB",
      VAR_17, VAR_0);
  VAR_17 = VAR_0;
 }

 if (VAR_20 <= (VAR_17 << VAR_6)) {
  FUNC_15("Increased memory: %u MB; need %u bytes",
      VAR_17, (VAR_20 << VAR_5));
  VAR_20 = (VAR_17 << VAR_6);
 } else if (VAR_17 > 0) {
  FUNC_15("Decreased memory: %u MB; want %u bytes",
      VAR_17, (VAR_20 << VAR_5));
  VAR_20 = (VAR_17 << VAR_6);
 }

 VAR_14 = FUNC_20(VAR_34, sizeof(u_int32_t));
 VAR_23 = VAR_34 << VAR_7;

 VAR_9 = FUNC_20(VAR_33, sizeof(u_int32_t));
 VAR_22 = VAR_33 << VAR_7;




 while ((VAR_2 = FUNC_9(VAR_20, sizeof(u_int32_t))) == ((void*)0))
  VAR_20 -= (1L << (VAR_6 - 2));

 VAR_16 = VAR_20 << VAR_7;
 VAR_18 = VAR_16 * 2;


 VAR_19 = 0;
 if ((VAR_28 = FUNC_5()) == ((void*)0))
  FUNC_13("BN_new failed");





 if ((VAR_15 = FUNC_5()) == ((void*)0))
  FUNC_13("BN_new failed");
 if (VAR_27 == ((void*)0)) {
  if (FUNC_6(VAR_15, VAR_26, 1, 1) == 0)
   FUNC_13("BN_rand failed");
 } else {
  if (FUNC_4(VAR_15, VAR_27) == ((void*)0))
   FUNC_13("BN_copy: failed");
 }


 if (FUNC_7(VAR_15, 0) == 0)
  FUNC_13("BN_set_bit: failed");

 FUNC_19(&VAR_35);

 FUNC_15("%.24s Sieve next %u plus %u-bit", FUNC_10(&VAR_35),
     VAR_18, VAR_26);
 FUNC_11("start point: 0x%s", FUNC_3(VAR_15));




 for (VAR_37 = 0; VAR_37 < VAR_23; VAR_37++) {
  if (FUNC_1(VAR_14, VAR_37))
   continue;


  VAR_32 = 2 * VAR_37 + 3;


  for (VAR_29 = VAR_37 + VAR_32; VAR_29 < VAR_23; VAR_29 += VAR_32)
   FUNC_0(VAR_14, VAR_29);

  FUNC_18(VAR_32);
 }





 for (VAR_21 = VAR_13 + 3;
     VAR_21 < (VAR_8 - VAR_13);
     VAR_21 += VAR_13) {
  for (VAR_37 = 0; VAR_37 < VAR_23; VAR_37++) {
   if (FUNC_1(VAR_14, VAR_37))
    continue;


   VAR_32 = 2 * VAR_37 + 3;
   VAR_30 = VAR_21 % VAR_32;

   if (VAR_30 == 0) {
    VAR_31 = 0;
   } else {

    VAR_31 = VAR_32 - VAR_30;
   }






   if (VAR_31 & 1)
    VAR_31 += VAR_32;


   for (VAR_31 /= 2; VAR_31 < VAR_22; VAR_31 += VAR_32)
    FUNC_0(VAR_9, VAR_31);
  }




  for (VAR_37 = 0; VAR_37 < VAR_22; VAR_37++) {
   if (FUNC_1(VAR_9, VAR_37))
    continue;


   FUNC_18((2 * VAR_37) + VAR_21);
  }

  FUNC_16(VAR_9, 0, VAR_33 << VAR_5);
 }

 FUNC_19(&VAR_36);

 FUNC_15("%.24s Sieved with %u small primes in %lld seconds",
     FUNC_10(&VAR_36), VAR_19, (long long)(VAR_36 - VAR_35));

 for (VAR_29 = VAR_30 = 0; VAR_29 < VAR_16; VAR_29++) {
  if (FUNC_1(VAR_2, VAR_29))
   continue;

  FUNC_11("test q = largebase+%u", 2 * VAR_29);
  if (FUNC_8(VAR_28, 2 * VAR_29) == 0)
   FUNC_13("BN_set_word failed");
  if (FUNC_2(VAR_28, VAR_28, VAR_15) == 0)
   FUNC_13("BN_add failed");
  if (FUNC_17(VAR_24, VAR_4,
      VAR_3, VAR_19,
      (VAR_26 - 1) , (0), VAR_28) == -1) {
   VAR_38 = -1;
   break;
  }

  VAR_30++;
 }

 FUNC_19(&VAR_36);

 FUNC_14(VAR_2);
 FUNC_14(VAR_9);
 FUNC_14(VAR_14);

 FUNC_15("%.24s Found %u candidates", FUNC_10(&VAR_36), VAR_30);

 return (VAR_38);
}
