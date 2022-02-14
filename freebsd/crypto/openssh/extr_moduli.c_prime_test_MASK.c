
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_int32_t ;
typedef scalar_t__ time_t ;
typedef int FILE ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;
 scalar_t__ FUNC_5 (int *,unsigned long,int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int) ;
 unsigned long FUNC_11 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;






 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (char*,unsigned long,...) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,unsigned long) ;
 int FUNC_17 (char*,unsigned long) ;
 int FUNC_18 (char*) ;
 int * FUNC_19 (char*,scalar_t__,int *) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,int ,unsigned long,unsigned long,long) ;
 int FUNC_22 (unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_23 (int *,int const,unsigned long,unsigned long,unsigned long,unsigned long,int *) ;
 unsigned long FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*) ;
 unsigned long FUNC_27 (char*,char**,int) ;
 int FUNC_28 (scalar_t__*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*,unsigned long) ;
 char* FUNC_31 (scalar_t__) ;

int
FUNC_32(FILE *VAR_6, FILE *VAR_7, u_int32_t VAR_8, u_int32_t VAR_9,
    char *VAR_10, unsigned long VAR_11, unsigned long VAR_12)
{
 BIGNUM *VAR_13, *VAR_14, *VAR_15;
 BN_CTX *VAR_16;
 char *VAR_17, *VAR_18;
 u_int32_t VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 u_int32_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned long VAR_27 = 0, VAR_28;
 time_t VAR_29, VAR_30;
 int VAR_31;

 if (VAR_8 < VAR_4) {
  FUNC_17("Minimum primality trials is %d", VAR_4);
  return (-1);
 }

 if (VAR_12 == 0)
  VAR_28 = FUNC_12(VAR_6);
 else
  VAR_28 = VAR_11 + VAR_12;

 FUNC_28(&VAR_29);

 if ((VAR_14 = FUNC_8()) == ((void*)0))
  FUNC_18("BN_new failed");
 if ((VAR_13 = FUNC_8()) == ((void*)0))
  FUNC_18("BN_new failed");
 if ((VAR_16 = FUNC_1()) == ((void*)0))
  FUNC_18("BN_CTX_new failed");

 FUNC_15("%.24s Final %u Miller-Rabin trials (%x generator)",
     FUNC_13(&VAR_29), VAR_8, VAR_9);

 if (VAR_10 != ((void*)0))
  VAR_27 = FUNC_24(VAR_10);
 VAR_27 = VAR_11 = FUNC_11(VAR_27, VAR_11);
 if (VAR_28 == VAR_5)
  FUNC_14("process from line %lu from pipe", VAR_27);
 else
  FUNC_14("process from line %lu to line %lu", VAR_27,
      VAR_28);

 VAR_31 = 0;
 VAR_18 = FUNC_31(VAR_2 + 1);
 while (FUNC_19(VAR_18, VAR_2 + 1, VAR_6) != ((void*)0) && VAR_19 < VAR_28) {
  VAR_19++;
  if (VAR_19 <= VAR_27) {
   FUNC_16("skipping line %u, before checkpoint or "
       "specified start line", VAR_19);
   continue;
  }
  if (VAR_10 != ((void*)0))
   FUNC_30(VAR_10, VAR_19);
  FUNC_22(VAR_11, VAR_19, VAR_28);
  if (FUNC_25(VAR_18) < 14 || *VAR_18 == '!' || *VAR_18 == '#') {
   FUNC_15("%10u: comment or short line", VAR_19);
   continue;
  }



  VAR_17 = &VAR_18[14];


  VAR_25 = FUNC_27(VAR_17, &VAR_17, 10);


  VAR_23 = FUNC_27(VAR_17, &VAR_17, 10);

  if (VAR_23 & VAR_0) {
   FUNC_15("%10u: known composite", VAR_19);
   continue;
  }


  VAR_24 = FUNC_27(VAR_17, &VAR_17, 10);


  VAR_26 = FUNC_27(VAR_17, &VAR_17, 10);


  VAR_22 = FUNC_27(VAR_17, &VAR_17, 16);


  VAR_17 += FUNC_26(VAR_17, " ");


  switch (VAR_25) {
  case 131:
   FUNC_15("%10u: (%u) Sophie-Germain", VAR_19, VAR_25);
   VAR_15 = VAR_13;
   if (FUNC_4(&VAR_15, VAR_17) == 0)
    FUNC_18("BN_hex2bn failed");

   if (FUNC_6(VAR_14, VAR_13, 1) == 0)
    FUNC_18("BN_lshift failed");
   if (FUNC_2(VAR_14, 1) == 0)
    FUNC_18("BN_add_word failed");
   VAR_26 += 1;
   VAR_22 = 0;
   break;
  case 128:
  case 133:
  case 132:
  case 130:
  case 129:
   FUNC_15("%10u: (%u)", VAR_19, VAR_25);
   VAR_15 = VAR_14;
   if (FUNC_4(&VAR_15, VAR_17) == 0)
    FUNC_18("BN_hex2bn failed");

   if (FUNC_10(VAR_13, VAR_14, 1) == 0)
    FUNC_18("BN_rshift failed");
   break;
  default:
   FUNC_15("Unknown prime type");
   break;
  }





  if ((u_int32_t)FUNC_9(VAR_14) != (VAR_26 + 1)) {
   FUNC_15("%10u: bit size %u mismatch", VAR_19, VAR_26);
   continue;
  }
  if (VAR_26 < VAR_3) {
   FUNC_15("%10u: bit size %u too short", VAR_19, VAR_26);
   continue;
  }

  if (VAR_23 & VAR_1)
   VAR_24 += VAR_8;
  else
   VAR_24 = VAR_8;




  if (VAR_22 == 0) {
   if (FUNC_7(VAR_14, 24) == 11)
    VAR_22 = 2;
   else if (FUNC_7(VAR_14, 12) == 5)
    VAR_22 = 3;
   else {
    u_int32_t VAR_32 = FUNC_7(VAR_14, 10);

    if (VAR_32 == 3 || VAR_32 == 7)
     VAR_22 = 5;
   }
  }



  if (VAR_9 > 0 &&
      VAR_9 != VAR_22) {
   FUNC_15("%10u: generator %d != %d",
       VAR_19, VAR_22, VAR_9);
   continue;
  }





  if (VAR_22 == 0) {
   FUNC_15("%10u: no known generator", VAR_19);
   continue;
  }

  VAR_21++;
  if (FUNC_5(VAR_13, 1, VAR_16, ((void*)0)) <= 0) {
   FUNC_14("%10u: q failed first possible prime test",
       VAR_19);
   continue;
  }
  if (!FUNC_5(VAR_14, VAR_8, VAR_16, ((void*)0))) {
   FUNC_14("%10u: p is not prime", VAR_19);
   continue;
  }
  FUNC_14("%10u: p is almost certainly prime", VAR_19);


  if (!FUNC_5(VAR_13, VAR_8 - 1, VAR_16, ((void*)0))) {
   FUNC_14("%10u: q is not prime", VAR_19);
   continue;
  }
  FUNC_14("%10u: q is almost certainly prime", VAR_19);

  if (FUNC_23(VAR_7, 133,
      VAR_23 | VAR_1,
      VAR_24, VAR_26, VAR_22, VAR_14)) {
   VAR_31 = -1;
   break;
  }

  VAR_20++;
 }

 FUNC_28(&VAR_30);
 FUNC_20(VAR_18);
 FUNC_3(VAR_14);
 FUNC_3(VAR_13);
 FUNC_0(VAR_16);

 if (VAR_10 != ((void*)0))
  FUNC_29(VAR_10);

 FUNC_21("%.24s Found %u safe primes of %u candidates in %ld seconds",
     FUNC_13(&VAR_30), VAR_20, VAR_21,
     (long) (VAR_30 - VAR_29));

 return (VAR_31);
}
