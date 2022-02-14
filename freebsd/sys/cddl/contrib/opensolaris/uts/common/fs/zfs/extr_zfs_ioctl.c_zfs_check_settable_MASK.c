
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_prop_t ;
typedef size_t uint64_t ;
typedef int spa_t ;
typedef int spa_feature_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int ci_flags; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int VAR_17 ;
 size_t VAR_18 ;
 char* VAR_19 ;
 char const* VAR_20 ;
 char* VAR_21 ;
 size_t VAR_22 ;






 size_t VAR_23 ;


 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,size_t*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char const*,int **,int ) ;
 int * FUNC_13 (char const*,char) ;
 int FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*,char const*,int ) ;
 int FUNC_16 (char const*,int ) ;
 int FUNC_17 (char const*) ;
 size_t VAR_34 ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*) ;
 scalar_t__ FUNC_20 (char const*) ;
 int FUNC_21 (char const*,int,int *,int ) ;
 int FUNC_22 (char const*,char const*,int *) ;
 char** VAR_35 ;
 TYPE_1__* VAR_36 ;
 int FUNC_23 (size_t) ;
 int FUNC_24 (char const*,int ) ;

__attribute__((used)) static int
FUNC_25(const char *VAR_37, nvpair_t *VAR_38, cred_t *VAR_39)
{
 const char *VAR_40 = FUNC_5(VAR_38);
 boolean_t VAR_41 = (FUNC_13(VAR_37, '@') != ((void*)0));
 zfs_prop_t VAR_42 = FUNC_18(VAR_40);
 uint64_t VAR_43;
 int VAR_44;

 if (VAR_42 == VAR_32) {
  if (FUNC_19(VAR_40)) {
   if ((VAR_44 = FUNC_22(VAR_37,
       VAR_20, VAR_39)))
    return (VAR_44);
   return (0);
  }

  if (!VAR_41 && FUNC_20(VAR_40)) {
   const char *VAR_45 = ((void*)0);
   const char *VAR_46 =
       VAR_35[VAR_24];
   const char *VAR_47 =
       VAR_35[VAR_23];

   if (FUNC_15(VAR_40, VAR_46,
       FUNC_14(VAR_46)) == 0) {
    VAR_45 = VAR_21;
   } else if (FUNC_15(VAR_40, VAR_47,
       FUNC_14(VAR_47)) == 0) {
    VAR_45 = VAR_19;
   } else {

    return (FUNC_2(VAR_2));
   }

   if ((VAR_44 = FUNC_22(VAR_37, VAR_45, VAR_39)))
    return (VAR_44);
   return (0);
  }

  return (FUNC_2(VAR_2));
 }

 if (VAR_41)
  return (FUNC_2(VAR_2));

 if (FUNC_6(VAR_38) == VAR_0) {




  nvlist_t *VAR_48;
  FUNC_3(FUNC_7(VAR_38, &VAR_48) == 0);
  FUNC_3(FUNC_4(VAR_48, VAR_33,
      &VAR_38) == 0);
 }




 switch (VAR_42) {
 case 133:





  if (FUNC_8(VAR_38, &VAR_43) == 0) {
   if (VAR_43 >= VAR_27 &&
       VAR_43 <= VAR_28 &&
       FUNC_16(VAR_37,
       VAR_14)) {
    return (FUNC_2(VAR_3));
   }

   if (VAR_43 == VAR_30 &&
       FUNC_16(VAR_37,
       VAR_16))
    return (FUNC_2(VAR_3));

   if (VAR_43 == VAR_29) {
    spa_t *VAR_49;

    if ((VAR_44 = FUNC_12(VAR_37, &VAR_49, VAR_5)) != 0)
     return (VAR_44);

    if (!FUNC_11(VAR_49,
        VAR_8)) {
     FUNC_10(VAR_49, VAR_5);
     return (FUNC_2(VAR_3));
    }
    FUNC_10(VAR_49, VAR_5);
   }
   if (FUNC_17(VAR_37) &&
       !FUNC_0(VAR_43)) {
    return (FUNC_2(VAR_4));
   }
  }
  break;

 case 132:
  if (FUNC_16(VAR_37, VAR_13))
   return (FUNC_2(VAR_3));
  break;

 case 129:

  if (FUNC_8(VAR_38, &VAR_43) == 0 &&
      VAR_43 > VAR_11) {
   spa_t *VAR_50;





   if (VAR_43 > VAR_34 ||
       VAR_43 > VAR_10)
    return (FUNC_2(VAR_4));

   if ((VAR_44 = FUNC_12(VAR_37, &VAR_50, VAR_5)) != 0)
    return (VAR_44);

   if (!FUNC_11(VAR_50,
       VAR_6)) {
    FUNC_10(VAR_50, VAR_5);
    return (FUNC_2(VAR_3));
   }
   FUNC_10(VAR_50, VAR_5);
  }
  break;

 case 130:

  if (FUNC_8(VAR_38, &VAR_43) == 0 &&
      VAR_43 != VAR_22) {
   spa_t *VAR_51;

   if ((VAR_44 = FUNC_12(VAR_37, &VAR_51, VAR_5)) != 0)
    return (VAR_44);

   if (!FUNC_11(VAR_51,
       VAR_7)) {
    FUNC_10(VAR_51, VAR_5);
    return (FUNC_2(VAR_3));
   }
   FUNC_10(VAR_51, VAR_5);
  }
  break;

 case 128:
  if (FUNC_24(VAR_37, VAR_31))
   return (FUNC_2(VAR_3));
  break;

 case 135:
  if (FUNC_6(VAR_38) == VAR_1 &&
      FUNC_8(VAR_38, &VAR_43) == 0) {
   if (VAR_43 == VAR_18 &&
       FUNC_16(VAR_37,
       VAR_15))
    return (FUNC_2(VAR_3));
  }
  break;

 case 134:
 case 131:
 {
  spa_feature_t VAR_52;
  spa_t *VAR_53;


  if (VAR_42 == 131 &&
      FUNC_16(VAR_37, VAR_12))
   return (FUNC_2(VAR_3));

  if (FUNC_8(VAR_38, &VAR_43) != 0)
   return (FUNC_2(VAR_2));


  VAR_52 = FUNC_23(VAR_43 & VAR_26);
  if (VAR_52 == VAR_9)
   break;

  if ((VAR_44 = FUNC_12(VAR_37, &VAR_53, VAR_5)) != 0)
   return (VAR_44);



  if (FUNC_9(VAR_53) != 0 &&
      VAR_43 < VAR_25 &&
      (VAR_36[VAR_43].ci_flags &
      VAR_17)) {
   FUNC_10(VAR_53, VAR_5);
   return (FUNC_2(VAR_4));
  }
  if (!FUNC_11(VAR_53, VAR_52)) {
   FUNC_10(VAR_53, VAR_5);
   return (FUNC_2(VAR_3));
  }
  FUNC_10(VAR_53, VAR_5);
  break;
 }
 }

 return (FUNC_21(VAR_37, VAR_42, VAR_38, FUNC_1()));
}
