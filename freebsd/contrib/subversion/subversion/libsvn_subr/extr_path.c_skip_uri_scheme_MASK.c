
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;



__attribute__((used)) static const char *
FUNC_0(const char *VAR_0)
{
  apr_size_t VAR_1;


  for (VAR_1 = 0; VAR_0[VAR_1] && VAR_0[VAR_1] != ':'; ++VAR_1)
    if (VAR_0[VAR_1] == '/')
      return ((void*)0);

  if (VAR_1 > 0 && VAR_0[VAR_1] == ':' && VAR_0[VAR_1+1] == '/' && VAR_0[VAR_1+2] == '/')
    return VAR_0 + VAR_1 + 3;

  return ((void*)0);
}
