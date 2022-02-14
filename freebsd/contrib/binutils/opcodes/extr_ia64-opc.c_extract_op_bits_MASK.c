
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0 (int VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  VAR_1 += (VAR_2 / 8);

  if (VAR_2 % 8)
    {
      unsigned int VAR_5 = VAR_0[VAR_1++];
      int VAR_6 = 8 - (VAR_2 % 8);
      int VAR_7 = (1 << VAR_6) - 1;
      int VAR_8 = (VAR_3 < VAR_6) ? VAR_3 : VAR_6;
      int VAR_9 = VAR_6 - VAR_8;

      VAR_4 = (VAR_4 << VAR_8) | ((VAR_5 & VAR_7) >> VAR_9);
      VAR_2 += VAR_8;
      VAR_3 -= VAR_8;
    }
  while (VAR_3 >= 8)
    {
      VAR_4 = (VAR_4 << 8) | (VAR_0[VAR_1++] & 255);
      VAR_3 -= 8;
    }
  if (VAR_3 > 0)
    {
      unsigned int VAR_10 = (VAR_0[VAR_1++] & 255);
      VAR_4 = (VAR_4 << VAR_3) | (VAR_10 >> (8 - VAR_3));
    }
  return VAR_4;
}
