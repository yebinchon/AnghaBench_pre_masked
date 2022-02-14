
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_4(char **VAR_1,
                        svn_wc_context_t *VAR_2,
                        const char *VAR_3,
                        apr_pool_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  const char *VAR_6;

  FUNC_0(FUNC_3(&VAR_6, VAR_2, VAR_3,
                             VAR_5, VAR_5));
  *VAR_1 = FUNC_1(VAR_6, ".svn/shelves", VAR_4);


  FUNC_0(FUNC_2(*VAR_1, VAR_5));

  return VAR_0;
}
