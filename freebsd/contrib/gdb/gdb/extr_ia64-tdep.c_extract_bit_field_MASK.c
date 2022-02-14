
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long long
FUNC_0 (char *VAR_0, int VAR_1, int VAR_2)
{
  long long VAR_3 = 0LL;
  int VAR_4 = VAR_1 + VAR_2;
  int VAR_5 = VAR_1 / 8;
  int VAR_6 = VAR_4 / 8;
  unsigned char *VAR_7 = (unsigned char *) VAR_0;
  unsigned char VAR_8;
  int VAR_9;
  int VAR_10;

  VAR_8 = VAR_7[VAR_5];
  if (VAR_5 == VAR_6)
    VAR_8 = ((unsigned char) (VAR_8 << (8 - VAR_4 % 8))) >> (8 - VAR_4 % 8);
  VAR_3 = VAR_8 >> (VAR_1 % 8);
  VAR_9 = 8 - (VAR_1 % 8);

  for (VAR_10 = VAR_5+1; VAR_10 < VAR_6; VAR_10++)
    {
      VAR_3 |= ((long long) VAR_7[VAR_10]) << VAR_9;
      VAR_9 += 8;
    }

  if (VAR_5 < VAR_6 && (VAR_4 % 8 != 0))
    {
      VAR_8 = VAR_7[VAR_6];
      VAR_8 = ((unsigned char) (VAR_8 << (8 - VAR_4 % 8))) >> (8 - VAR_4 % 8);
      VAR_3 |= ((long long) VAR_8) << VAR_9;
    }

  return VAR_3;
}
