
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

long long
FUNC_4(const char *VAR_4, char **VAR_5, int VAR_6)
{
 const char *VAR_7;
 long long VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;






 VAR_7 = VAR_4;
 do {
  VAR_10 = (unsigned char) *VAR_7++;
 } while (FUNC_2(VAR_10));
 if (VAR_10 == '-') {
  VAR_11 = 1;
  VAR_10 = *VAR_7++;
 } else {
  VAR_11 = 0;
  if (VAR_10 == '+')
   VAR_10 = *VAR_7++;
 }
 if ((VAR_6 == 0 || VAR_6 == 16) &&
     VAR_10 == '0' && (*VAR_7 == 'x' || *VAR_7 == 'X')) {
  VAR_10 = VAR_7[1];
  VAR_7 += 2;
  VAR_6 = 16;
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_10 == '0' ? 8 : 10;
 VAR_9 = VAR_11 ? VAR_2 : VAR_1;
 VAR_13 = VAR_9 % VAR_6;
 VAR_9 /= VAR_6;
 if (VAR_11) {
  if (VAR_13 > 0) {
   VAR_13 -= VAR_6;
   VAR_9 += 1;
  }
  VAR_13 = -VAR_13;
 }
 for (VAR_8 = 0, VAR_12 = 0;; VAR_10 = (unsigned char) *VAR_7++) {
  if (FUNC_1(VAR_10))
   VAR_10 -= '0';
  else if (FUNC_0(VAR_10))
   VAR_10 -= FUNC_3(VAR_10) ? 'A' - 10 : 'a' - 10;
  else
   break;
  if (VAR_10 >= VAR_6)
   break;
  if (VAR_12 < 0)
   continue;
  if (VAR_11) {
   if (VAR_8 < VAR_9 || (VAR_8 == VAR_9 && VAR_10 > VAR_13)) {
    VAR_12 = -1;
    VAR_8 = VAR_2;
    VAR_3 = VAR_0;
   } else {
    VAR_12 = 1;
    VAR_8 *= VAR_6;
    VAR_8 -= VAR_10;
   }
  } else {
   if (VAR_8 > VAR_9 || (VAR_8 == VAR_9 && VAR_10 > VAR_13)) {
    VAR_12 = -1;
    VAR_8 = VAR_1;
    VAR_3 = VAR_0;
   } else {
    VAR_12 = 1;
    VAR_8 *= VAR_6;
    VAR_8 += VAR_10;
   }
  }
 }
 if (VAR_5 != 0)
  *VAR_5 = (char *) (VAR_12 ? VAR_7 - 1 : VAR_4);
 return (VAR_8);
}
