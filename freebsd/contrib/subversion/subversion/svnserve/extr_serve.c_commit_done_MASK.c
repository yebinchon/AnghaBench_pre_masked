
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int post_commit_err; int author; int date; int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct TYPE_5__ {int pool; int ** post_commit_err; int ** author; int ** date; int * new_rev; } ;
typedef TYPE_2__ commit_callback_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_1(const svn_commit_info_t *VAR_1,
                                void *VAR_2, apr_pool_t *VAR_3)
{
  commit_callback_baton_t *VAR_4 = VAR_2;

  *VAR_4->new_rev = VAR_1->revision;
  *VAR_4->date = VAR_1->date
    ? FUNC_0(VAR_4->pool, VAR_1->date): ((void*)0);
  *VAR_4->author = VAR_1->author
    ? FUNC_0(VAR_4->pool, VAR_1->author) : ((void*)0);
  *VAR_4->post_commit_err = VAR_1->post_commit_err
    ? FUNC_0(VAR_4->pool, VAR_1->post_commit_err) : ((void*)0);
  return VAR_0;
}
