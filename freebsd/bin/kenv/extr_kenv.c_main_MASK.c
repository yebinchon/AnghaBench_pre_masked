
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,...) ;

int
FUNC_9(int VAR_6, char **VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = ((void*)0);
 VAR_8 = ((void*)0);
 while ((VAR_11 = FUNC_0(VAR_6, VAR_7, "hNquv")) != -1) {
  switch (VAR_11) {
  case 'h':
   VAR_1++;
   break;
  case 'N':
   VAR_0++;
   break;
  case 'q':
   VAR_3++;
   break;
  case 'u':
   VAR_4++;
   break;
  case 'v':
   VAR_5++;
   break;
  default:
   FUNC_6();
  }
 }
 VAR_6 -= VAR_2;
 VAR_7 += VAR_2;
 if (VAR_6 > 0) {
  VAR_8 = VAR_7[0];
  VAR_9 = FUNC_5(VAR_8, '=');
  if (VAR_9 != ((void*)0)) {
   *VAR_9++ = '\0';
   VAR_10 = VAR_9;
  }
  VAR_7++;
  VAR_6--;
 }
 if ((VAR_1 || VAR_0) && VAR_8 != ((void*)0))
  FUNC_6();
 if (VAR_6 > 0 || ((VAR_4 || VAR_5) && VAR_8 == ((void*)0)))
  FUNC_6();
 if (VAR_8 == ((void*)0)) {
  VAR_12 = FUNC_1();
  if (VAR_12 && !VAR_3)
   FUNC_7("kdumpenv");
 } else if (VAR_10 == ((void*)0)) {
  if (VAR_4) {
   VAR_12 = FUNC_4(VAR_8);
   if (VAR_12 && !VAR_3)
    FUNC_8("unable to unset %s", VAR_8);
  } else {
   VAR_12 = FUNC_2(VAR_8);
   if (VAR_12 && !VAR_3)
    FUNC_8("unable to get %s", VAR_8);
  }
 } else {
  VAR_12 = FUNC_3(VAR_8, VAR_10);
  if (VAR_12 && !VAR_3)
   FUNC_8("unable to set %s to %s", VAR_8, VAR_10);
 }
 return (VAR_12);
}
