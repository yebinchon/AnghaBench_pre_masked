
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* zpool_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_4__ {char const* zpool_name; } ;



const char *
FUNC_0(const zfs_handle_t *VAR_0)
{
 return (VAR_0->zpool_hdl->zpool_name);
}
