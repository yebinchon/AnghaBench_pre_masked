
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_name; TYPE_3__* zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_9__ {int zc_obj; int zc_cookie; int zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int vdev_aux_t ;
typedef int uint64_t ;
typedef int msg ;
struct TYPE_10__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_3__*,int,char*) ;

int
FUNC_6(zpool_handle_t *VAR_5, uint64_t VAR_6, vdev_aux_t VAR_7)
{
 zfs_cmd_t VAR_8 = { 0 };
 char VAR_9[1024];
 libzfs_handle_t *VAR_10 = VAR_5->zpool_hdl;

 (void) FUNC_2(VAR_9, sizeof (VAR_9),
     FUNC_0(VAR_1, "cannot fault %llu"), VAR_6);

 (void) FUNC_3(VAR_8.zc_name, VAR_5->zpool_name, sizeof (VAR_8.zc_name));
 VAR_8.zc_guid = VAR_6;
 VAR_8.zc_cookie = VAR_2;
 VAR_8.zc_obj = VAR_7;

 if (FUNC_1(VAR_10->libzfs_fd, VAR_3, &VAR_8) == 0)
  return (0);

 switch (VAR_4) {
 case 128:




  return (FUNC_4(VAR_10, VAR_0, VAR_9));

 default:
  return (FUNC_5(VAR_10, VAR_4, VAR_9));
 }

}
