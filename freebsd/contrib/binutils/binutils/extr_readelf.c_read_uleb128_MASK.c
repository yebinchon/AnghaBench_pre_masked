
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0 (unsigned char *VAR_0, unsigned int *VAR_1)
{
  unsigned char VAR_2;
  unsigned int VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_3 = 0;
  VAR_4 = 0;
  VAR_5 = 0;
  do
    {
      VAR_2 = *(VAR_0++);
      VAR_5++;
      VAR_3 |= ((unsigned int)VAR_2 & 0x7f) << VAR_4;
      VAR_4 += 7;
    }
  while (VAR_2 & 0x80);

  *VAR_1 = VAR_5;
  return VAR_3;
}
