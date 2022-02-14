
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ zfs_type_t ;
typedef int uint64_t ;
typedef int pool_path ;
typedef int parent ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef enum lzc_dataset_type { ____Placeholder_lzc_dataset_type } lzc_dataset_type ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (int *,char const*,int*,int ,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (int ,char*) ;
 int VAR_17 ;
 int FUNC_3 (char const*,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char const*,int) ;
 scalar_t__ FUNC_10 (int *,char const*,int ) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int,char*) ;
 int * FUNC_16 (int *,scalar_t__,int *,int,int *,int *,char*) ;
 int FUNC_17 (int *,char const*,scalar_t__,int ) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *,char*) ;

int
FUNC_20(libzfs_handle_t *VAR_18, const char *VAR_19, zfs_type_t VAR_20,
    nvlist_t *VAR_21)
{
 int VAR_22;
 uint64_t VAR_23 = 0;
 uint64_t VAR_24 = FUNC_13(VAR_13);
 char VAR_25[1024];
 uint64_t VAR_26;
 enum lzc_dataset_type VAR_27;
 zpool_handle_t *VAR_28;

 (void) FUNC_7(VAR_25, sizeof (VAR_25), FUNC_2(VAR_11,
     "cannot create '%s'"), VAR_19);


 if (!FUNC_17(VAR_18, VAR_19, VAR_20, VAR_1))
  return (FUNC_11(VAR_18, VAR_6, VAR_25));

 if (FUNC_1(VAR_19) != 0) {
  FUNC_12(VAR_18, FUNC_2(VAR_11,
      "maximum name nesting depth exceeded"));
  return (FUNC_11(VAR_18, VAR_6, VAR_25));
 }


 if (FUNC_0(VAR_18, VAR_19, &VAR_26, VAR_0, ((void*)0)) != 0)
  return (-1);
 if (FUNC_10(VAR_18, VAR_19, VAR_15)) {
  FUNC_12(VAR_18, FUNC_2(VAR_11,
      "dataset already exists"));
  return (FUNC_11(VAR_18, VAR_5, VAR_25));
 }

 if (VAR_20 == VAR_16)
  VAR_27 = VAR_10;
 else
  VAR_27 = VAR_9;


 char VAR_29[VAR_12];
 (void) FUNC_9(VAR_29, VAR_19, sizeof (VAR_29));


 char *VAR_30 = FUNC_8(VAR_29, '/');
 if (VAR_30 != ((void*)0))
  *VAR_30 = '\0';

 if ((VAR_28 = FUNC_19(VAR_18, VAR_29)) == ((void*)0))
  return (-1);

 if (VAR_21 && (VAR_21 = FUNC_16(VAR_18, VAR_20, VAR_21,
     VAR_26, ((void*)0), VAR_28, VAR_25)) == 0) {
  FUNC_18(VAR_28);
  return (-1);
 }
 FUNC_18(VAR_28);

 if (VAR_20 == VAR_16) {







  if (VAR_21 == ((void*)0) || FUNC_5(VAR_21,
      FUNC_14(VAR_14), &VAR_23) != 0) {
   FUNC_4(VAR_21);
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "missing volume size"));
   return (FUNC_11(VAR_18, VAR_2, VAR_25));
  }

  if ((VAR_22 = FUNC_5(VAR_21,
      FUNC_14(VAR_13),
      &VAR_24)) != 0) {
   if (VAR_22 == 131) {
    VAR_24 = FUNC_13(
        VAR_13);
   } else {
    FUNC_4(VAR_21);
    FUNC_12(VAR_18, FUNC_2(VAR_11,
        "missing volume block size"));
    return (FUNC_11(VAR_18, VAR_2, VAR_25));
   }
  }

  if (VAR_23 == 0) {
   FUNC_4(VAR_21);
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "volume size cannot be zero"));
   return (FUNC_11(VAR_18, VAR_2, VAR_25));
  }

  if (VAR_23 % VAR_24 != 0) {
   FUNC_4(VAR_21);
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "volume size must be a multiple of volume block "
       "size"));
   return (FUNC_11(VAR_18, VAR_2, VAR_25));
  }
 }


 VAR_22 = FUNC_3(VAR_19, VAR_27, VAR_21);
 FUNC_4(VAR_21);


 if (VAR_22 != 0) {
  char VAR_31[VAR_12];
  (void) FUNC_6(VAR_19, VAR_31, sizeof (VAR_31));

  switch (VAR_17) {
  case 131:
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "no such parent '%s'"), VAR_31);
   return (FUNC_11(VAR_18, VAR_7, VAR_25));

  case 132:
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "parent '%s' is not a filesystem"), VAR_31);
   return (FUNC_11(VAR_18, VAR_3, VAR_25));

  case 130:
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "pool must be upgraded to set this "
       "property or value"));
   return (FUNC_11(VAR_18, VAR_4, VAR_25));
  case 128:
   FUNC_12(VAR_18, FUNC_2(VAR_11,
       "invalid property value(s) specified"));
   return (FUNC_11(VAR_18, VAR_2, VAR_25));
  default:
   return (FUNC_15(VAR_18, VAR_17, VAR_25));
  }
 }

 return (0);
}
