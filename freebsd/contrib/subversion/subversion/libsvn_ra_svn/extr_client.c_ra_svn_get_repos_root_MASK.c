
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* repos_root; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
struct TYPE_6__ {TYPE_1__* conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_ra_session_t *VAR_2, const char **VAR_3,
                                          apr_pool_t *VAR_4)
{
  svn_ra_svn__session_baton_t *VAR_5 = VAR_2->priv;
  svn_ra_svn_conn_t *VAR_6 = VAR_5->conn;

  if (!VAR_6->repos_root)
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Server did not send repository root"));
  *VAR_3 = VAR_6->repos_root;
  return VAR_1;
}
