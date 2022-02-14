
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,char,int) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6, u_char *VAR_7, int *VAR_8) {
 static const char VAR_9[] = "0123456789abcdef",
     VAR_10[] = "0123456789ABCDEF";
 u_char VAR_11[VAR_2], *VAR_12, *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 u_int VAR_19;
 int VAR_20;

 FUNC_3((VAR_12 = VAR_11), '\0', VAR_2);
 VAR_13 = VAR_12 + VAR_2;
 VAR_14 = ((void*)0);

 if (*VAR_6 == ':')
  if (*++VAR_6 != ':')
   return (0);
 VAR_16 = VAR_6;
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = -1;
 while ((VAR_17 = *VAR_6++) != '\0') {
  const char *VAR_21;

  if ((VAR_21 = FUNC_4((VAR_15 = VAR_9), VAR_17)) == ((void*)0))
   VAR_21 = FUNC_4((VAR_15 = VAR_10), VAR_17);
  if (VAR_21 != ((void*)0)) {
   VAR_19 <<= 4;
   VAR_19 |= (VAR_21 - VAR_15);
   if (VAR_19 > 0xffff)
    return (0);
   VAR_18 = 1;
   continue;
  }
  if (VAR_17 == ':') {
   VAR_16 = VAR_6;
   if (!VAR_18) {
    if (VAR_14)
     return (0);
    VAR_14 = VAR_12;
    continue;
   } else if (*VAR_6 == '\0') {
    return (0);
   }
   if (VAR_12 + VAR_4 > VAR_13)
    return (0);
   *VAR_12++ = (u_char) (VAR_19 >> 8) & 0xff;
   *VAR_12++ = (u_char) VAR_19 & 0xff;
   VAR_18 = 0;
   VAR_19 = 0;
   continue;
  }
  if (VAR_17 == '.' && ((VAR_12 + VAR_3) <= VAR_13) &&
      FUNC_1(VAR_16, VAR_12, &VAR_20, 1) == 0) {
   VAR_12 += VAR_3;
   VAR_18 = 0;
   break;
  }
  if (VAR_17 == '/') {
   VAR_20 = FUNC_0(VAR_6, 1);
   if (VAR_20 == -2)
    goto enoent;
   break;
  }
  goto enoent;
 }
 if (VAR_18) {
  if (VAR_12 + VAR_4 > VAR_13)
   goto emsgsize;
  *VAR_12++ = (u_char) (VAR_19 >> 8) & 0xff;
  *VAR_12++ = (u_char) VAR_19 & 0xff;
 }
 if (VAR_14 != ((void*)0)) {




  const int VAR_22 = VAR_12 - VAR_14;
  int VAR_23;

  if (VAR_12 == VAR_13)
   goto enoent;
  for (VAR_23 = 1; VAR_23 <= VAR_22; VAR_23++) {
   VAR_13[- VAR_23] = VAR_14[VAR_22 - VAR_23];
   VAR_14[VAR_22 - VAR_23] = 0;
  }
  VAR_12 = VAR_13;
 }

 FUNC_2(VAR_7, VAR_11, VAR_2);

 *VAR_8 = VAR_20;
 return (0);

 enoent:
 VAR_5 = VAR_1;
 return (-1);

 emsgsize:
 VAR_5 = VAR_0;
 return (-1);
}
