
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; int * vtable; int * pool; int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct TYPE_7__ {scalar_t__ node_cache_idx; int node_cache; } ;
typedef TYPE_2__ base_root_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static svn_fs_root_t *
FUNC_3(svn_fs_t *VAR_1,
          apr_pool_t *VAR_2)
{
  svn_fs_root_t *VAR_3 = FUNC_2(VAR_2, sizeof(*VAR_3));
  base_root_data_t *VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4));

  VAR_3->fs = VAR_1;
  VAR_3->pool = VAR_2;


  VAR_4->node_cache = FUNC_0(VAR_2);
  VAR_4->node_cache_idx = 0;
  VAR_3->vtable = &VAR_0;
  VAR_3->fsap_data = VAR_4;

  return VAR_3;
}
