
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const**,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0, apr_pool_t *VAR_1) {
  if (VAR_0)
    {
      const char *VAR_2;
      svn_error_t *VAR_3 = FUNC_1(&VAR_2, VAR_0, VAR_1);
      if (! VAR_3)
        return VAR_2;
      FUNC_0(VAR_3);
    }
  return ((void*)0);
}
