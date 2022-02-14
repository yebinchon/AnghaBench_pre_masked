
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

unsigned long
FUNC_4(const char *VAR_3, char **VAR_4, int VAR_5)
{
 const char *VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;




 VAR_6 = VAR_3;
 do {
  VAR_9 = (unsigned char) *VAR_6++;
 } while (FUNC_2(VAR_9));
 if (VAR_9 == '-') {
  VAR_10 = 1;
  VAR_9 = *VAR_6++;
 } else {
  VAR_10 = 0;
  if (VAR_9 == '+')
   VAR_9 = *VAR_6++;
 }
 if ((VAR_5 == 0 || VAR_5 == 16) &&
     VAR_9 == '0' && (*VAR_6 == 'x' || *VAR_6 == 'X')) {
  VAR_9 = VAR_6[1];
  VAR_6 += 2;
  VAR_5 = 16;
 }
 if (VAR_5 == 0)
  VAR_5 = VAR_9 == '0' ? 8 : 10;

 VAR_8 = VAR_1 / (unsigned long)VAR_5;
 VAR_12 = VAR_1 % (unsigned long)VAR_5;
 for (VAR_7 = 0, VAR_11 = 0;; VAR_9 = (unsigned char) *VAR_6++) {
  if (FUNC_1(VAR_9))
   VAR_9 -= '0';
  else if (FUNC_0(VAR_9))
   VAR_9 -= FUNC_3(VAR_9) ? 'A' - 10 : 'a' - 10;
  else
   break;
  if (VAR_9 >= VAR_5)
   break;
  if (VAR_11 < 0)
   continue;
  if (VAR_7 > VAR_8 || VAR_7 == VAR_8 && VAR_9 > VAR_12) {
   VAR_11 = -1;
   VAR_7 = VAR_1;
   VAR_2 = VAR_0;
  } else {
   VAR_11 = 1;
   VAR_7 *= (unsigned long)VAR_5;
   VAR_7 += VAR_9;
  }
 }
 if (VAR_10 && VAR_11 > 0)
  VAR_7 = -VAR_7;
 if (VAR_4 != 0)
  *VAR_4 = (char *) (VAR_11 ? VAR_6 - 1 : VAR_3);
 return (VAR_7);
}
