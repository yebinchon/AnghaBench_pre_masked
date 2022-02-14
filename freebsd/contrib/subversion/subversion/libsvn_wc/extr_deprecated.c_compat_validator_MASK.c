
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct compat_baton {int baton; int * (* validator ) (int ,char const*,char const*) ;} ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                 const char *VAR_2,
                 const char *VAR_3,
                 const char *VAR_4,
                 apr_pool_t *VAR_5)
{
  struct compat_baton *VAR_6 = VAR_1;

  if (VAR_2)
    return VAR_6->validator(VAR_6->baton, VAR_2, VAR_3);
  return VAR_0;
}
