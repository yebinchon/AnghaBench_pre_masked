
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_prop_t ;
typedef int uint64_t ;
struct TYPE_5__ {int spa_failmode; int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int *,int ,int) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int ) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char**) ;
 int FUNC_15 (int *,int*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (char const*,char) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char*,char) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*,int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char const*) ;
 int FUNC_26 (int const) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (int const) ;

__attribute__((used)) static int
FUNC_29(spa_t *VAR_18, nvlist_t *VAR_19)
{
 nvpair_t *VAR_20;
 int VAR_21 = 0, VAR_22 = 0;
 uint64_t VAR_23 = 0;
 boolean_t VAR_24 = VAR_0;

 VAR_20 = ((void*)0);
 while ((VAR_20 = FUNC_10(VAR_19, VAR_20)) != ((void*)0)) {
  uint64_t VAR_25;
  char *VAR_26, *VAR_27, *VAR_28, *VAR_29;
  const char *VAR_30 = FUNC_12(VAR_20);
  zpool_prop_t VAR_31 = FUNC_25(VAR_30);

  switch (VAR_31) {
  case 130:
   if (!FUNC_27(VAR_30)) {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }




   if (FUNC_13(VAR_20) != VAR_3) {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }

   if (FUNC_15(VAR_20, &VAR_25) != 0) {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }

   if (VAR_25 != 0) {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }

   VAR_29 = FUNC_18(VAR_30, '@') + 1;
   if (FUNC_23(VAR_29, ((void*)0)) != 0) {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }

   VAR_24 = VAR_1;
   break;

  case 128:
   VAR_21 = FUNC_15(VAR_20, &VAR_25);
   if (!VAR_21 &&
       (VAR_25 < FUNC_17(VAR_18) ||
       VAR_25 > VAR_10 ||
       VAR_24))
    VAR_21 = FUNC_2(VAR_6);
   break;

  case 132:
  case 137:
  case 129:
  case 138:
   VAR_21 = FUNC_15(VAR_20, &VAR_25);
   if (!VAR_21 && VAR_25 > 1)
    VAR_21 = FUNC_2(VAR_6);
   break;

  case 136:





   if (FUNC_17(VAR_18) < VAR_11) {
    VAR_21 = FUNC_2(VAR_8);
    break;
   }




   if (!FUNC_22(VAR_18->spa_root_vdev)) {
    VAR_21 = FUNC_2(VAR_8);
    break;
   }

   VAR_22 = 1;

   VAR_21 = FUNC_14(VAR_20, &VAR_26);

   if (!VAR_21) {
    objset_t *VAR_32;
    uint64_t VAR_33;

    if (VAR_26 == ((void*)0) || VAR_26[0] == '\0') {
     VAR_23 = FUNC_26(
         136);
     break;
    }

    VAR_21 = FUNC_4(VAR_26, VAR_9, &VAR_32);
    if (VAR_21 != 0)
     break;






    if (FUNC_7(VAR_32) != VAR_4) {
     VAR_21 = FUNC_2(VAR_8);
    } else if ((VAR_21 =
        FUNC_8(FUNC_3(VAR_32),
        FUNC_24(VAR_13),
        &VAR_33)) == 0 &&
        !FUNC_1(VAR_33)) {
     VAR_21 = FUNC_2(VAR_8);
    } else {
     VAR_23 = FUNC_5(VAR_32);
    }
    FUNC_6(VAR_32, VAR_9);
   }
   break;

  case 131:
   VAR_21 = FUNC_15(VAR_20, &VAR_25);
   if (!VAR_21 && (VAR_25 < VAR_16 ||
       VAR_25 > VAR_15))
    VAR_21 = FUNC_2(VAR_6);
   if (!VAR_21 && FUNC_16(VAR_18)) {
    VAR_18->spa_failmode = VAR_25;
    VAR_21 = FUNC_2(VAR_7);
   }
   break;

  case 135:
   if ((VAR_21 = FUNC_14(VAR_20, &VAR_26)) != 0)
    break;

   if (VAR_26[0] == '\0')
    break;

   if (FUNC_19(VAR_26, "none") == 0)
    break;

   if (VAR_26[0] != '/') {
    VAR_21 = FUNC_2(VAR_6);
    break;
   }

   VAR_27 = FUNC_21(VAR_26, '/');
   FUNC_0(VAR_27 != ((void*)0));

   if (VAR_27[1] == '\0' || FUNC_19(VAR_27, "/.") == 0 ||
       FUNC_19(VAR_27, "/..") == 0)
    VAR_21 = FUNC_2(VAR_6);
   break;

  case 134:
   if ((VAR_21 = FUNC_14(VAR_20, &VAR_26)) != 0)
    break;
   for (VAR_28 = VAR_26; *VAR_28 != '\0'; VAR_28++) {






    if (*VAR_28 >= 0x7f) {
     VAR_21 = FUNC_2(VAR_6);
     break;
    }
   }
   if (FUNC_20(VAR_26) > VAR_17)
    VAR_21 = VAR_5;
   break;

  case 133:
   if (FUNC_17(VAR_18) < VAR_12)
    VAR_21 = FUNC_2(VAR_8);
   else
    VAR_21 = FUNC_15(VAR_20, &VAR_25);
   if (VAR_21 == 0 &&
       VAR_25 != 0 && VAR_25 < VAR_14)
    VAR_21 = FUNC_2(VAR_6);
   break;
  }

  if (VAR_21)
   break;
 }

 if (!VAR_21 && VAR_22) {
  VAR_21 = FUNC_11(VAR_19,
      FUNC_28(136), VAR_2);

  if (!VAR_21) {
   VAR_21 = FUNC_9(VAR_19,
       FUNC_28(136), VAR_23);
  }
 }

 return (VAR_21);
}
