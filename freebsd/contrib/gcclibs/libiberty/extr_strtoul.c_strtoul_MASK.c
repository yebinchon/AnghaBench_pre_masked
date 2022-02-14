
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long VAR_1 ;
 int VAR_2 ;

unsigned long
FUNC_4(const char *VAR_3, char **VAR_4, register int VAR_5)
{
 register const char *VAR_6 = VAR_3;
 register unsigned long VAR_7;
 register int VAR_8;
 register unsigned long VAR_9;
 register int VAR_10 = 0, VAR_11, VAR_12;




 do {
  VAR_8 = *VAR_6++;
 } while (FUNC_2(VAR_8));
 if (VAR_8 == '-') {
  VAR_10 = 1;
  VAR_8 = *VAR_6++;
 } else if (VAR_8 == '+')
  VAR_8 = *VAR_6++;
 if ((VAR_5 == 0 || VAR_5 == 16) &&
     VAR_8 == '0' && (*VAR_6 == 'x' || *VAR_6 == 'X')) {
  VAR_8 = VAR_6[1];
  VAR_6 += 2;
  VAR_5 = 16;
 }
 if (VAR_5 == 0)
  VAR_5 = VAR_8 == '0' ? 8 : 10;
 VAR_9 = (unsigned long)VAR_1 / (unsigned long)VAR_5;
 VAR_12 = (unsigned long)VAR_1 % (unsigned long)VAR_5;
 for (VAR_7 = 0, VAR_11 = 0;; VAR_8 = *VAR_6++) {
  if (FUNC_1(VAR_8))
   VAR_8 -= '0';
  else if (FUNC_0(VAR_8))
   VAR_8 -= FUNC_3(VAR_8) ? 'A' - 10 : 'a' - 10;
  else
   break;
  if (VAR_8 >= VAR_5)
   break;
  if (VAR_11 < 0 || VAR_7 > VAR_9 || (VAR_7 == VAR_9 && VAR_8 > VAR_12))
   VAR_11 = -1;
  else {
   VAR_11 = 1;
   VAR_7 *= VAR_5;
   VAR_7 += VAR_8;
  }
 }
 if (VAR_11 < 0) {
  VAR_7 = VAR_1;
  VAR_2 = VAR_0;
 } else if (VAR_10)
  VAR_7 = -VAR_7;
 if (VAR_4 != 0)
  *VAR_4 = (char *) (VAR_11 ? VAR_6 - 1 : VAR_3);
 return (VAR_7);
}
