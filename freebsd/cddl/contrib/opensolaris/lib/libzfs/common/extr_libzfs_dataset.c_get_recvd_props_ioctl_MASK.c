
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * zfs_recvd_props; TYPE_3__* zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_14__ {int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int libzfs_fd; } ;
typedef TYPE_3__ libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int **) ;

__attribute__((used)) static int
FUNC_7(zfs_handle_t *VAR_3)
{
 libzfs_handle_t *VAR_4 = VAR_3->zfs_hdl;
 nvlist_t *VAR_5;
 zfs_cmd_t VAR_6 = { 0 };
 int VAR_7;

 if (FUNC_3(VAR_4, &VAR_6, 0) != 0)
  return (-1);

 (void) FUNC_2(VAR_6.zc_name, VAR_3->zfs_name, sizeof (VAR_6.zc_name));

 while (FUNC_0(VAR_4->libzfs_fd, VAR_1, &VAR_6) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_4(VAR_4, &VAR_6) != 0) {
    return (-1);
   }
  } else {
   FUNC_5(&VAR_6);
   return (-1);
  }
 }

 VAR_7 = FUNC_6(VAR_3->zfs_hdl, &VAR_6, &VAR_5);
 FUNC_5(&VAR_6);
 if (VAR_7 != 0)
  return (-1);

 FUNC_1(VAR_3->zfs_recvd_props);
 VAR_3->zfs_recvd_props = VAR_5;

 return (0);
}
