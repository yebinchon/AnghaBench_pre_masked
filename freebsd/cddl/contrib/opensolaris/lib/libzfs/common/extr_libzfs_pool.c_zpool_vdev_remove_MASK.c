
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_8__ {int zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;
 int * FUNC_7 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (int *,int,char*) ;

int
FUNC_10(zpool_handle_t *VAR_10, const char *VAR_11)
{
 zfs_cmd_t VAR_12 = { 0 };
 char VAR_13[1024];
 nvlist_t *VAR_14;
 boolean_t VAR_15, VAR_16, VAR_17;
 libzfs_handle_t *VAR_18 = VAR_10->zpool_hdl;
 uint64_t VAR_19;

 (void) FUNC_2(VAR_13, sizeof (VAR_13),
     FUNC_0(VAR_5, "cannot remove %s"), VAR_11);

 (void) FUNC_3(VAR_12.zc_name, VAR_10->zpool_name, sizeof (VAR_12.zc_name));
 if ((VAR_14 = FUNC_7(VAR_10, VAR_11, &VAR_15, &VAR_16,
     &VAR_17)) == ((void*)0))
  return (FUNC_4(VAR_18, VAR_3, VAR_13));

 VAR_19 = FUNC_8(VAR_10, VAR_8, ((void*)0));
 if (VAR_17 && VAR_19 < VAR_4) {
  FUNC_5(VAR_18, FUNC_0(VAR_5,
      "pool must be upgraded to support log removal"));
  return (FUNC_4(VAR_18, VAR_0, VAR_13));
 }

 VAR_12.zc_guid = FUNC_1(VAR_14, VAR_7);

 if (FUNC_6(VAR_18, VAR_6, &VAR_12) == 0)
  return (0);

 switch (VAR_9) {

 case 128:
  FUNC_5(VAR_18, FUNC_0(VAR_5,
      "invalid config; all top-level vdevs must "
      "have the same sector size and not be raidz."));
  (void) FUNC_4(VAR_18, VAR_2, VAR_13);
  break;

 case 129:
  FUNC_5(VAR_18, FUNC_0(VAR_5,
      "Pool busy; removal may already be in progress"));
  (void) FUNC_4(VAR_18, VAR_1, VAR_13);
  break;

 default:
  (void) FUNC_9(VAR_18, VAR_9, VAR_13);
 }
 return (-1);
}
