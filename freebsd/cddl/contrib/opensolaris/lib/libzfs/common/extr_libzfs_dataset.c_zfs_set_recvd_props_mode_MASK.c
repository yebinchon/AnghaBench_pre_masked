
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zfs_recvd_props; scalar_t__ zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;



__attribute__((used)) static void
FUNC_0(zfs_handle_t *VAR_0, uint64_t *VAR_1)
{
 *VAR_1 = (uint64_t)(uintptr_t)VAR_0->zfs_props;
 VAR_0->zfs_props = VAR_0->zfs_recvd_props;
}
