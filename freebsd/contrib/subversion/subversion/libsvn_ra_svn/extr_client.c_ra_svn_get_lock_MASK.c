
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_6__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int **) ;
 char* FUNC_5 (TYPE_2__*,char const*,int *) ;
 int FUNC_6 (int *,int *,char*,int **) ;
 int FUNC_7 (int *,int *,char const*) ;

__attribute__((used)) static svn_error_t *FUNC_8(svn_ra_session_t *VAR_1,
                                    svn_lock_t **VAR_2,
                                    const char *VAR_3,
                                    apr_pool_t *VAR_4)
{
  svn_ra_svn__session_baton_t *VAR_5 = VAR_1->priv;
  svn_ra_svn_conn_t* VAR_6 = VAR_5->conn;
  svn_ra_svn__list_t *VAR_7;

  VAR_3 = FUNC_5(VAR_1, VAR_3, VAR_4);
  FUNC_1(FUNC_7(VAR_6, VAR_4, VAR_3));


  FUNC_1(FUNC_3(FUNC_2(VAR_5, VAR_4),
                                 FUNC_0("Server doesn't support the get-lock "
                                    "command")));

  FUNC_1(FUNC_6(VAR_6, VAR_4, "(?l)", &VAR_7));
  if (VAR_7)
    FUNC_1(FUNC_4(VAR_7, VAR_4, VAR_2));
  else
    *VAR_2 = ((void*)0);

  return VAR_0;
}
