
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zfs_props; scalar_t__ zfs_recvd_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int boolean_t ;



__attribute__((used)) static boolean_t
FUNC_0(zfs_handle_t *VAR_0)
{
 return (VAR_0->zfs_props == VAR_0->zfs_recvd_props);
}
