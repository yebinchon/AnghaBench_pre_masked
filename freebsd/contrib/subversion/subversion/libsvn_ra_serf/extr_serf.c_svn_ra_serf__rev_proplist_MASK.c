
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int ,int **,int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_1,
                          svn_revnum_t VAR_2,
                          apr_hash_t **VAR_3,
                          apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_2(VAR_4);
  svn_error_t *VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3,
                           VAR_4, VAR_5);

  FUNC_3(VAR_5);
  return FUNC_1(VAR_6);
}
