
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int **,char const*,int *) ;

svn_error_t *
FUNC_3(svn_stringbuf_t **VAR_1,
                        const char *VAR_2,
                        apr_pool_t *VAR_3)
{
  if (VAR_2[0] == '-' && VAR_2[1] == '\0')
    return FUNC_1
        (VAR_0, ((void*)0),
         FUNC_0("Reading from stdin is disallowed"));
  return FUNC_2(VAR_1, VAR_2, VAR_3);
}
