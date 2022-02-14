
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ valueT ;
typedef scalar_t__ LITTLENUM_TYPE ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (char *VAR_1, LITTLENUM_TYPE *VAR_2, int VAR_3)
{
  char *VAR_4 = VAR_1;
  valueT VAR_5 = 0;
  int VAR_6 = 0;
  unsigned VAR_7;



  while (VAR_3 > 0 && VAR_2[VAR_3 - 1] == 0)
    VAR_3--;

  do
    {
      if (VAR_6 < 7 && VAR_3 > 0)
 {
   VAR_5 |= (*VAR_2 << VAR_6);
   VAR_6 += 8 * VAR_0;
   VAR_3--;
   VAR_2++;
 }

      VAR_7 = VAR_5 & 0x7f;
      VAR_6 -= 7;
      VAR_5 >>= 7;

      if (VAR_3 > 0 || VAR_5)
 VAR_7 |= 0x80;

      if (VAR_4)
 *VAR_1 = VAR_7;
      VAR_1++;
    }
  while (VAR_7 & 0x80);

  return VAR_1 - VAR_4;
}
