
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zpool_config_size; void* zpool_state; int * zpool_config; int * zpool_old_config; TYPE_3__* zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_14__ {int zc_cookie; int zc_nvlist_dst_size; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_2__*,int **) ;

int
FUNC_9(zpool_handle_t *VAR_10, boolean_t *VAR_11)
{
 zfs_cmd_t VAR_12 = { 0 };
 int VAR_13;
 nvlist_t *VAR_14;
 libzfs_handle_t *VAR_15 = VAR_10->zpool_hdl;

 *VAR_11 = VAR_0;
 (void) FUNC_3(VAR_12.zc_name, VAR_10->zpool_name);

 if (VAR_10->zpool_config_size == 0)
  VAR_10->zpool_config_size = 1 << 16;

 if (FUNC_5(VAR_15, &VAR_12, VAR_10->zpool_config_size) != 0)
  return (-1);

 for (;;) {
  if (FUNC_0(VAR_10->zpool_hdl->libzfs_fd, VAR_7,
      &VAR_12) == 0) {



   VAR_13 = VAR_12.zc_cookie;
   break;
  }

  if (VAR_9 == VAR_4) {
   if (FUNC_6(VAR_15, &VAR_12) != 0) {
    FUNC_7(&VAR_12);
    return (-1);
   }
  } else {
   FUNC_7(&VAR_12);
   if (VAR_9 == VAR_3 || VAR_9 == VAR_2)
    *VAR_11 = VAR_1;
   VAR_10->zpool_state = VAR_6;
   return (0);
  }
 }

 if (FUNC_8(VAR_15, &VAR_12, &VAR_14) != 0) {
  FUNC_7(&VAR_12);
  return (-1);
 }

 FUNC_7(&VAR_12);

 VAR_10->zpool_config_size = VAR_12.zc_nvlist_dst_size;

 if (VAR_10->zpool_config != ((void*)0)) {
  uint64_t VAR_16, VAR_17;

  FUNC_4(FUNC_2(VAR_10->zpool_config,
      VAR_8, &VAR_16) == 0);
  FUNC_4(FUNC_2(VAR_14,
      VAR_8, &VAR_17) == 0);

  FUNC_1(VAR_10->zpool_old_config);

  if (VAR_16 != VAR_17) {
   FUNC_1(VAR_10->zpool_config);
   VAR_10->zpool_old_config = ((void*)0);
  } else {
   VAR_10->zpool_old_config = VAR_10->zpool_config;
  }
 }

 VAR_10->zpool_config = VAR_14;
 if (VAR_13)
  VAR_10->zpool_state = VAR_6;
 else
  VAR_10->zpool_state = VAR_5;

 return (0);
}
