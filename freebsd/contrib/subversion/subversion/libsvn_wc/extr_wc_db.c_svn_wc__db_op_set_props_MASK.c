
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int *,int ,int const*,int const*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc__db_t *VAR_1,
                        const char *VAR_2,
                        apr_hash_t *VAR_3,
                        svn_boolean_t VAR_4,
                        const svn_skel_t *VAR_5,
                        const svn_skel_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  svn_wc__db_wcroot_t *VAR_8;
  const char *VAR_9;

  FUNC_1(FUNC_5(VAR_2));

  FUNC_0(FUNC_6(&VAR_8, &VAR_9,
                              VAR_1, VAR_2, VAR_7, VAR_7));
  FUNC_3(VAR_8);

  FUNC_2(FUNC_4(VAR_8, VAR_9, VAR_3,
                                    VAR_4, VAR_5, VAR_6,
                                    VAR_7),
                      VAR_8);
  return VAR_0;
}
