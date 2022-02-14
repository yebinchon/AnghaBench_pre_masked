
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 char const* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_5(svn_skel_t **VAR_3,
                            svn_wc__db_t *VAR_4,
                            const char *VAR_5,
                            const char *VAR_6,
                            svn_boolean_t VAR_7,
                            apr_pool_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  const char *VAR_10;
  *VAR_3 = FUNC_1(VAR_8);

  FUNC_0(FUNC_4(&VAR_10, VAR_4, VAR_5,
                                VAR_6, VAR_8, VAR_9));

  if (VAR_7)
    FUNC_2(VAR_2, *VAR_3, VAR_8);

  FUNC_3(VAR_10, *VAR_3, VAR_8);
  FUNC_3(VAR_0, *VAR_3, VAR_8);

  return VAR_1;
}
