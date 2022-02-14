
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_0,
                apr_pool_t *VAR_1)
{
  const char *VAR_2 = " kMGTPEZY";

  int VAR_3 = (VAR_0 >= 0) ? (1 << (VAR_0 % 10)) : 0;
  int VAR_4 = (VAR_0 >= 0) ? (VAR_0 / 10) : 0;

  char VAR_5 = (VAR_4 < FUNC_1(VAR_2))
                 ? VAR_2[VAR_4]
                 : '?';

  if (VAR_5 == ' ')
    return FUNC_0(VAR_1, "%d", VAR_3);

  return FUNC_0(VAR_1, "%d%c", VAR_3, VAR_5);
}
