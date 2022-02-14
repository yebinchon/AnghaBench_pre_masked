
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int **,char const*,int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_3,
                      const char *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_config_t *VAR_6;
  *VAR_3 = FUNC_2(VAR_5);

  FUNC_0(FUNC_1(&VAR_6, VAR_4, VAR_1,
                              VAR_5));
  FUNC_3(*VAR_3, VAR_1, VAR_6);

  FUNC_0(FUNC_1(&VAR_6, VAR_4, VAR_0,
                              VAR_5));
  FUNC_3(*VAR_3, VAR_0, VAR_6);

  return VAR_2;
}
