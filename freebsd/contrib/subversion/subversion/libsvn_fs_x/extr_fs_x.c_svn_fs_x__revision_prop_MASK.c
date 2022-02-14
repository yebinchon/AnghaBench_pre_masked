
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int **,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int ,int *) ;

svn_error_t *
FUNC_5(svn_string_t **VAR_3,
                        svn_fs_t *VAR_4,
                        svn_revnum_t VAR_5,
                        const char *VAR_6,
                        svn_boolean_t VAR_7,
                        apr_pool_t *VAR_8,
                        apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;

  FUNC_0(FUNC_1(VAR_4, VAR_2));
  FUNC_0(FUNC_2(&VAR_10, VAR_4, VAR_5, VAR_0, VAR_7,
                                          VAR_9, VAR_9));

  *VAR_3 = FUNC_4(FUNC_3(VAR_10, VAR_6), VAR_8);

  return VAR_1;
}
