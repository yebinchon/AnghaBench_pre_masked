
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zlp_rewind; } ;
typedef TYPE_1__ zpool_load_policy_t ;
typedef int zpool_handle_t ;
struct TYPE_14__ {int zc_nvlist_conf_size; int zc_cookie; int zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;
struct TYPE_15__ {int import; int create; } ;
typedef TYPE_3__ prop_flags_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int desc ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_19 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int *,TYPE_2__*,int **) ;
 scalar_t__ FUNC_15 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_16 (int *,TYPE_2__*,int *) ;
 int FUNC_17 (int *,int ,char*) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (int *,int ,char*,char const*) ;
 int FUNC_20 (int *,int ,TYPE_2__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,int,int *) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (int *,int ,char const*) ;
 scalar_t__ FUNC_25 (int *,char*,int **) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,char*,int,int *) ;
 int FUNC_28 (int *,int,char*) ;
 int * FUNC_29 (int *,char*,int *,int ,TYPE_3__,char*) ;

int
FUNC_30(libzfs_handle_t *VAR_20, nvlist_t *VAR_21, const char *VAR_22,
    nvlist_t *VAR_23, int VAR_24)
{
 zfs_cmd_t VAR_25 = { 0 };
 zpool_load_policy_t VAR_26;
 nvlist_t *VAR_27 = ((void*)0);
 nvlist_t *VAR_28 = ((void*)0);
 nvlist_t *VAR_29 = ((void*)0);
 char *VAR_30;
 char *VAR_31;
 int VAR_32;
 int VAR_33 = 0;
 char VAR_34[1024];

 FUNC_10(FUNC_4(VAR_21, VAR_14,
     &VAR_31) == 0);

 (void) FUNC_8(VAR_34, sizeof (VAR_34), FUNC_0(VAR_8,
     "cannot import pool '%s'"), VAR_31);

 if (VAR_22 != ((void*)0)) {
  if (!FUNC_24(VAR_20, VAR_0, VAR_22))
   return (FUNC_19(VAR_20, VAR_6,
       FUNC_0(VAR_8, "cannot import '%s'"),
       VAR_22));
  VAR_30 = (char *)VAR_22;
 } else {
  VAR_30 = VAR_31;
 }

 if (VAR_23 != ((void*)0)) {
  uint64_t VAR_35;
  prop_flags_t VAR_36 = { .create = VAR_0, .import = VAR_1 };

  FUNC_10(FUNC_5(VAR_21, VAR_16,
      &VAR_35) == 0);

  if ((VAR_23 = FUNC_29(VAR_20, VAR_31,
      VAR_23, VAR_35, VAR_36, VAR_34)) == ((void*)0))
   return (-1);
  if (FUNC_16(VAR_20, &VAR_25, VAR_23) != 0) {
   FUNC_2(VAR_23);
   return (-1);
  }
  FUNC_2(VAR_23);
 }

 (void) FUNC_9(VAR_25.zc_name, VAR_30, sizeof (VAR_25.zc_name));

 FUNC_10(FUNC_5(VAR_21, VAR_13,
     &VAR_25.zc_guid) == 0);

 if (FUNC_15(VAR_20, &VAR_25, VAR_21) != 0) {
  FUNC_13(&VAR_25);
  return (-1);
 }
 if (FUNC_11(VAR_20, &VAR_25, VAR_25.zc_nvlist_conf_size * 2) != 0) {
  FUNC_13(&VAR_25);
  return (-1);
 }

 VAR_25.zc_cookie = VAR_24;
 while ((VAR_32 = FUNC_20(VAR_20, VAR_9, &VAR_25)) != 0 &&
     VAR_19 == VAR_2) {
  if (FUNC_12(VAR_20, &VAR_25) != 0) {
   FUNC_13(&VAR_25);
   return (-1);
  }
 }
 if (VAR_32 != 0)
  VAR_33 = VAR_19;

 (void) FUNC_14(VAR_20, &VAR_25, &VAR_27);

 FUNC_13(&VAR_25);

 FUNC_23(VAR_21, &VAR_26);

 if (VAR_33) {
  char VAR_37[1024];





  if (VAR_26.zlp_rewind & VAR_18) {
   FUNC_27(VAR_20, VAR_22 ? VAR_31 : VAR_30,
       VAR_1, VAR_27);
   FUNC_2(VAR_27);
   return (-1);
  }

  if (VAR_22 == ((void*)0))
   (void) FUNC_8(VAR_37, sizeof (VAR_37),
       FUNC_0(VAR_8, "cannot import '%s'"),
       VAR_30);
  else
   (void) FUNC_8(VAR_37, sizeof (VAR_37),
       FUNC_0(VAR_8, "cannot import '%s' as '%s'"),
       VAR_31, VAR_30);

  switch (VAR_33) {
  case 130:
   if (VAR_27 != ((void*)0) && FUNC_3(VAR_27,
       VAR_11, &VAR_28) == 0 &&
       FUNC_1(VAR_28, VAR_15)) {
    (void) FUNC_7(FUNC_0(VAR_8, "This "
        "pool uses the following feature(s) not "
        "supported by this system:\n"));
    FUNC_26(VAR_27);
    if (FUNC_1(VAR_28,
        VAR_10)) {
     (void) FUNC_7(FUNC_0(VAR_8,
         "All unsupported features are only "
         "required for writing to the pool."
         "\nThe pool can be imported using "
         "'-o readonly=on'.\n"));
    }
   }



   (void) FUNC_17(VAR_20, VAR_4, VAR_37);
   break;

  case 132:
   (void) FUNC_17(VAR_20, VAR_5, VAR_37);
   break;

  case 128:
   FUNC_18(VAR_20, FUNC_0(VAR_8,
       "one or more devices is read only"));
   (void) FUNC_17(VAR_20, VAR_3, VAR_37);
   break;

  case 129:
   if (VAR_27 && FUNC_3(VAR_27,
       VAR_11, &VAR_28) == 0 &&
       FUNC_3(VAR_28,
       VAR_12, &VAR_29) == 0) {
    (void) FUNC_7(FUNC_0(VAR_8,
        "The devices below are missing or "
        "corrupted, use '-m' to import the pool "
        "anyway:\n"));
    FUNC_6(VAR_20, ((void*)0), VAR_29, 2);
    (void) FUNC_7("\n");
   }
   (void) FUNC_28(VAR_20, VAR_33, VAR_37);
   break;

  case 133:
   (void) FUNC_28(VAR_20, VAR_33, VAR_37);
   break;
  case 131:
   FUNC_18(VAR_20, FUNC_0(VAR_8,
       "new name of at least one dataset is longer than "
       "the maximum allowable length"));
   (void) FUNC_17(VAR_20, VAR_7, VAR_37);
   break;
  default:
   (void) FUNC_28(VAR_20, VAR_33, VAR_37);
   FUNC_22(VAR_20,
       VAR_22 ? VAR_31 : VAR_30, -VAR_33, VAR_27);
   break;
  }

  FUNC_2(VAR_27);
  VAR_32 = -1;
 } else {
  zpool_handle_t *VAR_38;




  if (FUNC_25(VAR_20, VAR_30, &VAR_38) != 0)
   VAR_32 = -1;
  else if (VAR_38 != ((void*)0))
   FUNC_21(VAR_38);
  if (VAR_26.zlp_rewind &
      (VAR_17 | VAR_18)) {
   FUNC_27(VAR_20, VAR_22 ? VAR_31 : VAR_30,
       ((VAR_26.zlp_rewind & VAR_18) != 0), VAR_27);
  }
  FUNC_2(VAR_27);
  return (0);
 }

 return (VAR_32);
}
