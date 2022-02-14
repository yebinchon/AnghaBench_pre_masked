
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char* zfs_name; int * zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_15__ {char* zc_name; char* zc_value; int zc_cookie; int zc_objset_type; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_16__ {scalar_t__ recurse; scalar_t__ nounmount; scalar_t__ forceunmount; } ;
typedef TYPE_3__ renameflags_t ;
typedef int property ;
typedef int prop_changelist_t ;
typedef int parent ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char const*) ;
 scalar_t__ FUNC_8 (int *,char const*,int *,int ,int *) ;
 char* FUNC_9 (int ,char*) ;
 scalar_t__ VAR_25 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,int,char*,char const*) ;
 char* FUNC_14 (char const*,char const) ;
 scalar_t__ FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char*,char const*,int) ;
 scalar_t__ FUNC_18 (char const*,char const*,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *,int ,char*) ;
 int FUNC_22 (int *,char*,...) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (int *,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_25 (int *,char*,int ) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_27 (TYPE_1__*,int ) ;
 int FUNC_28 (int *,scalar_t__,char*) ;
 char* FUNC_29 (int *,char const*) ;
 int FUNC_30 (int *,char const*,int ,scalar_t__) ;

int
FUNC_31(zfs_handle_t *VAR_26, const char *VAR_27, const char *VAR_28,
    renameflags_t VAR_29)
{
 int VAR_30 = 0;
 zfs_cmd_t VAR_31 = { 0 };
 char *VAR_32;
 prop_changelist_t *VAR_33 = ((void*)0);
 zfs_handle_t *VAR_34 = ((void*)0);
 char *VAR_35 = ((void*)0);
 char VAR_36[VAR_17];
 char VAR_37[VAR_16];
 libzfs_handle_t *VAR_38 = VAR_26->zfs_hdl;
 char VAR_39[1024];


 if (FUNC_15(VAR_26->zfs_name, VAR_28) == 0)
  return (0);

 (void) FUNC_13(VAR_39, sizeof (VAR_39), FUNC_9(VAR_14,
     "cannot rename to '%s'"), VAR_28);

 if (VAR_27 != ((void*)0)) {




  FUNC_1(VAR_29.recurse);

  (void) FUNC_16(VAR_26->zfs_name, "@", sizeof(VAR_26->zfs_name));
  (void) FUNC_16(VAR_26->zfs_name, VAR_27, sizeof(VAR_26->zfs_name));
  VAR_26->zfs_type = VAR_24;
 }


 if (!FUNC_30(VAR_38, VAR_26->zfs_name, VAR_26->zfs_type, VAR_1))
  return (FUNC_21(VAR_38, VAR_10, VAR_39));




 if (VAR_26->zfs_type == VAR_24 ||
     VAR_26->zfs_type == VAR_21) {
  const char VAR_40 = VAR_26->zfs_type == VAR_24 ? '@' : '#';

  if ((FUNC_14(VAR_28, VAR_40) == ((void*)0)) || *VAR_28 == VAR_40) {




   (void) FUNC_17(VAR_36, VAR_26->zfs_name, sizeof (VAR_36));
   VAR_32 = FUNC_14(VAR_36, VAR_40);
   if (FUNC_14(VAR_28, VAR_40) == ((void*)0))
    *(++VAR_32) = '\0';
   else
    *VAR_32 = '\0';
   (void) FUNC_16(VAR_36, VAR_28, sizeof (VAR_36));
   VAR_28 = VAR_36;
  } else {



   VAR_32 = FUNC_14(VAR_28, VAR_40);
   if (FUNC_18(VAR_26->zfs_name, VAR_28, VAR_32 - VAR_28)
       != 0 || VAR_26->zfs_name[VAR_32 - VAR_28] != VAR_40) {
    FUNC_22(VAR_38, FUNC_9(VAR_14,
        "%s must be part of same dataset"),
        VAR_26->zfs_type == VAR_24 ?
        "snapshots" : "bookmarks");
    return (FUNC_21(VAR_38, VAR_8,
        VAR_39));
   }
  }

  if (!FUNC_30(VAR_38, VAR_28, VAR_26->zfs_type, VAR_1))
   return (FUNC_21(VAR_38, VAR_10, VAR_39));
 } else {
  if (VAR_29.recurse) {
   FUNC_22(VAR_38, FUNC_9(VAR_14,
       "recursive rename must be a snapshot"));
   return (FUNC_21(VAR_38, VAR_7, VAR_39));
  }

  if (!FUNC_30(VAR_38, VAR_28, VAR_26->zfs_type, VAR_1))
   return (FUNC_21(VAR_38, VAR_10, VAR_39));


  if (FUNC_8(VAR_38, VAR_28, ((void*)0), VAR_0, ((void*)0)) != 0)
   return (-1);


  FUNC_19((VAR_32 = FUNC_14(VAR_28, '/')) != ((void*)0));
  if (FUNC_18(VAR_26->zfs_name, VAR_28, VAR_32 - VAR_28) != 0 ||
      VAR_26->zfs_name[VAR_32 - VAR_28] != '/') {
   FUNC_22(VAR_38, FUNC_9(VAR_14,
       "datasets must be within same pool"));
   return (FUNC_21(VAR_38, VAR_8, VAR_39));
  }


  if (FUNC_12(VAR_26->zfs_name, VAR_28)) {
   FUNC_22(VAR_38, FUNC_9(VAR_14,
       "New dataset name cannot be a descendant of "
       "current dataset name"));
   return (FUNC_21(VAR_38, VAR_10, VAR_39));
  }
 }

 (void) FUNC_13(VAR_39, sizeof (VAR_39),
     FUNC_9(VAR_14, "cannot rename '%s'"), VAR_26->zfs_name);

 if (FUNC_11() == VAR_12 &&
     FUNC_27(VAR_26, VAR_20)) {
  FUNC_22(VAR_38, FUNC_9(VAR_14,
      "dataset is used in a non-global zone"));
  return (FUNC_21(VAR_38, VAR_11, VAR_39));
 }





 if (VAR_26->zfs_type == VAR_23 &&
     !VAR_29.recurse && !VAR_29.nounmount &&
     FUNC_26(VAR_26, VAR_18, VAR_37,
     sizeof (VAR_37), ((void*)0), ((void*)0), 0, VAR_0) == 0 &&
     (FUNC_15(VAR_37, "legacy") == 0 ||
      FUNC_15(VAR_37, "none") == 0)) {
  VAR_29.nounmount = VAR_1;
 }
 if (VAR_29.recurse) {
  VAR_35 = FUNC_29(VAR_26->zfs_hdl, VAR_26->zfs_name);
  if (VAR_35 == ((void*)0)) {
   VAR_30 = -1;
   goto error;
  }
  VAR_32 = FUNC_14(VAR_35, '@');
  *VAR_32 = '\0';
  VAR_34 = FUNC_25(VAR_26->zfs_hdl, VAR_35, VAR_22);
  if (VAR_34 == ((void*)0)) {
   VAR_30 = -1;
   goto error;
  }
 } else if (VAR_26->zfs_type != VAR_24 &&
     VAR_26->zfs_type != VAR_21) {
  if ((VAR_33 = FUNC_3(VAR_26, VAR_19,
      VAR_29.nounmount ? VAR_2 : 0,
      VAR_29.forceunmount ? VAR_13 : 0)) == ((void*)0)) {
   return (-1);
  }

  if (FUNC_4(VAR_33)) {
   FUNC_22(VAR_38, FUNC_9(VAR_14,
       "child dataset with inherited mountpoint is used "
       "in a non-global zone"));
   (void) FUNC_21(VAR_38, VAR_11, VAR_39);
   VAR_30 = -1;
   goto error;
  }

  if ((VAR_30 = FUNC_6(VAR_33)) != 0)
   goto error;
 }

 if (FUNC_0(VAR_26))
  VAR_31.zc_objset_type = VAR_4;
 else
  VAR_31.zc_objset_type = VAR_3;

 (void) FUNC_17(VAR_31.zc_name, VAR_26->zfs_name, sizeof (VAR_31.zc_name));
 (void) FUNC_17(VAR_31.zc_value, VAR_28, sizeof (VAR_31.zc_value));

 VAR_31.zc_cookie = VAR_29.recurse ? 1 : 0;
 if (VAR_29.nounmount)
  VAR_31.zc_cookie |= 2;

 if ((VAR_30 = FUNC_24(VAR_26->zfs_hdl, VAR_15, &VAR_31)) != 0) {




  (void) FUNC_13(VAR_39, sizeof (VAR_39), FUNC_9(VAR_14,
      "cannot rename '%s'"), VAR_31.zc_name);

  if (VAR_29.recurse && VAR_25 == VAR_5) {
   FUNC_22(VAR_38, FUNC_9(VAR_14,
       "a child dataset already has a snapshot "
       "with the new name"));
   (void) FUNC_21(VAR_38, VAR_9, VAR_39);
  } else if (VAR_25 == VAR_6) {
   (void) FUNC_21(VAR_38, VAR_10, VAR_39);
  } else {
   (void) FUNC_28(VAR_26->zfs_hdl, VAR_25, VAR_39);
  }





  if (VAR_33 != ((void*)0))
   (void) FUNC_5(VAR_33);
 } else {
  if (VAR_33 != ((void*)0)) {
   FUNC_7(VAR_33, FUNC_23(VAR_26), VAR_28);
   VAR_30 = FUNC_5(VAR_33);
  }
 }

error:
 if (VAR_35 != ((void*)0)) {
  FUNC_10(VAR_35);
 }
 if (VAR_34 != ((void*)0)) {
  FUNC_20(VAR_34);
 }
 if (VAR_33 != ((void*)0)) {
  FUNC_2(VAR_33);
 }
 return (VAR_30);
}
