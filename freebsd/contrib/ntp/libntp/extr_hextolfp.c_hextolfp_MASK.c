
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char const*,char const) ;

int
FUNC_2(
 const char *VAR_0,
 l_fp *VAR_1
 )
{
 register const char *VAR_2;
 register const char *VAR_3;
 register u_long VAR_4;
 register u_long VAR_5;
 char *VAR_6 = ((void*)0);
 static const char *VAR_7 = "0123456789abcdefABCDEF";

 VAR_4 = VAR_5 = 0;
 VAR_2 = VAR_0;






 while (FUNC_0((unsigned char)*VAR_2))
     VAR_2++;

 VAR_3 = VAR_2;
 while (*VAR_2 != '\0' && (VAR_2 - VAR_3) < 8 &&
        (VAR_6 = FUNC_1(VAR_7, *VAR_2)) != ((void*)0)) {
  VAR_4 = VAR_4 << 4;
  VAR_4 += ((VAR_6 - VAR_7) > 15)
   ? (u_long)(VAR_6 - VAR_7 - 6)
   : (u_long)(VAR_6 - VAR_7);
  VAR_2++;
 }

 if ((VAR_2 - VAR_3) < 8 || VAR_6 == ((void*)0))
     return 0;
 if (*VAR_2 == '.')
     VAR_2++;

 VAR_3 = VAR_2;
 while (*VAR_2 != '\0' && (VAR_2 - VAR_3) < 8 &&
        (VAR_6 = FUNC_1(VAR_7, *VAR_2)) != ((void*)0)) {
  VAR_5 = VAR_5 << 4;
  VAR_5 += ((VAR_6 - VAR_7) > 15)
   ? (u_long)(VAR_6 - VAR_7 - 6)
   : (u_long)(VAR_6 - VAR_7);
  VAR_2++;
 }

 if ((VAR_2 - VAR_3) < 8 || VAR_6 == ((void*)0))
     return 0;

 if (*VAR_2 != '\0' && !FUNC_0((unsigned char)*VAR_2))
     return 0;

 VAR_1->l_ui = VAR_4;
 VAR_1->l_uf = VAR_5;
 return 1;
}
