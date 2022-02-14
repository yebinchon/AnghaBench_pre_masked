
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int **,int *,int,char const**) ;
 int * FUNC_2 (scalar_t__,int ) ;

svn_error_t *
FUNC_3(apr_getopt_t **VAR_1,
                         int VAR_2,
                         const char *VAR_3[],
                         apr_pool_t *VAR_4)
{
  apr_status_t VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
  if (VAR_5)
    return FUNC_2(VAR_5,
                              FUNC_0("Error initializing command line arguments"));
  return VAR_0;
}
