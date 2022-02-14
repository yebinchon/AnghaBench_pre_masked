
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_0)
{
  if (FUNC_0 (VAR_0, ".text") == 0)
    return "P";
  if (FUNC_0 (VAR_0, ".data") == 0)
    return "D";
  if (FUNC_0 (VAR_0, ".bss") == 0)
    return "B";
  return VAR_0;
}
