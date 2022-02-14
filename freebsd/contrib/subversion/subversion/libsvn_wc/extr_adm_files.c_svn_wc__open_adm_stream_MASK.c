
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,char const*,int *,int *) ;
 char* FUNC_4 (char const*,char const*,int *) ;

svn_error_t *
FUNC_5(svn_stream_t **VAR_0,
                        const char *VAR_1,
                        const char *VAR_2,
                        apr_pool_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  const char *VAR_5;

  FUNC_0(FUNC_1(VAR_1));

  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);
  return FUNC_2(FUNC_3(VAR_0, VAR_5,
                                                  VAR_3, VAR_4));
}
