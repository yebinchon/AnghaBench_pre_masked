
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int item_count; struct TYPE_5__ const* items; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,TYPE_1__ const*,int) ;

svn_fs_x__p2l_entry_t *
FUNC_1(const svn_fs_x__p2l_entry_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_fs_x__p2l_entry_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                                 sizeof(*VAR_2));
  if (VAR_2->item_count)
    VAR_2->items = FUNC_0(VAR_1,
                                   VAR_0->items,
                                   VAR_0->item_count * sizeof(*VAR_0->items));

  return VAR_2;
}
