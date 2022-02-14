
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_name; TYPE_3__* zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_9__ {void* zc_history_offset; void* zc_history_len; void* zc_history; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef void* uint64_t ;
struct TYPE_10__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_6, char *VAR_7, uint64_t *VAR_8, uint64_t *VAR_9)
{
 zfs_cmd_t VAR_10 = { 0 };
 libzfs_handle_t *VAR_11 = VAR_6->zpool_hdl;

 (void) FUNC_2(VAR_10.zc_name, VAR_6->zpool_name, sizeof (VAR_10.zc_name));

 VAR_10.zc_history = (uint64_t)(uintptr_t)VAR_7;
 VAR_10.zc_history_len = *VAR_9;
 VAR_10.zc_history_offset = *VAR_8;

 if (FUNC_1(VAR_11->libzfs_fd, VAR_4, &VAR_10) != 0) {
  switch (VAR_5) {
  case 128:
   return (FUNC_3(VAR_11, VAR_2,
       FUNC_0(VAR_3,
       "cannot show history for pool '%s'"),
       VAR_6->zpool_name));
  case 130:
   return (FUNC_3(VAR_11, VAR_1,
       FUNC_0(VAR_3, "cannot get history for pool "
       "'%s'"), VAR_6->zpool_name));
  case 129:
   return (FUNC_3(VAR_11, VAR_0,
       FUNC_0(VAR_3, "cannot get history for pool "
       "'%s', pool must be upgraded"), VAR_6->zpool_name));
  default:
   return (FUNC_4(VAR_11, VAR_5,
       FUNC_0(VAR_3,
       "cannot get history for '%s'"), VAR_6->zpool_name));
  }
 }

 *VAR_9 = VAR_10.zc_history_len;
 *VAR_8 = VAR_10.zc_history_offset;

 return (0);
}
