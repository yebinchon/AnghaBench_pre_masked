
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev2_edit_baton {int base_relpath; int repos_root; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 char const* FUNC_1 (int ,char const*,int *) ;
 char const* FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_3(struct ev2_edit_baton *VAR_0,
                     const char *VAR_1,
                     apr_pool_t *VAR_2)
{
  if (FUNC_0(VAR_1))
    {
      return FUNC_2(VAR_0->repos_root, VAR_1, VAR_2);
    }
  else
    {
      return FUNC_1(VAR_0->base_relpath,
                              VAR_1[0] == '/'
                                    ? VAR_1 + 1 : VAR_1,
                              VAR_2);
    }
}
