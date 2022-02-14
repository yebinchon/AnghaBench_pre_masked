
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zpool_name; TYPE_3__* zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_8__ {int zc_obj; int zc_cookie; int zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int vdev_aux_t ;
typedef int uint64_t ;
typedef int msg ;
struct TYPE_9__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;

int
FUNC_5(zpool_handle_t *VAR_4, uint64_t VAR_5, vdev_aux_t VAR_6)
{
 zfs_cmd_t VAR_7 = { 0 };
 char VAR_8[1024];
 libzfs_handle_t *VAR_9 = VAR_4->zpool_hdl;

 (void) FUNC_2(VAR_8, sizeof (VAR_8),
     FUNC_0(VAR_0, "cannot degrade %llu"), VAR_5);

 (void) FUNC_3(VAR_7.zc_name, VAR_4->zpool_name, sizeof (VAR_7.zc_name));
 VAR_7.zc_guid = VAR_5;
 VAR_7.zc_cookie = VAR_1;
 VAR_7.zc_obj = VAR_6;

 if (FUNC_1(VAR_9->libzfs_fd, VAR_2, &VAR_7) == 0)
  return (0);

 return (FUNC_4(VAR_9, VAR_3, VAR_8));
}
