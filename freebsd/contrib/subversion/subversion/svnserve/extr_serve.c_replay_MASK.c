
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int server_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_2 (int *,char*,int *,int *,int *) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_svn_conn_t *VAR_1,
       apr_pool_t *VAR_2,
       svn_ra_svn__list_t *VAR_3,
       void *VAR_4)
{
  svn_revnum_t VAR_5, VAR_6;
  svn_boolean_t VAR_7;
  server_baton_t *VAR_8 = VAR_4;

  FUNC_0(FUNC_2(VAR_3, "rrb", &VAR_5, &VAR_6,
                                 &VAR_7));

  FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_8));

  FUNC_0(FUNC_1(VAR_1, VAR_8, VAR_5, VAR_6,
                              VAR_7, VAR_2));

  FUNC_0(FUNC_3(VAR_1, VAR_2, ""));

  return VAR_0;
}
