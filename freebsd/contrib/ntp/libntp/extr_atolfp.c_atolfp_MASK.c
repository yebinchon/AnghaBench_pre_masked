
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 char* FUNC_4 (char const*,char const) ;
 int* VAR_0 ;

int
FUNC_5(
 const char *VAR_1,
 l_fp *VAR_2
 )
{
 register const char *VAR_3;
 register u_long VAR_4;
 register u_long VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 static const char *VAR_9 = "0123456789";

 FUNC_1(VAR_1 != ((void*)0));

 VAR_8 = 0;
 VAR_4 = VAR_5 = 0;
 VAR_7 = 0;
 VAR_3 = VAR_1;






 while (FUNC_3((unsigned char)*VAR_3))
     VAR_3++;

 if (*VAR_3 == '-') {
  VAR_3++;
  VAR_8 = 1;
 }

 if (*VAR_3 == '+')
     VAR_3++;

 if (*VAR_3 != '.' && !FUNC_2((unsigned char)*VAR_3))
     return 0;

 while (*VAR_3 != '\0' && (VAR_6 = FUNC_4(VAR_9, *VAR_3)) != ((void*)0)) {
  VAR_4 = (VAR_4 << 3) + (VAR_4 << 1);
  VAR_4 += (u_long)(VAR_6 - VAR_9);
  VAR_3++;
 }

 if (*VAR_3 != '\0' && !FUNC_3((unsigned char)*VAR_3)) {
  if (*VAR_3++ != '.')
      return 0;

  while (VAR_7 < 9 && *VAR_3 != '\0'
         && (VAR_6 = FUNC_4(VAR_9, *VAR_3)) != ((void*)0)) {
   VAR_7++;
   VAR_5 = (VAR_5 << 3) + (VAR_5 << 1);
   VAR_5 += (u_long)(VAR_6 - VAR_9);
   VAR_3++;
  }

  while (FUNC_2((unsigned char)*VAR_3))
      VAR_3++;

  if (*VAR_3 != '\0' && !FUNC_3((unsigned char)*VAR_3))
      return 0;
 }

 if (VAR_7 > 0) {
  register u_long VAR_10;
  register u_long VAR_11;
  register u_long VAR_12;

  VAR_12 = VAR_0[VAR_7];

  VAR_10 = 0;
  VAR_11 = 0x80000000;
  while (VAR_11 != 0) {
   VAR_5 <<= 1;
   if (VAR_5 >= VAR_12) {
    VAR_10 |= VAR_11;
    VAR_5 -= VAR_12;
   }
   VAR_11 >>= 1;
  }
  if ((VAR_5 << 1) > VAR_12)
      VAR_10++;
  VAR_5 = VAR_10;
 }

 if (VAR_8)
     FUNC_0(VAR_4, VAR_5);

 VAR_2->l_ui = VAR_4;
 VAR_2->l_uf = VAR_5;
 return 1;
}
