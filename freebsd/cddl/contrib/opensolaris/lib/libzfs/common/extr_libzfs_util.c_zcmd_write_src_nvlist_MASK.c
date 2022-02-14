
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_nvlist_src_size; int zc_nvlist_src; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int FUNC_0 (int *,int *,int *,int *) ;

int
FUNC_1(libzfs_handle_t *VAR_0, zfs_cmd_t *VAR_1, nvlist_t *VAR_2)
{
 return (FUNC_0(VAR_0, &VAR_1->zc_nvlist_src,
     &VAR_1->zc_nvlist_src_size, VAR_2));
}
