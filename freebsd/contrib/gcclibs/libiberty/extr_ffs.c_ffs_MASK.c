
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0 (register int VAR_0)
{
  register int VAR_1;

  if (VAR_0 == 0)
    return 0;

  for (VAR_1 = 1; !(VAR_0 & 1); VAR_1++)
   VAR_0 >>= 1;

  return VAR_1;
}
