
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_5__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *,char*,int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_4(svn_ra_session_t *VAR_1,
                                         svn_revnum_t *VAR_2, apr_time_t VAR_3,
                                         apr_pool_t *VAR_4)
{
  svn_ra_svn__session_baton_t *VAR_5 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_6 = VAR_5->conn;

  FUNC_0(FUNC_3(VAR_6, VAR_4, VAR_3));
  FUNC_0(FUNC_1(VAR_5, VAR_4));
  FUNC_0(FUNC_2(VAR_6, VAR_4, "r", VAR_2));
  return VAR_0;
}
