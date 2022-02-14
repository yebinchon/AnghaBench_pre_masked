
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0 (const char *VAR_0)
{
  const unsigned char *VAR_1 = (const unsigned char *) VAR_0;
  unsigned long VAR_2 = 5381;
  unsigned char VAR_3;

  while ((VAR_3 = *VAR_1++) != '\0')
    VAR_2 = (VAR_2 << 5) + VAR_2 + VAR_3;
  return VAR_2 & 0xffffffff;
}
