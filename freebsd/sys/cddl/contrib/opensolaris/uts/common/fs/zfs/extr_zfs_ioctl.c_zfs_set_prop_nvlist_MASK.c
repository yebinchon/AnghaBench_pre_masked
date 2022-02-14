
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_source_t ;
typedef scalar_t__ zfs_prop_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,char const*,int ,int ) ;
 int FUNC_4 (char const*,char const*,int ,char*) ;
 scalar_t__ FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (int *,char const*,int) ;
 int * FUNC_7 () ;
 int * FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int **) ;
 int * FUNC_16 (int *,int *) ;
 char* FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (char const*,int *,int ) ;
 scalar_t__ FUNC_20 (char const*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__,int ,char const**) ;
 int FUNC_23 (char const*,int ,int *) ;
 scalar_t__ FUNC_24 (char const*) ;
 scalar_t__ FUNC_25 (char const*) ;

int
FUNC_26(const char *VAR_8, zprop_source_t VAR_9, nvlist_t *VAR_10,
    nvlist_t *VAR_11)
{
 nvpair_t *VAR_12;
 nvpair_t *VAR_13;
 int VAR_14 = 0;
 uint64_t VAR_15;
 char *VAR_16;
 nvlist_t *VAR_17 = FUNC_7();
 nvlist_t *VAR_18 = FUNC_7();

retry:
 VAR_12 = ((void*)0);
 while ((VAR_12 = FUNC_16(VAR_10, VAR_12)) != ((void*)0)) {
  const char *VAR_19 = FUNC_17(VAR_12);
  zfs_prop_t VAR_20 = FUNC_20(VAR_19);
  int VAR_21 = 0;


  VAR_13 = VAR_12;
  if (FUNC_18(VAR_12) == VAR_1) {
   nvlist_t *VAR_22;
   VAR_22 = FUNC_9(VAR_12);
   if (FUNC_15(VAR_22, VAR_7,
       &VAR_13) != 0)
    VAR_21 = FUNC_1(VAR_5);
  }


  if (VAR_21 == 0 && VAR_20 == VAR_6) {
   if (FUNC_24(VAR_19)) {
    if (FUNC_18(VAR_13) != VAR_2)
     VAR_21 = FUNC_1(VAR_5);
   } else if (FUNC_25(VAR_19)) {
    if (FUNC_18(VAR_13) !=
        VAR_4)
     VAR_21 = FUNC_1(VAR_5);
   } else {
    VAR_21 = FUNC_1(VAR_5);
   }
  } else if (VAR_21 == 0) {
   if (FUNC_18(VAR_13) == VAR_2) {
    if (FUNC_21(VAR_20) != 128)
     VAR_21 = FUNC_1(VAR_5);
   } else if (FUNC_18(VAR_13) == VAR_3) {
    const char *VAR_23;

    VAR_15 = FUNC_11(VAR_13);

    switch (FUNC_21(VAR_20)) {
    case 129:
     break;
    case 128:
     VAR_21 = FUNC_1(VAR_5);
     break;
    case 130:
     if (FUNC_22(VAR_20,
         VAR_15, &VAR_23) != 0)
      VAR_21 = FUNC_1(VAR_5);
     break;
    default:
     FUNC_2(VAR_0,
         "unknown property type");
    }
   } else {
    VAR_21 = FUNC_1(VAR_5);
   }
  }


  if (VAR_21 == 0)
   VAR_21 = FUNC_19(VAR_8, VAR_12, FUNC_0());

  if (VAR_21 == 0) {
   VAR_21 = FUNC_23(VAR_8, VAR_9, VAR_12);
   if (VAR_21 == -1) {




    VAR_21 = FUNC_12(VAR_17, VAR_12);
   } else if (VAR_21 != 0 && VAR_10 != VAR_18) {





    VAR_21 = FUNC_12(VAR_18, VAR_12);
   }
  }

  if (VAR_21 != 0) {
   if (VAR_11 != ((void*)0))
    FUNC_6(VAR_11, VAR_19, VAR_21);
   VAR_14 = VAR_21;
  }
 }

 if (VAR_10 != VAR_18 && !FUNC_13(VAR_18)) {
  VAR_10 = VAR_18;
  goto retry;
 }

 if (!FUNC_13(VAR_17) &&
     FUNC_5(VAR_8, VAR_9, VAR_17) != 0) {




  VAR_12 = ((void*)0);
  while ((VAR_12 = FUNC_16(VAR_17, VAR_12)) != ((void*)0)) {
   const char *VAR_24 = FUNC_17(VAR_12);
   int VAR_25 = 0;

   VAR_13 = VAR_12;
   if (FUNC_18(VAR_12) == VAR_1) {
    nvlist_t *VAR_26;
    VAR_26 = FUNC_9(VAR_12);
    VAR_13 = FUNC_8(VAR_26,
        VAR_7);
   }

   if (FUNC_18(VAR_13) == VAR_2) {
    VAR_16 = FUNC_10(VAR_13);
    VAR_25 = FUNC_4(VAR_8, VAR_24,
        VAR_9, VAR_16);
   } else {
    VAR_15 = FUNC_11(VAR_13);
    VAR_25 = FUNC_3(VAR_8, VAR_24, VAR_9,
        VAR_15);
   }

   if (VAR_25 != 0) {
    if (VAR_11 != ((void*)0)) {
     FUNC_6(VAR_11, VAR_24,
         VAR_25);
    }
    VAR_14 = VAR_25;
   }
  }
 }
 FUNC_14(VAR_17);
 FUNC_14(VAR_18);

 return (VAR_14);
}
