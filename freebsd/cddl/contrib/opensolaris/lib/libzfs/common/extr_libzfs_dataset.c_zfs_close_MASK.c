
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zfs_recvd_props; int zfs_user_props; int zfs_props; struct TYPE_4__* zfs_mntopts; } ;
typedef TYPE_1__ zfs_handle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(zfs_handle_t *VAR_0)
{
 if (VAR_0->zfs_mntopts)
  FUNC_0(VAR_0->zfs_mntopts);
 FUNC_1(VAR_0->zfs_props);
 FUNC_1(VAR_0->zfs_user_props);
 FUNC_1(VAR_0->zfs_recvd_props);
 FUNC_0(VAR_0);
}
