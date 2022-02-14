
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static inline void
FUNC_1 (const char *VAR_0)
{
  const char *VAR_1 = VAR_0;
  char VAR_2;
  while ((VAR_2 = *VAR_1++))
    if (VAR_2 == '%' && (*VAR_1 == '{' || *VAR_1 == '<' || (*VAR_1 == 'W' && *++VAR_1 == '{')))

      VAR_1 = FUNC_0 (VAR_1 + 1);
}
