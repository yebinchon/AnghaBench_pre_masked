
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int
FUNC_0 (const char *VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2 = VAR_1;
  unsigned int VAR_3 = 0;
  const unsigned char *VAR_4 = (const unsigned char *) VAR_0;

  do
    VAR_3 = VAR_3 * 67 + (*VAR_4++ - 113);
  while (--VAR_2);
  return VAR_3 + VAR_1;
}
