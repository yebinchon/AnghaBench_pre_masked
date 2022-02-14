
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_8__ {char const* zfs_name; int * zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_9__ {int zc_value; int zc_name; int zc_cookie; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int prop_changelist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,char*) ;
 int VAR_11 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int,char*,char const*,char const*) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 char* FUNC_17 (scalar_t__) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int *,int ,char*) ;

int
FUNC_21(zfs_handle_t *VAR_12, const char *VAR_13, boolean_t VAR_14)
{
 zfs_cmd_t VAR_15 = { 0 };
 int VAR_16;
 prop_changelist_t *VAR_17;
 libzfs_handle_t *VAR_18 = VAR_12->zfs_hdl;
 char VAR_19[1024];
 zfs_prop_t VAR_20;

 (void) FUNC_8(VAR_19, sizeof (VAR_19), FUNC_5(VAR_6,
     "cannot inherit %s for '%s'"), VAR_13, VAR_12->zfs_name);

 VAR_15.zc_cookie = VAR_14;
 if ((VAR_20 = FUNC_13(VAR_13)) == VAR_10) {




  if (!FUNC_18(VAR_13)) {
   FUNC_11(VAR_18, FUNC_5(VAR_6,
       "invalid property"));
   return (FUNC_10(VAR_18, VAR_0, VAR_19));
  }

  (void) FUNC_9(VAR_15.zc_name, VAR_12->zfs_name, sizeof (VAR_15.zc_name));
  (void) FUNC_9(VAR_15.zc_value, VAR_13, sizeof (VAR_15.zc_value));

  if (FUNC_12(VAR_12->zfs_hdl, VAR_7, &VAR_15) != 0)
   return (FUNC_20(VAR_18, VAR_11, VAR_19));

  return (0);
 }




 if (FUNC_16(VAR_20))
  return (FUNC_10(VAR_18, VAR_2, VAR_19));

 if (!FUNC_15(VAR_20) && !VAR_14)
  return (FUNC_10(VAR_18, VAR_1, VAR_19));




 if (!FUNC_19(VAR_20, VAR_12->zfs_type))
  return (FUNC_10(VAR_18, VAR_3, VAR_19));




 VAR_13 = FUNC_17(VAR_20);
 (void) FUNC_9(VAR_15.zc_name, VAR_12->zfs_name, sizeof (VAR_15.zc_name));
 (void) FUNC_9(VAR_15.zc_value, VAR_13, sizeof (VAR_15.zc_value));

 if (VAR_20 == VAR_8 && FUNC_7() == VAR_5 &&
     FUNC_14(VAR_12, VAR_9)) {
  FUNC_11(VAR_18, FUNC_5(VAR_6,
      "dataset is used in a non-global zone"));
  return (FUNC_10(VAR_18, VAR_4, VAR_19));
 }




 if ((VAR_17 = FUNC_1(VAR_12, VAR_20, 0, 0)) == ((void*)0))
  return (-1);

 if (VAR_20 == VAR_8 && FUNC_2(VAR_17)) {
  FUNC_11(VAR_18, FUNC_5(VAR_6,
      "child dataset with inherited mountpoint is used "
      "in a non-global zone"));
  VAR_16 = FUNC_10(VAR_18, VAR_4, VAR_19);
  goto error;
 }

 if ((VAR_16 = FUNC_4(VAR_17)) != 0)
  goto error;

 if ((VAR_16 = FUNC_12(VAR_12->zfs_hdl, VAR_7, &VAR_15)) != 0) {
  return (FUNC_20(VAR_18, VAR_11, VAR_19));
 } else {

  if ((VAR_16 = FUNC_3(VAR_17)) != 0)
   goto error;




  (void) FUNC_6(VAR_12);
 }

error:
 FUNC_0(VAR_17);
 return (VAR_16);
}
