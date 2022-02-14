
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const**,char**,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_revnum_t *VAR_2,
            char **VAR_3,
            const char *VAR_4,
            apr_pool_t *VAR_5)
{
  const char *VAR_6;

  FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_4));

  if (VAR_6)
    *VAR_2 = FUNC_1(VAR_6);
  else
    *VAR_2 = VAR_0;

  return VAR_1;
}
