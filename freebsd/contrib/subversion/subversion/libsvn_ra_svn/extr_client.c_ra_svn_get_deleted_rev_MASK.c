
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
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (TYPE_2__*,char const*,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,char*,int *) ;
 int FUNC_7 (int *,int *,char const*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_0,
                       const char *VAR_1,
                       svn_revnum_t VAR_2,
                       svn_revnum_t VAR_3,
                       svn_revnum_t *VAR_4,
                       apr_pool_t *VAR_5)

{
  svn_ra_svn__session_baton_t *VAR_6 = VAR_0->priv;
  svn_ra_svn_conn_t *VAR_7 = VAR_6->conn;

  VAR_1 = FUNC_4(VAR_0, VAR_1, VAR_5);


  FUNC_1(FUNC_7(VAR_7, VAR_5, VAR_1,
                                               VAR_2, VAR_3));


  FUNC_1(FUNC_3(FUNC_2(VAR_6, VAR_5),
                                 FUNC_0("'get-deleted-rev' not implemented")));

  return FUNC_5(FUNC_6(VAR_7, VAR_5, "r",
                                                       VAR_4));
}
