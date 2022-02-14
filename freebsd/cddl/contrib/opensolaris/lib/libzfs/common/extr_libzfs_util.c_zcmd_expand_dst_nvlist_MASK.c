
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_nvlist_dst; int zc_nvlist_dst_size; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int libzfs_handle_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

int
FUNC_2(libzfs_handle_t *VAR_0, zfs_cmd_t *VAR_1)
{
 FUNC_0((void *)(uintptr_t)VAR_1->zc_nvlist_dst);
 VAR_1->zc_nvlist_dst =
     (uint64_t)(uintptr_t)FUNC_1(VAR_0, VAR_1->zc_nvlist_dst_size);
 if (VAR_1->zc_nvlist_dst == 0)
  return (-1);

 return (0);
}
