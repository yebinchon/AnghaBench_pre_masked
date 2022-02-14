
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static unsigned
FUNC_1 (unsigned VAR_0, int VAR_1, const char **VAR_2)
{
  if (VAR_2 != (const char **)((void*)0) && (VAR_1 & 3))
    *VAR_2 = FUNC_0("jump hint unaligned");
  return VAR_0 | ((VAR_1 / 4) & 0x1FFF);
}
