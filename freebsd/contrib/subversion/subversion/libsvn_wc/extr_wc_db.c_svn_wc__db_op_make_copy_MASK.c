
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,char const*,int ,int const*,int const*,int *) ;
 int FUNC_7 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_3,
                        const char *VAR_4,
                        const svn_skel_t *VAR_5,
                        const svn_skel_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  svn_wc__db_wcroot_t *VAR_8;
  const char *VAR_9;

  FUNC_1(FUNC_5(VAR_4));

  FUNC_0(FUNC_7(&VAR_8, &VAR_9, VAR_3,
                              VAR_4, VAR_7, VAR_7));
  FUNC_3(VAR_8);

  FUNC_2(
    FUNC_6(VAR_8, VAR_9, VAR_0,
                                     VAR_5, VAR_6,
                                     VAR_7),
    VAR_8);

  FUNC_0(FUNC_4(VAR_8, VAR_4,
                        VAR_2, VAR_7));

  return VAR_1;
}
