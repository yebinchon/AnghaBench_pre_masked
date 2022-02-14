
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wc_info; scalar_t__ lock; void* last_changed_author; void* repos_UUID; void* repos_root_URL; void* URL; } ;
typedef TYPE_1__ svn_client_info2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 void* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;

svn_client_info2_t *
FUNC_4(const svn_client_info2_t *VAR_0,
                     apr_pool_t *VAR_1)
{
  svn_client_info2_t *VAR_2 = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_2));

  if (VAR_2->URL)
    VAR_2->URL = FUNC_1(VAR_1, VAR_0->URL);
  if (VAR_2->repos_root_URL)
    VAR_2->repos_root_URL = FUNC_1(VAR_1, VAR_0->repos_root_URL);
  if (VAR_2->repos_UUID)
    VAR_2->repos_UUID = FUNC_1(VAR_1, VAR_0->repos_UUID);
  if (VAR_0->last_changed_author)
    VAR_2->last_changed_author = FUNC_1(VAR_1, VAR_0->last_changed_author);
  if (VAR_2->lock)
    VAR_2->lock = FUNC_2(VAR_0->lock, VAR_1);
  if (VAR_2->wc_info)
    VAR_2->wc_info = FUNC_3(VAR_0->wc_info, VAR_1);
  return VAR_2;
}
