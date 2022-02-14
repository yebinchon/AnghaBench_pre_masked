
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int **,char const*,int *) ;

__attribute__((used)) static svn_stringbuf_t *
FUNC_2(const char *VAR_0, apr_pool_t *VAR_1)
{
  svn_error_t *VAR_2;
  svn_stringbuf_t *VAR_3;

  VAR_2 = FUNC_1(&VAR_3, VAR_0, VAR_1);
  if (VAR_2)
    {
      FUNC_0(VAR_2);
      return ((void*)0);
    }

  return VAR_3;
}
