
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (char*,long) ;
 int FUNC_4 (char const) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (char*,char const) ;

int
FUNC_6(const char *VAR_10, int VAR_11, long VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;
 char *VAR_16;

 if (VAR_13 & VAR_4) {
  FUNC_3("%ld\t", VAR_12);
  VAR_14 = 8;
 }
 for (; VAR_11--; VAR_10++) {
  if ((VAR_13 & VAR_3) && ++VAR_14 > VAR_5) {
   FUNC_1("\\\n", VAR_9);
   VAR_14 = 1;

   if (!VAR_8 && !VAR_6 && ++VAR_15 > VAR_7) {
    VAR_15 = 0;
    FUNC_1("Press <RETURN> to continue... ", VAR_9);
    FUNC_0(VAR_9);
    if (FUNC_2() < 0)
     return VAR_0;
   }

  }
  if (VAR_13 & VAR_3) {
   if (31 < *VAR_10 && *VAR_10 < 127 && *VAR_10 != '\\')
    FUNC_4(*VAR_10);
   else {
    FUNC_4('\\');
    VAR_14++;
    if (*VAR_10 && (VAR_16 = FUNC_5(VAR_1, *VAR_10)) != ((void*)0))
     FUNC_4(VAR_2[VAR_16 - VAR_1]);
    else {
     FUNC_4((((unsigned char) *VAR_10 & 0300) >> 6) + '0');
     FUNC_4((((unsigned char) *VAR_10 & 070) >> 3) + '0');
     FUNC_4(((unsigned char) *VAR_10 & 07) + '0');
     VAR_14 += 2;
    }
   }

  } else
   FUNC_4(*VAR_10);
 }

 if (VAR_13 & VAR_3)
  FUNC_4('$');

 FUNC_4('\n');
 return 0;
}
