
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int subcommand_baton_t ;
struct TYPE_4__ {int extra_to_session; int to_root; int * sb; int * to_session; int * from_session; } ;
typedef TYPE_1__ replay_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(replay_baton_t **VAR_1,
                  svn_ra_session_t *VAR_2,
                  svn_ra_session_t *VAR_3,
                  subcommand_baton_t *VAR_4, apr_pool_t *VAR_5)
{
  replay_baton_t *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  VAR_6->from_session = VAR_2;
  VAR_6->to_session = VAR_3;
  VAR_6->sb = VAR_4;

  FUNC_0(FUNC_3(VAR_3, &VAR_6->to_root, VAR_5));






  *VAR_1 = VAR_6;
  return VAR_0;
}
