
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const svn_string_t **VAR_1,
                    const char *VAR_2,
                    apr_pool_t *VAR_3)
{
  svn_stringbuf_t *VAR_4;
  apr_pool_t *VAR_5 = FUNC_1(VAR_3);

  FUNC_0(FUNC_4(&VAR_4, VAR_2, VAR_5));
  *VAR_1 = FUNC_3(VAR_4, VAR_3);
  FUNC_2(VAR_5);
  return VAR_0;
}
