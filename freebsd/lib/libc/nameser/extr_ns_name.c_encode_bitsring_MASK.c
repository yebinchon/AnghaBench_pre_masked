
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char **VAR_4, const char *VAR_5, unsigned char **VAR_6,
  unsigned char ** VAR_7, unsigned const char *VAR_8)
{
 int VAR_9 = 0;
 const char *VAR_10 = *VAR_4;
 unsigned char *VAR_11;
 char VAR_12;
 const char *VAR_13;
 char *VAR_14 = ((void*)0);
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

 VAR_13 = VAR_14 = ((void*)0);


 if (VAR_5 - VAR_10 < 2)
  return (VAR_1);


 if (*VAR_10++ != 'x')
  return (VAR_1);
 if (!FUNC_1((*VAR_10) & 0xff))
  return (VAR_1);

 for (VAR_11 = *VAR_7 + 1; VAR_10 < VAR_5 && VAR_11 < VAR_8; VAR_10++) {
  switch((VAR_12 = *VAR_10)) {
  case ']':
   if (VAR_9) {
    if (VAR_13 == ((void*)0))
     return (VAR_1);
    VAR_18 = (int)FUNC_2(VAR_13, &VAR_14, 10);
    if (*VAR_14 != ']')
     return (VAR_1);
   }
   if (VAR_16)
    *VAR_11++ = ((VAR_15 << 4) & 0xff);
   VAR_10++;
   goto done;
  case '/':
   VAR_9 = 1;
   break;
  default:
   if (VAR_9) {
    if (!FUNC_0(VAR_12&0xff))
     return (VAR_1);
    if (VAR_13 == ((void*)0)) {

     if (VAR_12 == '0') {

      return (VAR_1);
     }
     VAR_13 = VAR_10;
    }
   } else {
    if (!FUNC_1(VAR_12&0xff))
     return (VAR_1);
    VAR_15 <<= 4;
    VAR_15 += VAR_3[(int)VAR_12];
    VAR_16 += 4;
    VAR_17 += 4;
    if (VAR_17 > 256)
     return (VAR_1);
    if (VAR_16 == 8) {
     *VAR_11++ = VAR_15;
     VAR_16 = 0;
    }
   }
   break;
  }
 }
  done:
 if (VAR_10 >= VAR_5 || VAR_11 >= VAR_8)
  return (VAR_2);
 if (VAR_18 > 0) {
  int VAR_19;

  if (((VAR_18 + 3) & ~3) != VAR_17)
   return (VAR_1);
  VAR_19 = VAR_17 - VAR_18;
  if (((VAR_15 << (8 - VAR_19)) & 0xff) != 0)
   return (VAR_1);
 }
 else
  VAR_18 = VAR_17;
 if (VAR_18 == 256)
  VAR_18 = 0;


 **VAR_6 = VAR_0;
 **VAR_7 = VAR_18;

 *VAR_4 = VAR_10;
 *VAR_7 = VAR_11;

 return (0);
}
