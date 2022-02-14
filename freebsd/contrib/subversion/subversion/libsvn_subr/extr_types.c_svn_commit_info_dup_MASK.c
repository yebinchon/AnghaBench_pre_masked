
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * repos_root; int * post_commit_err; int revision; int * author; int * date; } ;
typedef TYPE_1__ svn_commit_info_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int *) ;

svn_commit_info_t *
FUNC_2(const svn_commit_info_t *VAR_0,
                    apr_pool_t *VAR_1)
{
  svn_commit_info_t *VAR_2
    = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->date = VAR_0->date
    ? FUNC_1(VAR_1, VAR_0->date) : ((void*)0);
  VAR_2->author = VAR_0->author
    ? FUNC_1(VAR_1, VAR_0->author) : ((void*)0);
  VAR_2->revision = VAR_0->revision;
  VAR_2->post_commit_err = VAR_0->post_commit_err
    ? FUNC_1(VAR_1, VAR_0->post_commit_err) : ((void*)0);
  VAR_2->repos_root = VAR_0->repos_root
    ? FUNC_1(VAR_1, VAR_0->repos_root) : ((void*)0);

  return VAR_2;
}
