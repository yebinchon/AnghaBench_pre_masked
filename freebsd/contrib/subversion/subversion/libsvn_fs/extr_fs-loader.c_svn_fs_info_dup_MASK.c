
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs_type; } ;
typedef TYPE_1__ svn_fs_info_placeholder_t ;
struct TYPE_6__ {void* (* info_fsap_dup ) (void const*,int *) ;} ;
typedef TYPE_2__ fs_library_vtable_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int *,TYPE_1__ const*,int) ;
 int FUNC_2 (TYPE_2__**,int ,int *) ;
 void* FUNC_3 (void const*,int *) ;

void *
FUNC_4(const void *VAR_0,
                apr_pool_t *VAR_1,
                apr_pool_t *VAR_2)
{
  const svn_fs_info_placeholder_t *VAR_3 = VAR_0;
  fs_library_vtable_t *VAR_4;

  FUNC_0(FUNC_2(&VAR_4, VAR_3->fs_type, VAR_2));

  if (VAR_4->info_fsap_dup)
    return VAR_4->info_fsap_dup(VAR_0, VAR_1);
  else
    return FUNC_1(VAR_1, VAR_3, sizeof(*VAR_3));
}
