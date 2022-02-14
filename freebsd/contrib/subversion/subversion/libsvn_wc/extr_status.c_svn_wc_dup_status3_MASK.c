
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* moved_to_abspath; void* moved_from_abspath; void* repos_uuid; void* repos_relpath; void* repos_root_url; void* changelist; void* lock; void* ood_changed_author; void* changed_author; void* repos_lock; } ;
typedef TYPE_1__ svn_wc_status3_t ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;

svn_wc_status3_t *
FUNC_3(const svn_wc_status3_t *VAR_0,
                   apr_pool_t *VAR_1)
{

  svn_wc__internal_status_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  svn_wc_status3_t *VAR_3 = &VAR_2->s;


  *VAR_3 = *VAR_0;


  if (VAR_0->repos_lock)
    VAR_3->repos_lock = FUNC_2(VAR_0->repos_lock, VAR_1);

  if (VAR_0->changed_author)
    VAR_3->changed_author = FUNC_1(VAR_1, VAR_0->changed_author);

  if (VAR_0->ood_changed_author)
    VAR_3->ood_changed_author
      = FUNC_1(VAR_1, VAR_0->ood_changed_author);

  if (VAR_0->lock)
    VAR_3->lock = FUNC_2(VAR_0->lock, VAR_1);

  if (VAR_0->changelist)
    VAR_3->changelist
      = FUNC_1(VAR_1, VAR_0->changelist);

  if (VAR_0->repos_root_url)
    VAR_3->repos_root_url
      = FUNC_1(VAR_1, VAR_0->repos_root_url);

  if (VAR_0->repos_relpath)
    VAR_3->repos_relpath
      = FUNC_1(VAR_1, VAR_0->repos_relpath);

  if (VAR_0->repos_uuid)
    VAR_3->repos_uuid
      = FUNC_1(VAR_1, VAR_0->repos_uuid);

  if (VAR_0->moved_from_abspath)
    VAR_3->moved_from_abspath
      = FUNC_1(VAR_1, VAR_0->moved_from_abspath);

  if (VAR_0->moved_to_abspath)
    VAR_3->moved_to_abspath
      = FUNC_1(VAR_1, VAR_0->moved_to_abspath);


  return VAR_3;
}
