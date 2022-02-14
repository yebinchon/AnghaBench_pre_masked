
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*,int *,char const*,int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int*,int *,char const*,int *) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_hash_t **VAR_2,
             svn_wc__db_t *VAR_3,
             const char *VAR_4,
             apr_pool_t *VAR_5,
             apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  int VAR_9;

  FUNC_0(FUNC_5(&VAR_9, VAR_3, VAR_4,
                                     VAR_6));

  if (VAR_9 < VAR_1)
    return FUNC_4(FUNC_7(VAR_2,
                                                    VAR_4,
                                                    VAR_5,
                                                    VAR_6));

  FUNC_0(FUNC_6(&VAR_7, &VAR_8,
                                                VAR_3, VAR_4,
                                                VAR_6, VAR_6));
  FUNC_2(VAR_7);

  FUNC_1(FUNC_3(VAR_2,
                                       VAR_3, VAR_4,
                                       VAR_7, VAR_8,
                                       VAR_5, VAR_6),
                      VAR_7);

  return VAR_0;
}
