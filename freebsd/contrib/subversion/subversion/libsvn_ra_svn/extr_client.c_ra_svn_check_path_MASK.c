
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_6__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 char* FUNC_2 (TYPE_2__*,char const*,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *,char*,char const**) ;
 int FUNC_5 (int *,int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *FUNC_6(svn_ra_session_t *VAR_1,
                                      const char *VAR_2, svn_revnum_t VAR_3,
                                      svn_node_kind_t *VAR_4, apr_pool_t *VAR_5)
{
  svn_ra_svn__session_baton_t *VAR_6 = VAR_1->priv;
  svn_ra_svn_conn_t *VAR_7 = VAR_6->conn;
  const char *VAR_8;

  VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_5);
  FUNC_0(FUNC_5(VAR_7, VAR_5, VAR_2, VAR_3));
  FUNC_0(FUNC_1(VAR_6, VAR_5));
  FUNC_0(FUNC_4(VAR_7, VAR_5, "w", &VAR_8));
  *VAR_4 = FUNC_3(VAR_8);
  return VAR_0;
}
