
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
 unsigned long VAR_2 ;
 int VAR_3 ;

long
FUNC_4(const char *VAR_4, char **VAR_5, register int VAR_6)
{
 register const char *VAR_7 = VAR_4;
 register unsigned long VAR_8;
 register int VAR_9;
 register unsigned long VAR_10;
 register int VAR_11 = 0, VAR_12, VAR_13;






 do {
  VAR_9 = *VAR_7++;
 } while (FUNC_2(VAR_9));
 if (VAR_9 == '-') {
  VAR_11 = 1;
  VAR_9 = *VAR_7++;
 } else if (VAR_9 == '+')
  VAR_9 = *VAR_7++;
 if ((VAR_6 == 0 || VAR_6 == 16) &&
     VAR_9 == '0' && (*VAR_7 == 'x' || *VAR_7 == 'X')) {
  VAR_9 = VAR_7[1];
  VAR_7 += 2;
  VAR_6 = 16;
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_9 == '0' ? 8 : 10;
 VAR_10 = VAR_11 ? -(unsigned long)VAR_2 : VAR_1;
 VAR_13 = VAR_10 % (unsigned long)VAR_6;
 VAR_10 /= (unsigned long)VAR_6;
 for (VAR_8 = 0, VAR_12 = 0;; VAR_9 = *VAR_7++) {
  if (FUNC_1(VAR_9))
   VAR_9 -= '0';
  else if (FUNC_0(VAR_9))
   VAR_9 -= FUNC_3(VAR_9) ? 'A' - 10 : 'a' - 10;
  else
   break;
  if (VAR_9 >= VAR_6)
   break;
  if (VAR_12 < 0 || VAR_8 > VAR_10 || (VAR_8 == VAR_10 && VAR_9 > VAR_13))
   VAR_12 = -1;
  else {
   VAR_12 = 1;
   VAR_8 *= VAR_6;
   VAR_8 += VAR_9;
  }
 }
 if (VAR_12 < 0) {
  VAR_8 = VAR_11 ? VAR_2 : VAR_1;
  VAR_3 = VAR_0;
 } else if (VAR_11)
  VAR_8 = -VAR_8;
 if (VAR_5 != 0)
  *VAR_5 = (char *) (VAR_12 ? VAR_7 - 1 : VAR_4);
 return (VAR_8);
}
