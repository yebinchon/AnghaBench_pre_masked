
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct compat2_baton {int baton; int * (* validator ) (int ,char const*,char const*,int ,int *) ;} ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ,char const*,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                  const char *VAR_1,
                  const char *VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4)
{
  struct compat2_baton *VAR_5 = VAR_0;

  return VAR_5->validator(VAR_5->baton, VAR_1,
                       (VAR_3 ? VAR_3 : VAR_2), (VAR_3 != ((void*)0)),
                       VAR_4);
}
