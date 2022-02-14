
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* uuid; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
struct TYPE_6__ {TYPE_1__* conn; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *FUNC_0(svn_ra_session_t *VAR_1, const char **VAR_2,
                                    apr_pool_t *VAR_3)
{
  svn_ra_svn__session_baton_t *VAR_4 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_5 = VAR_4->conn;

  *VAR_2 = VAR_5->uuid;
  return VAR_0;
}
