
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,size_t,char*,char const*,...) ;
 char* FUNC_2 (scalar_t__) ;
 long long FUNC_3 (char const*,char**,int) ;

long long
FUNC_4(const char *VAR_2, const char *VAR_3,
    long long VAR_4, long long VAR_5, char *VAR_6, size_t VAR_7)
{
 long long VAR_8, VAR_9;
 char *VAR_10;

 VAR_1 = 0;
 VAR_6[0] = '\0';

 while (FUNC_0((unsigned char)*VAR_3))
  VAR_3++;

 VAR_8 = FUNC_3(VAR_3, &VAR_10, 10);
 if (VAR_1 == VAR_0)
  goto erange;

 if (VAR_10 == VAR_3)
  goto badnum;

 switch (*VAR_10) {
 case 'b':
  VAR_9 = VAR_8;
  VAR_8 *= 512;
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 case 'k':
  VAR_9 = VAR_8;
  VAR_8 *= 1024;
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 case 'm':
  VAR_9 = VAR_8;
  VAR_8 *= 1048576;
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 case 'g':
  VAR_9 = VAR_8;
  VAR_8 *= 1073741824;
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 case 't':
  VAR_9 = VAR_8;
  VAR_8 *= 1099511627776LL;
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 case 'w':
  VAR_9 = VAR_8;
  VAR_8 *= sizeof(int);
  if (VAR_9 > VAR_8)
   goto erange;
  ++VAR_10;
  break;
 }

 switch (*VAR_10) {
 case '\0':
  break;
 case '*':
 case 'x':
  VAR_9 = VAR_8;
  VAR_8 *= FUNC_4(VAR_2, VAR_10 + 1, VAR_4, VAR_5, VAR_6, VAR_7);
  if (*VAR_6 != '\0')
   return (0);
  if (VAR_9 > VAR_8) {
 erange:
   FUNC_1(VAR_6, VAR_7,
       "%s: %s", VAR_2, FUNC_2(VAR_0));
   return (0);
  }
  break;
 default:
 badnum: FUNC_1(VAR_6, VAR_7,
      "%s `%s': illegal number", VAR_2, VAR_3);
  return (0);
 }
 if (VAR_8 < VAR_4) {

  FUNC_1(VAR_6, VAR_7, "%s %lld is less than %lld.",
      VAR_2, (long long)VAR_8, (long long)VAR_4);
  return (0);
 }
 if (VAR_8 > VAR_5) {

  FUNC_1(VAR_6, VAR_7,
      "%s %lld is greater than %lld.",
      VAR_2, (long long)VAR_8, (long long)VAR_5);
  return (0);
 }
 *VAR_6 = '\0';
 return (VAR_8);
}
