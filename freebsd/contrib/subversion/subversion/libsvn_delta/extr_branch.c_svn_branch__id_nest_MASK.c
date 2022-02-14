
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,...) ;

const char *
FUNC_1(const char *VAR_0,
                    int VAR_1,
                    apr_pool_t *VAR_2)
{
  if (!VAR_0)
    return FUNC_0(VAR_2, "B%d", VAR_1);

  return FUNC_0(VAR_2, "%s.%d", VAR_0, VAR_1);
}
