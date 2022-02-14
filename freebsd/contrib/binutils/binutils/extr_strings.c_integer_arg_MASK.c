
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0)
{
  int VAR_1;
  int VAR_2 = 10;
  char *VAR_3 = VAR_0;
  int VAR_4;

  if (*VAR_3 != '0')
    VAR_2 = 10;
  else if (*++VAR_3 == 'x')
    {
      VAR_2 = 16;
      VAR_3++;
    }
  else
    VAR_2 = 8;

  VAR_1 = 0;
  while (((VAR_4 = *VAR_3++) >= '0' && VAR_4 <= '9')
  || (VAR_2 == 16 && (VAR_4 & ~40) >= 'A' && (VAR_4 & ~40) <= 'Z'))
    {
      VAR_1 *= VAR_2;
      if (VAR_4 >= '0' && VAR_4 <= '9')
 VAR_1 += VAR_4 - '0';
      else
 VAR_1 += (VAR_4 & ~40) - 'A';
    }

  if (VAR_4 == 'b')
    VAR_1 *= 512;
  else if (VAR_4 == 'B')
    VAR_1 *= 1024;
  else
    VAR_3--;

  if (*VAR_3)
    FUNC_1 (FUNC_0("invalid integer argument %s"), VAR_0);

  return VAR_1;
}
