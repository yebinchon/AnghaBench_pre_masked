
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
 scalar_t__ FUNC_0 (char const*,int*) ;
 scalar_t__ FUNC_1 (char const*,int*,int*) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int*,char,int) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6, u_char *VAR_7, size_t VAR_8) {
 static const char VAR_9[] = "0123456789abcdef",
     VAR_10[] = "0123456789ABCDEF";
 u_char VAR_11[VAR_2], *VAR_12, *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 u_int VAR_19;
 int VAR_20;
 int VAR_21;
 size_t VAR_22;
 int VAR_23;
 int VAR_24;

 FUNC_3((VAR_12 = VAR_11), '\0', VAR_2);
 VAR_13 = VAR_12 + VAR_2;
 VAR_14 = ((void*)0);

 if (*VAR_6 == ':')
  if (*++VAR_6 != ':')
   goto enoent;
 VAR_16 = VAR_6;
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = -1;
 VAR_24 = 0;
 while ((VAR_17 = *VAR_6++) != '\0') {
  const char *VAR_25;

  if ((VAR_25 = FUNC_4((VAR_15 = VAR_9), VAR_17)) == ((void*)0))
   VAR_25 = FUNC_4((VAR_15 = VAR_10), VAR_17);
  if (VAR_25 != ((void*)0)) {
   VAR_19 <<= 4;
   VAR_19 |= (VAR_25 - VAR_15);
   if (++VAR_20 > 4)
    goto enoent;
   VAR_18 = 1;
   continue;
  }
  if (VAR_17 == ':') {
   VAR_16 = VAR_6;
   if (!VAR_18) {
    if (VAR_14)
     goto enoent;
    VAR_14 = VAR_12;
    continue;
   } else if (*VAR_6 == '\0')
    goto enoent;
   if (VAR_12 + VAR_4 > VAR_13)
    return (0);
   *VAR_12++ = (u_char) (VAR_19 >> 8) & 0xff;
   *VAR_12++ = (u_char) VAR_19 & 0xff;
   VAR_18 = 0;
   VAR_20 = 0;
   VAR_19 = 0;
   continue;
  }
  if (VAR_17 == '.' && ((VAR_12 + VAR_3) <= VAR_13) &&
       FUNC_1(VAR_16, VAR_12, &VAR_21) > 0) {
   VAR_12 += VAR_3;
   VAR_18 = 0;
   VAR_24 = 1;
   break;
  }
  if (VAR_17 == '/' && FUNC_0(VAR_6, &VAR_21) > 0)
   break;
  goto enoent;
 }
 if (VAR_18) {
  if (VAR_12 + VAR_4 > VAR_13)
   goto enoent;
  *VAR_12++ = (u_char) (VAR_19 >> 8) & 0xff;
  *VAR_12++ = (u_char) VAR_19 & 0xff;
 }
 if (VAR_21 == -1)
  VAR_21 = 128;

 VAR_23 = (VAR_21 + 15) / 16;
 if (VAR_23 < 2)
  VAR_23 = 2;
 if (VAR_24)
  VAR_23 = 8;
 VAR_13 = VAR_11 + 2 * VAR_23;

 if (VAR_14 != ((void*)0)) {




  const int VAR_26 = VAR_12 - VAR_14;
  int VAR_27;

  if (VAR_12 == VAR_13)
   goto enoent;
  for (VAR_27 = 1; VAR_27 <= VAR_26; VAR_27++) {
   VAR_13[- VAR_27] = VAR_14[VAR_26 - VAR_27];
   VAR_14[VAR_26 - VAR_27] = 0;
  }
  VAR_12 = VAR_13;
 }
 if (VAR_12 != VAR_13)
  goto enoent;

 VAR_22 = (VAR_21 + 7) / 8;
 if (VAR_22 > VAR_8)
  goto emsgsize;
 FUNC_2(VAR_7, VAR_11, VAR_22);
 return (VAR_21);

 enoent:
 VAR_5 = VAR_1;
 return (-1);

 emsgsize:
 VAR_5 = VAR_0;
 return (-1);
}
