
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ zfs_type_t ;
typedef int zfs_prop_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_12 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,char**) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int VAR_16 ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_18 (int *,int *,int ) ;
 scalar_t__ FUNC_19 (char*,scalar_t__) ;
 int FUNC_20 (int ,char*,scalar_t__*) ;
 int * FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int *) ;
 char* FUNC_24 (scalar_t__) ;
 int * FUNC_25 (int ,scalar_t__,int *,int ,int *,int *,char*) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int *,int ,int *) ;
 int * FUNC_28 (int ,char*) ;
 scalar_t__ FUNC_29 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_30(int VAR_17, char **VAR_18)
{
 zfs_type_t VAR_19 = VAR_9;
 zfs_handle_t *VAR_20 = ((void*)0);
 uint64_t VAR_21 = 0;
 int VAR_22;
 boolean_t VAR_23 = VAR_0;
 boolean_t VAR_24 = VAR_0;
 boolean_t VAR_25 = VAR_0;
 boolean_t VAR_26 = VAR_0;
 int VAR_27 = 1;
 nvlist_t *VAR_28;
 uint64_t VAR_29;

 if (FUNC_6(&VAR_28, VAR_2, 0) != 0)
  FUNC_4();


 while ((VAR_22 = FUNC_1(VAR_17, VAR_18, ":V:b:so:pu")) != -1) {
  switch (VAR_22) {
  case 'V':
   VAR_19 = VAR_10;
   if (FUNC_20(VAR_12, VAR_13, &VAR_29) != 0) {
    (void) FUNC_0(VAR_16, FUNC_2("bad volume "
        "size '%s': %s\n"), VAR_13,
        FUNC_3(VAR_12));
    goto error;
   }

   if (FUNC_5(VAR_28,
       FUNC_22(VAR_7), VAR_29) != 0)
    FUNC_4();
   VAR_21 = VAR_29;
   break;
  case 'p':
   VAR_25 = VAR_1;
   break;
  case 'b':
   VAR_24 = VAR_1;
   if (FUNC_20(VAR_12, VAR_13, &VAR_29) != 0) {
    (void) FUNC_0(VAR_16, FUNC_2("bad volume "
        "block size '%s': %s\n"), VAR_13,
        FUNC_3(VAR_12));
    goto error;
   }

   if (FUNC_5(VAR_28,
       FUNC_22(VAR_6),
       VAR_29) != 0)
    FUNC_4();
   break;
  case 'o':
   if (FUNC_9(VAR_28, VAR_13) != 0)
    goto error;
   break;
  case 's':
   VAR_23 = VAR_1;
   break;
  case 'u':
   VAR_26 = VAR_1;
   break;
  case ':':
   (void) FUNC_0(VAR_16, "%s", FUNC_2("missing size "
       "argument\n"));
   goto badusage;
  case '?':
   (void) FUNC_0(VAR_16, FUNC_2("invalid option '%c'\n"),
       VAR_15);
   goto badusage;
  }
 }

 if ((VAR_24 || VAR_23) && VAR_19 != VAR_10) {
  (void) FUNC_0(VAR_16, "%s", FUNC_2("'-s' and '-b' can only be "
      "used when creating a volume\n"));
  goto badusage;
 }
 if (VAR_26 && VAR_19 != VAR_9) {
  (void) FUNC_0(VAR_16, "%s", FUNC_2("'-u' can only be "
      "used when creating a file system\n"));
  goto badusage;
 }

 VAR_17 -= VAR_14;
 VAR_18 += VAR_14;


 if (VAR_17 == 0) {
  (void) FUNC_0(VAR_16, FUNC_2("missing %s argument\n"),
      FUNC_24(VAR_19));
  goto badusage;
 }
 if (VAR_17 > 1) {
  (void) FUNC_0(VAR_16, "%s", FUNC_2("too many arguments\n"));
  goto badusage;
 }

 if (VAR_19 == VAR_10 && !VAR_23) {
  zpool_handle_t *VAR_30;
  nvlist_t *VAR_31 = ((void*)0);
  uint64_t VAR_32;
  char *VAR_33;
  zfs_prop_t VAR_34;
  char *VAR_35;
  char VAR_36[1024];

  if ((VAR_33 = FUNC_12(VAR_18[0], '/')) != ((void*)0))
   *VAR_33 = '\0';
  VAR_30 = FUNC_28(VAR_12, VAR_18[0]);
  if (VAR_33 != ((void*)0))
   *VAR_33 = '/';
  if (VAR_30 == ((void*)0))
   goto error;
  VAR_32 = FUNC_27(VAR_30,
      VAR_11, ((void*)0));
  if (VAR_32 >= VAR_3)
   VAR_34 = VAR_4;
  else
   VAR_34 = VAR_5;

  (void) FUNC_11(VAR_36, sizeof (VAR_36),
      FUNC_2("cannot create '%s'"), VAR_18[0]);
  if (VAR_28 && (VAR_31 = FUNC_25(VAR_12, VAR_19,
      VAR_28, 0, ((void*)0), VAR_30, VAR_36)) == ((void*)0)) {
   FUNC_26(VAR_30);
   goto error;
  }
  FUNC_26(VAR_30);

  VAR_21 = FUNC_29(VAR_21, VAR_31);
  FUNC_7(VAR_31);

  if (FUNC_8(VAR_28, FUNC_22(VAR_34),
      &VAR_35) != 0) {
   if (FUNC_5(VAR_28,
       FUNC_22(VAR_34), VAR_21) != 0) {
    FUNC_7(VAR_28);
    FUNC_4();
   }
  }
 }

 if (VAR_25 && FUNC_19(VAR_18[0], VAR_19)) {





  if (FUNC_17(VAR_12, VAR_18[0], VAR_19)) {
   VAR_27 = 0;
   goto error;
  }
  if (FUNC_16(VAR_12, VAR_18[0]) != 0)
   goto error;
 }


 if (FUNC_15(VAR_12, VAR_18[0], VAR_19, VAR_28) != 0)
  goto error;

 if ((VAR_20 = FUNC_21(VAR_12, VAR_18[0], VAR_8)) == ((void*)0))
  goto error;

 VAR_27 = 0;
 if (!VAR_26 && FUNC_10(VAR_20)) {
  if (FUNC_18(VAR_20, ((void*)0), 0) != 0) {
   (void) FUNC_0(VAR_16, "%s", FUNC_2("filesystem "
       "successfully created, but not mounted\n"));
   VAR_27 = 1;
  } else if (FUNC_23(VAR_20) != 0) {
   (void) FUNC_0(VAR_16, "%s", FUNC_2("filesystem "
       "successfully created, but not shared\n"));
   VAR_27 = 1;
  }
 }

error:
 if (VAR_20)
  FUNC_14(VAR_20);
 FUNC_7(VAR_28);
 return (VAR_27);
badusage:
 FUNC_7(VAR_28);
 FUNC_13(VAR_0);
 return (2);
}
