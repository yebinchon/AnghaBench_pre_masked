
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
struct TYPE_8__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int **,int *,TYPE_2__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int *) ;
 char* FUNC_4 (TYPE_2__*,char const*,int *) ;
 int * FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *,int *,char*,int **) ;
 int FUNC_7 (int *,int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_3,
                           apr_array_header_t **VAR_4,
                           const char *VAR_5,
                           svn_revnum_t VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  svn_ra_svn__session_baton_t *VAR_9 = VAR_3->priv;
  svn_ra_svn_conn_t *VAR_10 = VAR_9->conn;
  svn_ra_svn__list_t *VAR_11;
  svn_boolean_t VAR_12;

  VAR_5 = FUNC_4(VAR_3, VAR_5, VAR_8);
  FUNC_0(FUNC_3(VAR_3, &VAR_12,
                                VAR_2,
                                VAR_8));



  if (!VAR_12)
    return FUNC_5(VAR_0, ((void*)0), ((void*)0));

  FUNC_0(FUNC_7(VAR_10, VAR_8,
                                           VAR_5, VAR_6));
  FUNC_0(FUNC_1(VAR_9, VAR_8));
  FUNC_0(FUNC_6(VAR_10, VAR_8, "l", &VAR_11));
  FUNC_0(FUNC_2(VAR_4, VAR_11, VAR_3, VAR_7,
                          VAR_8));

  return VAR_1;
}
