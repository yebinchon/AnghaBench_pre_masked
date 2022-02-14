
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int **,char const**,int *,char const*,int *,int *) ;
 int FUNC_6 (int *,int **,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_7(apr_uint64_t *VAR_1,
                         svn_skel_t **VAR_2,
                         svn_wc__db_t *VAR_3,
                         const char *VAR_4,
                         apr_uint64_t VAR_5,
                         apr_pool_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  svn_wc__db_wcroot_t *VAR_8;
  const char *VAR_9;

  FUNC_1(VAR_1 != ((void*)0));
  FUNC_1(VAR_2 != ((void*)0));
  FUNC_1(FUNC_4(VAR_4));

  FUNC_0(FUNC_5(&VAR_8, &VAR_9, VAR_3,
                              VAR_4, VAR_7, VAR_7));
  FUNC_3(VAR_8);

  FUNC_2(
    FUNC_6(VAR_1, VAR_2,
                  VAR_8, VAR_9, VAR_5,
                  VAR_6, VAR_7),
    VAR_8);

  return VAR_0;
}
