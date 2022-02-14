
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (char *VAR_0, long long VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = VAR_2 + VAR_3;
  int VAR_5 = VAR_2 / 8;
  int VAR_6 = VAR_4 / 8;
  unsigned char *VAR_7 = (unsigned char *) VAR_0;
  unsigned char VAR_8;

  if (VAR_5 == VAR_6)
    {
      unsigned char VAR_9, VAR_10;
      VAR_8 = VAR_7[VAR_5];
      VAR_9 = (VAR_8 >> (VAR_4 % 8)) << (VAR_4 % 8);
      VAR_10 = ((unsigned char) (VAR_8 << (8 - VAR_2 % 8))) >> (8 - VAR_2 % 8);
      VAR_8 = (unsigned char) (VAR_1 & 0xff);
      VAR_8 = (unsigned char) (VAR_8 << (VAR_2 % 8 + 8 - VAR_4 % 8)) >> (8 - VAR_4 % 8);
      VAR_8 |= VAR_10 | VAR_9;
      VAR_7[VAR_5] = VAR_8;
    }
  else
    {
      int VAR_11;
      VAR_8 = VAR_7[VAR_5];
      VAR_8 = ((unsigned char) (VAR_8 << (8 - VAR_2 % 8))) >> (8 - VAR_2 % 8);
      VAR_8 = VAR_8 | (VAR_1 << (VAR_2 % 8));
      VAR_7[VAR_5] = VAR_8;
      VAR_1 >>= 8 - VAR_2 % 8;

      for (VAR_11 = VAR_5+1; VAR_11 < VAR_6; VAR_11++)
 {
   VAR_8 = VAR_1 & 0xff;
   VAR_1 >>= 8;
   VAR_7[VAR_11] = VAR_8;
 }

      if (VAR_4 % 8 != 0)
 {
   unsigned char VAR_12 = (unsigned char) VAR_1;
   VAR_8 = VAR_7[VAR_6];
   VAR_8 = VAR_8 >> (VAR_4 % 8) << (VAR_4 % 8);
   VAR_8 |= ((unsigned char) (VAR_12 << (8 - VAR_4 % 8))) >> (8 - VAR_4 % 8);
   VAR_7[VAR_6] = VAR_8;
 }
    }
}
