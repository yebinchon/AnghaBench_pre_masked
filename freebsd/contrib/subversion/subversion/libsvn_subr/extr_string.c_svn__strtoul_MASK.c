
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(const char* VAR_0, const char** VAR_1)
{
  unsigned long VAR_2 = 0;
  while (1)
    {
      unsigned long VAR_3 = (unsigned char)*VAR_0 - (unsigned char)'0';
      if (VAR_3 > 9)
        break;

      VAR_2 = VAR_2 * 10 + VAR_3;
      ++VAR_0;
    }

  *VAR_1 = VAR_0;
  return VAR_2;
}
