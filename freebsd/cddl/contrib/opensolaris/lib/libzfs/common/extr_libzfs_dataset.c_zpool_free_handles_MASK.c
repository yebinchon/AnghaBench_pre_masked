
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* zpool_next; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_6__ {TYPE_1__* libzfs_pool_handles; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(libzfs_handle_t *VAR_0)
{
 zpool_handle_t *VAR_1, *VAR_2 = VAR_0->libzfs_pool_handles;

 while (VAR_2 != ((void*)0)) {
  VAR_1 = VAR_2->zpool_next;
  FUNC_0(VAR_2);
  VAR_2 = VAR_1;
 }
 VAR_0->libzfs_pool_handles = ((void*)0);
}
