
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;

__attribute__((used)) static unsigned short
FUNC_0 (unsigned char *VAR_1, int VAR_2)
{
  unsigned short VAR_3 = 0;

  while (VAR_2-- > 0)
    VAR_3 = (VAR_3 << 8) ^ VAR_0[(VAR_3 >> 8) ^ *VAR_1++];

  return VAR_3;
}
