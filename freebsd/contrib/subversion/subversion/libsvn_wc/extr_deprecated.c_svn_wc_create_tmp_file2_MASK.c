
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_io_file_del_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **,char const**,char const*,int ,int *,int *) ;
 int * FUNC_6 (char const**,int *,char const*,int *,int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 int FUNC_8 (int *) ;

svn_error_t *
FUNC_9(apr_file_t **VAR_1,
                        const char **VAR_2,
                        const char *VAR_3,
                        svn_io_file_del_t VAR_4,
                        apr_pool_t *VAR_5)
{
  svn_wc_context_t *VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  svn_error_t *VAR_9;

  FUNC_1(VAR_1 || VAR_2);

  FUNC_0(FUNC_7(&VAR_6, ((void*)0) , VAR_5, VAR_5));

  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_5));
  VAR_9 = FUNC_6(&VAR_8, VAR_6, VAR_7, VAR_5, VAR_5);
  VAR_9 = FUNC_3(VAR_9, FUNC_8(VAR_6));
  if (VAR_9)
    return FUNC_4(VAR_9);

  FUNC_0(FUNC_5(VAR_1, VAR_2, VAR_8,
                                   VAR_4, VAR_5, VAR_5));

  return VAR_0;
}
