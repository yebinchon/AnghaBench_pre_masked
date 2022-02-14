
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
            svn_wc__db_wcroot_t *VAR_2,
            const char *VAR_3,
            apr_pool_t *VAR_4)
{
  const char *VAR_5;

  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3,
                      VAR_4, VAR_4));
  *VAR_1 = (VAR_5 != ((void*)0));
  return VAR_0;
}
