
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_uint64_t ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 char FUNC_3 (char) ;

isc_uint64_t
FUNC_4(char *VAR_1, char **VAR_2, int VAR_3) {
 isc_uint64_t VAR_4;
 isc_uint64_t VAR_5;
 char *VAR_6 = VAR_1;
 char *VAR_7;
 char VAR_8;

 if ((VAR_3 < 0) || (VAR_3 == 1) || (VAR_3 > 36)) {
  *VAR_2 = VAR_1;
  return (0);
 }

 while (*VAR_6 != 0 && FUNC_0(*VAR_6&0xff) && FUNC_1(*VAR_6&0xff))
  VAR_6++;
 if (*VAR_6 == '+' )
  VAR_6++;
 if (VAR_3 == 0) {
  if (*VAR_6 == '0' && (*(VAR_6+1) == 'X' || *(VAR_6+1) == 'x')) {
   VAR_6 += 2;
   VAR_3 = 16;
  } else if (*VAR_6 == '0')
   VAR_3 = 8;
  else
   VAR_3 = 10;
 }
 if (*VAR_6 == 0) {
  *VAR_2 = VAR_1;
  return (0);
 }
 VAR_5 = ~0;
 VAR_5 /= VAR_3;
 VAR_4 = 0;

 while ((VAR_8 = *VAR_6) != 0) {
  VAR_8 = FUNC_3(VAR_8&0xff);

  if ((VAR_7 = FUNC_2(VAR_0, VAR_8)) == ((void*)0)) {
   *VAR_2 = VAR_6;
   return (VAR_4);
  }

  if ((VAR_7 - VAR_0) >= VAR_3) {
   *VAR_2 = VAR_6;
   return (VAR_4);
  }

  if (VAR_4 > VAR_5) {
   *VAR_2 = VAR_1;
   return (0);
  }
  VAR_4 *= VAR_3;

  if ((VAR_4 + (VAR_7 - VAR_0)) < VAR_4) {
   *VAR_2 = VAR_1;
   return (0);
  }
  VAR_4 += VAR_7 - VAR_0;
  VAR_6++;
 }
 *VAR_2 = VAR_6;
 return (VAR_4);
}
