
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int old_revision; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int svn_error_t ;
struct revision_baton {int rev; scalar_t__ skipped; } ;
struct parse_baton {int notify_pool; int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int ) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 struct revision_baton* FUNC_0 (int *,struct parse_baton*,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_4(void **VAR_2,
                             apr_hash_t *VAR_3,
                             void *VAR_4,
                             apr_pool_t *VAR_5)
{
  struct parse_baton *VAR_6 = VAR_4;
  struct revision_baton *VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_5);


  if (VAR_7->skipped && VAR_6->notify_func)
    {

      svn_repos_notify_t *VAR_8 = FUNC_3(
                                        VAR_1,
                                        VAR_6->notify_pool);

      VAR_8->old_revision = VAR_7->rev;
      VAR_6->notify_func(VAR_6->notify_baton, VAR_8, VAR_6->notify_pool);
      FUNC_2(VAR_6->notify_pool);
    }






  *VAR_2 = VAR_7;
  return VAR_0;
}
