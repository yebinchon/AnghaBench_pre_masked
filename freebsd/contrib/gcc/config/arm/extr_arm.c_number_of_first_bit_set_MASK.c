
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) inline static int
FUNC_0 (unsigned VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0;
       (VAR_0 & (1 << VAR_1)) == 0;
       ++VAR_1)
    continue;

  return VAR_1;
}
