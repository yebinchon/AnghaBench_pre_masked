
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef int LITTLENUM_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int
FUNC_0 (char *VAR_2, LITTLENUM_TYPE *VAR_3, int VAR_4)
{
  char *VAR_5 = VAR_2;
  valueT VAR_6 = 0;
  int VAR_7 = 0;
  unsigned VAR_8;


  while (VAR_4 > 1
  && VAR_3[VAR_4 - 1] == VAR_0
  && VAR_3[VAR_4 - 2] > VAR_0 / 2)
    VAR_4--;

  do
    {

      VAR_6 |= (*VAR_3 << VAR_7);
      VAR_7 += VAR_1;
      VAR_4--;
      VAR_3++;



      do
 {
   VAR_8 = VAR_6 & 0x7f;
   VAR_7 -= 7;
   VAR_6 >>= 7;
   if (VAR_4 > 0
       || VAR_6 != ((VAR_8 & 0x40) == 0 ? 0 : ((valueT) 1 << VAR_7) - 1))
     VAR_8 |= 0x80;

   if (VAR_5)
     *VAR_2 = VAR_8;
   VAR_2++;
 }
      while ((VAR_8 & 0x80) != 0 && VAR_7 >= 7);
    }
  while (VAR_4 > 0);


  if ((VAR_8 & 0x80) != 0)
    {

      if (VAR_6 & (1 << (VAR_7 - 1)))
 VAR_6 |= ~0 << VAR_7;
      if (VAR_5)
 *VAR_2 = VAR_6 & 0x7f;
      VAR_2++;
    }

  return VAR_2 - VAR_5;
}
