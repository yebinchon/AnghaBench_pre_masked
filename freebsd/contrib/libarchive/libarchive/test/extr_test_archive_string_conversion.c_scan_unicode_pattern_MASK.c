
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int*,unsigned int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0, wchar_t *VAR_1, char *VAR_2, char *VAR_3,
    const char *VAR_4, int VAR_5)
{
 unsigned VAR_6 = 0;
 const char *VAR_7 = VAR_4;
 char *VAR_8 = VAR_0;
 wchar_t *VAR_9 = VAR_1;
 char *VAR_10 = VAR_2;
 char *VAR_11 = VAR_3;
 int VAR_12 = 0;

 for (;;) {
  if (*VAR_7 >= '0' && *VAR_7 <= '9')
   VAR_6 = (VAR_6 << 4) + (*VAR_7 - '0');
  else if (*VAR_7 >= 'A' && *VAR_7 <= 'F')
   VAR_6 = (VAR_6 << 4) + (*VAR_7 - 'A' + 0x0a);
  else {
   if (VAR_5 && VAR_8 == VAR_0) {






    switch (VAR_6) {
    case 0x2194: case 0x219A: case 0x219B:
    case 0x21AE: case 0x21CD: case 0x21CE:
    case 0x21CF: case 0x2204: case 0x2209:
    case 0x220C: case 0x2224: case 0x2226:
    case 0x2241: case 0x2244: case 0x2247:
    case 0x2249: case 0x2260: case 0x2262:
    case 0x226D: case 0x226E: case 0x226F:
    case 0x2270: case 0x2271: case 0x2274:
    case 0x2275: case 0x2276: case 0x2278:
    case 0x2279: case 0x227A: case 0x227B:
    case 0x2280: case 0x2281: case 0x2284:
    case 0x2285: case 0x2288: case 0x2289:
    case 0x22AC: case 0x22AD: case 0x22AE:
    case 0x22AF: case 0x22E0: case 0x22E1:
    case 0x22E2: case 0x22E3: case 0x22EA:
    case 0x22EB: case 0x22EC: case 0x22ED:
    case 0x1109A: case 0x1109C: case 0x110AB:
     VAR_12 = 1;
     break;
    }
   }
   VAR_10 += FUNC_0(VAR_10, VAR_6);
   VAR_11 += FUNC_1(VAR_11, VAR_6);
   VAR_9 += FUNC_3(VAR_9, VAR_6);
   VAR_8 += FUNC_2(VAR_8, VAR_6);
   if (!*VAR_7) {
    *VAR_10++ = 0;
    *VAR_10 = 0;
    *VAR_11++ = 0;
    *VAR_11 = 0;
    *VAR_9 = L'\0';
    *VAR_8 = '\0';
    break;
   }
   VAR_6 = 0;
  }
  VAR_7++;
 }
 return (VAR_12);
}
