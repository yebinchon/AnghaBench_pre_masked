
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0 (const char *VAR_1,
    unsigned int *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
  unsigned int VAR_5;

  if (VAR_4 == 0)
    return 0;
  VAR_5 = *VAR_1++;
  while (*VAR_1 != '\0')
    VAR_5 = ((VAR_5 >> 27) | (VAR_5 << 5)) + *VAR_1++;
  VAR_5 *= VAR_0;
  *VAR_2 = (VAR_5 & (VAR_3 - 1)) | 1;
  return VAR_5 >> (32 - VAR_4);
}
