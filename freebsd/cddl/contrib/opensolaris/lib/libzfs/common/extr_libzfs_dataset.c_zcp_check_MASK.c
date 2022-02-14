
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_prop_t ;
struct TYPE_7__ {char* zfs_name; TYPE_2__* zpool_hdl; TYPE_1__* zfs_hdl; } ;
typedef TYPE_3__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int longlong_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {char* zpool_name; } ;
struct TYPE_5__ {int libzfs_prop_debug; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char const*,int,int,int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,scalar_t__*) ;
 int FUNC_7 (int *,char*,char**) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;

void
FUNC_11(zfs_handle_t *VAR_2, zfs_prop_t VAR_3, uint64_t VAR_4,
    const char *VAR_5)
{
 if (!VAR_2->zfs_hdl->libzfs_prop_debug)
  return;
 int VAR_6;
 char *VAR_7 = VAR_2->zpool_hdl->zpool_name;
 const char *VAR_8 =
     "args = ...\n"
     "ds = args['dataset']\n"
     "prop = args['property']\n"
     "value, setpoint = zfs.get_prop(ds, prop)\n"
     "return {value=value, setpoint=setpoint}\n";
 nvlist_t *VAR_9;
 nvlist_t *VAR_10;
 nvlist_t *VAR_11 = FUNC_1();

 FUNC_0(VAR_11, "dataset", VAR_2->zfs_name);
 FUNC_0(VAR_11, "property", FUNC_10(VAR_3));

 VAR_6 = FUNC_4(VAR_7, VAR_8,
     10 * 1000 * 1000, 10 * 1024 * 1024, VAR_11, &VAR_9);

 if (VAR_6 == 0) {
  VAR_10 = FUNC_2(VAR_9, "return");
  if (FUNC_9(VAR_3) == VAR_0) {
   int64_t VAR_12;
   VAR_6 = FUNC_6(VAR_10, "value", &VAR_12);
   if (VAR_6 != 0) {
    (void) FUNC_3(VAR_1, "zcp check error: %u\n",
        VAR_6);
    return;
   }
   if (VAR_12 != VAR_4) {
    (void) FUNC_3(VAR_1,
        "%s: zfs found %d, but zcp found %d\n",
        FUNC_10(VAR_3),
        (longlong_t)VAR_4, (longlong_t)VAR_12);
   }
  } else {
   char *VAR_13;
   VAR_6 = FUNC_7(VAR_10, "value", &VAR_13);
   if (VAR_6 != 0) {
    (void) FUNC_3(VAR_1, "zcp check error: %u\n",
        VAR_6);
    return;
   }
   if (FUNC_8(VAR_5, VAR_13) != 0) {
    (void) FUNC_3(VAR_1,
        "%s: zfs found %s, but zcp found %s\n",
        FUNC_10(VAR_3),
        VAR_5, VAR_13);
   }
  }
 } else {
  (void) FUNC_3(VAR_1,
      "zcp check failed, channel program error: %u\n", VAR_6);
 }
 FUNC_5(VAR_11);
 FUNC_5(VAR_9);
}
