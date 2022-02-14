
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;

__attribute__((used)) static unsigned char *
FUNC_0 (unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3)
{
  unsigned char VAR_4;

  while (VAR_3-- > 0)
    {
      VAR_4 = *VAR_1++;

      *VAR_2++ = VAR_0[VAR_4 >> 4];
      *VAR_2++ = VAR_0[VAR_4 & 0xf];
    }

  *VAR_2 = 0;

  return VAR_2;
}
