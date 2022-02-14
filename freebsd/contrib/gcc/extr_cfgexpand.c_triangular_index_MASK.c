
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0 (size_t VAR_0, size_t VAR_1)
{
  if (VAR_0 < VAR_1)
    {
      size_t VAR_2;
      VAR_2 = VAR_0, VAR_0 = VAR_1, VAR_1 = VAR_2;
    }
  return (VAR_0 * (VAR_0 + 1)) / 2 + VAR_1;
}
