
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0 (char *VAR_2, int VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
  unsigned int VAR_7, VAR_8;
  int VAR_9, VAR_10;

  VAR_2 += VAR_3 / VAR_1;
  VAR_3 %= VAR_1;
  VAR_4 += VAR_5 / VAR_1;
  VAR_5 %= VAR_1;
  if (VAR_0)
    {
      VAR_7 = (unsigned char) *VAR_4;
      VAR_4 += 1;
      VAR_9 = VAR_1 - VAR_5;

      while (VAR_6 > 0)
 {
   int VAR_11;
   VAR_7 = (VAR_7 << VAR_1) + (unsigned char) *VAR_4;
   VAR_9 += VAR_1;
   VAR_4 += 1;
   VAR_10 = VAR_1 - VAR_3;
   if (VAR_10 > VAR_6)
     VAR_10 = VAR_6;
   VAR_11 = VAR_1 - (VAR_10 + VAR_3);
   VAR_8 = ((1 << VAR_10) - 1) << VAR_11;
   *VAR_2 =
     (*VAR_2 & ~VAR_8)
     | ((VAR_7 >> (VAR_9 - VAR_10 - VAR_11)) & VAR_8);
   VAR_6 -= VAR_10;
   VAR_9 -= VAR_10;
   VAR_2 += 1;
   VAR_3 = 0;
 }
    }
  else
    {
      VAR_7 = (unsigned char) *VAR_4 >> VAR_5;
      VAR_4 += 1;
      VAR_9 = VAR_1 - VAR_5;

      while (VAR_6 > 0)
 {
   VAR_7 = VAR_7 + ((unsigned char) *VAR_4 << VAR_9);
   VAR_9 += VAR_1;
   VAR_4 += 1;
   VAR_10 = VAR_1 - VAR_3;
   if (VAR_10 > VAR_6)
     VAR_10 = VAR_6;
   VAR_8 = ((1 << VAR_10) - 1) << VAR_3;
   *VAR_2 = (*VAR_2 & ~VAR_8) | ((VAR_7 << VAR_3) & VAR_8);
   VAR_6 -= VAR_10;
   VAR_9 -= VAR_10;
   VAR_7 >>= VAR_10;
   VAR_2 += 1;
   VAR_3 = 0;
 }
    }
}
