
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_io_file_del_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int **,char const**,char const*,char const*,char const*,int ,int *,int *) ;
 int FUNC_2 (char const*,char const**,char const**,int *) ;

svn_error_t *
FUNC_3(apr_file_t **VAR_0,
                         const char **VAR_1,
                         const char *VAR_2,
                         const char *VAR_3,
                         svn_io_file_del_t VAR_4,
                         apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;

  FUNC_2(VAR_2, &VAR_6, &VAR_7, VAR_5);
  return FUNC_0(FUNC_1(VAR_0, VAR_1,
                                                    VAR_6, VAR_7, VAR_3,
                                                    VAR_4,
                                                    VAR_5, VAR_5));
}
