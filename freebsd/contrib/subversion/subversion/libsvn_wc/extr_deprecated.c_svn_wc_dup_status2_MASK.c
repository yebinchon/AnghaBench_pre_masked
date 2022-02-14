
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tree_conflict; void* ood_last_cmt_author; void* url; scalar_t__ repos_lock; scalar_t__ entry; } ;
typedef TYPE_1__ svn_wc_status2_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;

svn_wc_status2_t *
FUNC_5(const svn_wc_status2_t *VAR_0,
                   apr_pool_t *VAR_1)
{
  svn_wc_status2_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;


  if (VAR_0->entry)
    VAR_2->entry = FUNC_4(VAR_0->entry, VAR_1);

  if (VAR_0->repos_lock)
    VAR_2->repos_lock = FUNC_3(VAR_0->repos_lock, VAR_1);

  if (VAR_0->url)
    VAR_2->url = FUNC_1(VAR_1, VAR_0->url);

  if (VAR_0->ood_last_cmt_author)
    VAR_2->ood_last_cmt_author
      = FUNC_1(VAR_1, VAR_0->ood_last_cmt_author);

  if (VAR_0->tree_conflict)
    VAR_2->tree_conflict
      = FUNC_2(VAR_0->tree_conflict, VAR_1);


  return VAR_2;
}
