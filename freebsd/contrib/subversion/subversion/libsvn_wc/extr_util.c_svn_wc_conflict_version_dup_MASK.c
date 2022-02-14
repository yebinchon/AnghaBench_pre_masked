
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* repos_uuid; void* path_in_repos; void* repos_url; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;

svn_wc_conflict_version_t *
FUNC_2(const svn_wc_conflict_version_t *VAR_0,
                            apr_pool_t *VAR_1)
{

  svn_wc_conflict_version_t *VAR_2;

  if (VAR_0 == ((void*)0))
    return ((void*)0);

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));


  *VAR_2 = *VAR_0;

  if (VAR_0->repos_url)
    VAR_2->repos_url = FUNC_1(VAR_1, VAR_0->repos_url);

  if (VAR_0->path_in_repos)
    VAR_2->path_in_repos = FUNC_1(VAR_1,
                                             VAR_0->path_in_repos);

  if (VAR_0->repos_uuid)
    VAR_2->repos_uuid = FUNC_1(VAR_1, VAR_0->repos_uuid);

  return VAR_2;
}
