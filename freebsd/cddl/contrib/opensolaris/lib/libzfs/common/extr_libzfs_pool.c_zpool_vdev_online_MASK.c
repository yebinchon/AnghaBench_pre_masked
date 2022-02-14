
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_8__ {int zc_obj; int zc_cookie; scalar_t__ zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int vdev_state_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
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
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,char*,...) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_2__*) ;
 int * FUNC_10 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,scalar_t__,char*) ;

int
FUNC_14(zpool_handle_t *VAR_15, const char *VAR_16, int VAR_17,
    vdev_state_t *VAR_18)
{
 zfs_cmd_t VAR_19 = { 0 };
 char VAR_20[1024];
 char *VAR_21;
 nvlist_t *VAR_22;
 boolean_t VAR_23, VAR_24, VAR_25;
 libzfs_handle_t *VAR_26 = VAR_15->zpool_hdl;

 if (VAR_17 & VAR_9) {
  (void) FUNC_3(VAR_20, sizeof (VAR_20),
      FUNC_0(VAR_5, "cannot expand %s"), VAR_16);
 } else {
  (void) FUNC_3(VAR_20, sizeof (VAR_20),
      FUNC_0(VAR_5, "cannot online %s"), VAR_16);
 }

 (void) FUNC_4(VAR_19.zc_name, VAR_15->zpool_name, sizeof (VAR_19.zc_name));
 if ((VAR_22 = FUNC_10(VAR_15, VAR_16, &VAR_23, &VAR_24,
     &VAR_25)) == ((void*)0))
  return (FUNC_7(VAR_26, VAR_2, VAR_20));

 FUNC_6(FUNC_2(VAR_22, VAR_10, &VAR_19.zc_guid) == 0);

 if (VAR_23)
  return (FUNC_7(VAR_26, VAR_1, VAR_20));

 if ((VAR_17 & VAR_9 ||
     FUNC_11(VAR_15, VAR_13, ((void*)0))) &&
     FUNC_1(VAR_22, VAR_11, &VAR_21) == 0) {
  uint64_t VAR_27 = 0;

  (void) FUNC_2(VAR_22, VAR_12,
      &VAR_27);




  if (VAR_24) {
   FUNC_8(VAR_26, FUNC_0(VAR_5,
       "cannot expand cache devices"));
   return (FUNC_7(VAR_26, VAR_4, VAR_20));
  }

  if (VAR_27) {
   VAR_21 += FUNC_5(VAR_7) + 1;
   (void) FUNC_12(VAR_26, VAR_21);
  }
 }

 VAR_19.zc_cookie = VAR_6;
 VAR_19.zc_obj = VAR_17;

 if (FUNC_9(VAR_26, VAR_8, &VAR_19) != 0) {
  if (VAR_14 == VAR_0) {
   FUNC_8(VAR_26, FUNC_0(VAR_5, "was split "
       "from this pool into a new one.  Use '%s' "
       "instead"), "zpool detach");
   return (FUNC_7(VAR_26, VAR_3, VAR_20));
  }
  return (FUNC_13(VAR_26, VAR_14, VAR_20));
 }

 *VAR_18 = VAR_19.zc_cookie;
 return (0);
}
