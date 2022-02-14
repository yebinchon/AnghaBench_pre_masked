
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_type_t ;
typedef scalar_t__ zfs_type_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int data_type_t ;
typedef int boolean_t ;


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
 int VAR_10 ;

 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*,char*) ;
 scalar_t__ FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char**) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int ,char const*) ;
 int FUNC_12 (int *,int ,...) ;
 int FUNC_13 (int *,char*,int *) ;
 int FUNC_14 (int) ;
 char* FUNC_15 (int) ;
 int FUNC_16 (int) ;
 char* FUNC_17 (int) ;
 int FUNC_18 (int,char*,int *,scalar_t__) ;
 int FUNC_19 (int,scalar_t__) ;

int
FUNC_20(libzfs_handle_t *VAR_15, nvpair_t *VAR_16, int VAR_17,
    zfs_type_t VAR_18, nvlist_t *VAR_19, char **VAR_20, uint64_t *VAR_21,
    const char *VAR_22)
{
 data_type_t VAR_23 = FUNC_6(VAR_16);
 zprop_type_t VAR_24;
 const char *VAR_25;
 char *VAR_26;
 boolean_t VAR_27 = VAR_0;
 boolean_t VAR_28 = VAR_0;

 if (VAR_18 == VAR_13) {
  VAR_24 = FUNC_16(VAR_17);
  VAR_25 = FUNC_17(VAR_17);
 } else {
  VAR_24 = FUNC_14(VAR_17);
  VAR_25 = FUNC_15(VAR_17);
 }




 *VAR_20 = ((void*)0);
 *VAR_21 = 0;

 switch (VAR_24) {
 case 129:
  if (VAR_23 != VAR_2) {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "'%s' must be a string"), FUNC_5(VAR_16));
   goto error;
  }
  (void) FUNC_7(VAR_16, VAR_20);
  if (FUNC_10(*VAR_20) >= VAR_7) {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "'%s' is too long"), FUNC_5(VAR_16));
   goto error;
  }
  break;

 case 130:
  if (VAR_23 == VAR_2) {
   (void) FUNC_7(VAR_16, &VAR_26);
   if (FUNC_9(VAR_26, "none") == 0) {
    VAR_27 = VAR_1;
   } else if (FUNC_9(VAR_26, "auto") == 0) {
    VAR_28 = VAR_1;
   } else if (FUNC_13(VAR_15, VAR_26, VAR_21) != 0) {
    goto error;
   }
  } else if (VAR_23 == VAR_3) {
   (void) FUNC_8(VAR_16, VAR_21);
  } else {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "'%s' must be a number"), FUNC_5(VAR_16));
   goto error;
  }




  if ((VAR_18 & VAR_12) && *VAR_21 == 0 && !VAR_27 &&
      (VAR_17 == VAR_9 || VAR_17 == VAR_10)) {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "use 'none' to disable quota/refquota"));
   goto error;
  }





  if ((VAR_18 & VAR_12) && VAR_27 &&
      (VAR_17 == VAR_8 ||
      VAR_17 == VAR_11)) {
   *VAR_21 = VAR_6;
  }






  if (VAR_28) {
   switch (VAR_17) {
   case 128:
    if ((VAR_18 & VAR_14) == 0) {
     FUNC_12(VAR_15, FUNC_1(VAR_5,
         "'%s=auto' only allowed on "
         "volumes"), FUNC_5(VAR_16));
     goto error;
    }
    *VAR_21 = VAR_6;
    break;
   default:
    FUNC_12(VAR_15, FUNC_1(VAR_5,
        "'auto' is invalid value for '%s'"),
        FUNC_5(VAR_16));
    goto error;
   }
  }

  break;

 case 131:
  if (VAR_23 != VAR_2) {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "'%s' must be a string"), FUNC_5(VAR_16));
   goto error;
  }

  (void) FUNC_7(VAR_16, &VAR_26);

  if (FUNC_18(VAR_17, VAR_26, VAR_21, VAR_18) != 0) {
   FUNC_12(VAR_15, FUNC_1(VAR_5,
       "'%s' must be one of '%s'"), VAR_25,
       FUNC_19(VAR_17, VAR_18));
   goto error;
  }
  break;

 default:
  FUNC_0();
 }




 if (*VAR_20 != ((void*)0)) {
  if (FUNC_3(VAR_19, VAR_25, *VAR_20) != 0) {
   (void) FUNC_2(VAR_15);
   return (-1);
  }
 } else {
  if (FUNC_4(VAR_19, VAR_25, *VAR_21) != 0) {
   (void) FUNC_2(VAR_15);
   return (-1);
  }
 }

 return (0);
error:
 (void) FUNC_11(VAR_15, VAR_4, VAR_22);
 return (-1);
}
