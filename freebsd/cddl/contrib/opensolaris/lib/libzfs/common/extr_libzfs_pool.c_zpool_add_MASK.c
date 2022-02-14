
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_9__ {int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef int buf ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int *,int ,int ***,int *) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_2__*) ;
 int FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (int *,int,char*) ;

int
FUNC_12(zpool_handle_t *VAR_12, nvlist_t *VAR_13)
{
 zfs_cmd_t VAR_14 = { 0 };
 int VAR_15;
 libzfs_handle_t *VAR_16 = VAR_12->zpool_hdl;
 char VAR_17[1024];
 nvlist_t **VAR_18, **VAR_19;
 uint_t VAR_20, VAR_21;

 (void) FUNC_2(VAR_17, sizeof (VAR_17), FUNC_0(VAR_6,
     "cannot add to '%s'"), VAR_12->zpool_name);

 if (FUNC_10(VAR_12, VAR_10, ((void*)0)) <
     VAR_5 &&
     FUNC_1(VAR_13, VAR_9,
     &VAR_18, &VAR_20) == 0) {
  FUNC_7(VAR_16, FUNC_0(VAR_6, "pool must be "
      "upgraded to add hot spares"));
  return (FUNC_6(VAR_16, VAR_1, VAR_17));
 }

 if (FUNC_10(VAR_12, VAR_10, ((void*)0)) <
     VAR_4 &&
     FUNC_1(VAR_13, VAR_8,
     &VAR_19, &VAR_21) == 0) {
  FUNC_7(VAR_16, FUNC_0(VAR_6, "pool must be "
      "upgraded to add cache devices"));
  return (FUNC_6(VAR_16, VAR_1, VAR_17));
 }

 if (FUNC_5(VAR_16, &VAR_14, VAR_13) != 0)
  return (-1);
 (void) FUNC_3(VAR_14.zc_name, VAR_12->zpool_name, sizeof (VAR_14.zc_name));

 if (FUNC_8(VAR_16, VAR_7, &VAR_14) != 0) {
  switch (VAR_11) {
  case 133:






   FUNC_7(VAR_16, FUNC_0(VAR_6,
       "one or more vdevs refer to the same device"));
   (void) FUNC_6(VAR_16, VAR_0, VAR_17);
   break;

  case 131:
   FUNC_7(VAR_16, FUNC_0(VAR_6,
       "invalid config; a pool with removing/removed "
       "vdevs does not support adding raidz vdevs"));
   (void) FUNC_6(VAR_16, VAR_0, VAR_17);
   break;

  case 128:






   {
    char VAR_22[64];

    FUNC_9(VAR_3, VAR_22, sizeof (VAR_22));

    FUNC_7(VAR_16, FUNC_0(VAR_6,
        "device is less than the minimum "
        "size (%s)"), VAR_22);
   }
   (void) FUNC_6(VAR_16, VAR_0, VAR_17);
   break;

  case 129:
   FUNC_7(VAR_16, FUNC_0(VAR_6,
       "pool must be upgraded to add these vdevs"));
   (void) FUNC_6(VAR_16, VAR_1, VAR_17);
   break;

  case 132:
   FUNC_7(VAR_16, FUNC_0(VAR_6,
       "root pool can not have multiple vdevs"
       " or separate logs"));
   (void) FUNC_6(VAR_16, VAR_2, VAR_17);
   break;

  case 130:
   FUNC_7(VAR_16, FUNC_0(VAR_6,
       "cache device must be a disk or disk slice"));
   (void) FUNC_6(VAR_16, VAR_0, VAR_17);
   break;

  default:
   (void) FUNC_11(VAR_16, VAR_11, VAR_17);
  }

  VAR_15 = -1;
 } else {
  VAR_15 = 0;
 }

 FUNC_4(&VAR_14);

 return (VAR_15);
}
