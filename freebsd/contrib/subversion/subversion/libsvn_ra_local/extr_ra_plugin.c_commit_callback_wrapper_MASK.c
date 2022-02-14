
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int repos_root; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct ccw_baton {int original_baton; int (* original_callback ) (TYPE_1__*,int ,int *) ;int session; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const svn_commit_info_t *VAR_0,
                        void *VAR_1,
                        apr_pool_t *VAR_2)
{
  struct ccw_baton *VAR_3 = VAR_1;
  svn_commit_info_t *VAR_4 = FUNC_2(VAR_0, VAR_2);

  FUNC_0(FUNC_4(VAR_3->session, &VAR_4->repos_root,
                                       VAR_2));

  return FUNC_3(VAR_3->original_callback(VAR_4, VAR_3->original_baton,
                                                 VAR_2));
}
