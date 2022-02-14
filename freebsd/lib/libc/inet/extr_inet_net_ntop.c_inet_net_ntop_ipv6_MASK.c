
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int const*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(const u_char *VAR_3, int VAR_4, char *VAR_5, size_t VAR_6) {
 u_int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 unsigned char VAR_16[16];
 char VAR_17[sizeof("xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255/128")];
 char *VAR_18;
 int VAR_19;
 u_char *VAR_20;

 if (VAR_4 < 0 || VAR_4 > 128) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 VAR_18 = VAR_17;

 if (VAR_4 == 0) {
  *VAR_18++ = ':';
  *VAR_18++ = ':';
  *VAR_18 = '\0';
 } else {

  VAR_9 = (VAR_4 + 7) / 8;
  FUNC_1(VAR_16, VAR_3, VAR_9);
  FUNC_2(VAR_16 + VAR_9, 0, 16 - VAR_9);
  VAR_8 = VAR_4 % 8;
  if (VAR_8 != 0) {
   VAR_7 = ~0 << (8 - VAR_8);
   VAR_16[VAR_9-1] &= VAR_7;
  }

  VAR_20 = VAR_16;


  VAR_19 = (VAR_4 + 15) / 16;
  if (VAR_19 == 1)
   VAR_19 = 2;


  VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
  for (VAR_14 = 0; VAR_14 < (VAR_19 * 2); VAR_14 += 2) {
   if ((VAR_20[VAR_14] | VAR_20[VAR_14+1]) == 0) {
    if (VAR_13 == 0)
     VAR_12 = VAR_14 / 2;
    VAR_13++;
   } else {
    if (VAR_13 && VAR_11 < VAR_13) {
     VAR_10 = VAR_12;
     VAR_11 = VAR_13;
     VAR_13 = 0;
    }
   }
  }

  if (VAR_13 && VAR_11 < VAR_13) {
   VAR_10 = VAR_12;
   VAR_11 = VAR_13;
  }

  if (VAR_11 != VAR_19 && VAR_10 == 0 && ((VAR_11 == 6) ||
      ((VAR_11 == 5 && VAR_20[10] == 0xff && VAR_20[11] == 0xff) ||
      ((VAR_11 == 7 && VAR_20[14] != 0 && VAR_20[15] != 1)))))
   VAR_15 = 1;


  for (VAR_9 = 0; VAR_9 < VAR_19; VAR_9++) {
   if (VAR_11 != 0 && VAR_9 >= VAR_10 && VAR_9 < VAR_10 + VAR_11) {

    if (VAR_9 == VAR_10)
     *VAR_18++ = ':';
    if (VAR_9 == VAR_19 - 1)
     *VAR_18++ = ':';
    VAR_20++;
    VAR_20++;
    continue;
   }

   if (VAR_15 && VAR_9 > 5 ) {
    *VAR_18++ = (VAR_9 == 6) ? ':' : '.';
    VAR_18 += FUNC_0((VAR_18, "%u", *VAR_20++));

    if (VAR_9 != 7 || VAR_4 > 120) {
     *VAR_18++ = '.';
     VAR_18 += FUNC_0((VAR_18, "%u", *VAR_20++));
    }
   } else {
    if (VAR_18 != VAR_17)
     *VAR_18++ = ':';
    VAR_18 += FUNC_0((VAR_18, "%x", *VAR_20 * 256 + VAR_20[1]));
    VAR_20 += 2;
   }
  }
 }

 FUNC_3(VAR_18, "/%u", VAR_4);
 if (FUNC_5(VAR_17) + 1 > VAR_6)
  goto emsgsize;
 FUNC_4(VAR_5, VAR_17);

 return (VAR_5);

emsgsize:
 VAR_2 = VAR_1;
 return (((void*)0));
}
