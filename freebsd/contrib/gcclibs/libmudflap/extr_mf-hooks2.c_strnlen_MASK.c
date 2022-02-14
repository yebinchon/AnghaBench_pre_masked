
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline size_t (FUNC_0) (const char* VAR_0, size_t VAR_1)
{
  const char *VAR_2;

  for (VAR_2 = VAR_0; VAR_1 && *VAR_2; ++VAR_2, --VAR_1)
    ;
  return (VAR_2 - VAR_0);
}
