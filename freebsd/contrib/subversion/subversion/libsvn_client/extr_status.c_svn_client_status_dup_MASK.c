
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_status3_t ;
struct TYPE_5__ {void* moved_to_abspath; void* moved_from_abspath; int * backwards_compatibility_baton; void* repos_lock; void* ood_changed_author; void* changelist; void* lock; void* changed_author; void* repos_relpath; void* repos_uuid; void* repos_root_url; void* local_abspath; } ;
typedef TYPE_1__ svn_client_status_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;
 int * FUNC_3 (int const*,int *) ;

svn_client_status_t *
FUNC_4(const svn_client_status_t *VAR_0,
                      apr_pool_t *VAR_1)
{
  svn_client_status_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  if (VAR_0->local_abspath)
    VAR_2->local_abspath = FUNC_1(VAR_1, VAR_0->local_abspath);

  if (VAR_0->repos_root_url)
    VAR_2->repos_root_url = FUNC_1(VAR_1, VAR_0->repos_root_url);

  if (VAR_0->repos_uuid)
    VAR_2->repos_uuid = FUNC_1(VAR_1, VAR_0->repos_uuid);

  if (VAR_0->repos_relpath)
    VAR_2->repos_relpath = FUNC_1(VAR_1, VAR_0->repos_relpath);

  if (VAR_0->changed_author)
    VAR_2->changed_author = FUNC_1(VAR_1, VAR_0->changed_author);

  if (VAR_0->lock)
    VAR_2->lock = FUNC_2(VAR_0->lock, VAR_1);

  if (VAR_0->changelist)
    VAR_2->changelist = FUNC_1(VAR_1, VAR_0->changelist);

  if (VAR_0->ood_changed_author)
    VAR_2->ood_changed_author = FUNC_1(VAR_1, VAR_0->ood_changed_author);

  if (VAR_0->repos_lock)
    VAR_2->repos_lock = FUNC_2(VAR_0->repos_lock, VAR_1);

  if (VAR_0->backwards_compatibility_baton)
    {
      const svn_wc_status3_t *VAR_3 = VAR_0->backwards_compatibility_baton;

      VAR_2->backwards_compatibility_baton = FUNC_3(VAR_3,
                                                             VAR_1);
    }

  if (VAR_0->moved_from_abspath)
    VAR_2->moved_from_abspath =
      FUNC_1(VAR_1, VAR_0->moved_from_abspath);

  if (VAR_0->moved_to_abspath)
    VAR_2->moved_to_abspath = FUNC_1(VAR_1, VAR_0->moved_to_abspath);

  return VAR_2;
}
