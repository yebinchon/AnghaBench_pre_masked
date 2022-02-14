
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 char const* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *,int *) ;
 int FUNC_3 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_4(svn_skel_t **VAR_2,
                                 svn_wc__db_t *VAR_3,
                                 const char *VAR_4,
                                 apr_pool_t *VAR_5,
                                 apr_pool_t *VAR_6)
{
  const char *VAR_7;
  *VAR_2 = FUNC_1(VAR_5);

  FUNC_0(FUNC_3(&VAR_7, VAR_3, VAR_4,
                                VAR_4, VAR_5, VAR_6));

  FUNC_2(VAR_7, *VAR_2, VAR_5);
  FUNC_2(VAR_0, *VAR_2, VAR_5);

  return VAR_1;
}
