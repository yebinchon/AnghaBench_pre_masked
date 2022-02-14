
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*,...) ;
 char* FUNC_1 (char const**,char const**,char*) ;
 int * FUNC_2 (char*,char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,char**) ;

void
FUNC_6(char **VAR_4, char **VAR_5, const char *VAR_6, int VAR_7)
{
 char *VAR_8;
 const char *VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_4[0], '/') != ((void*)0)) {
  FUNC_5(VAR_4[0], VAR_4, VAR_5);
  VAR_10 = VAR_3;
 } else {
  VAR_10 = VAR_0;
  while ((VAR_8 = FUNC_1(&VAR_6, &VAR_9, VAR_4[0])) != ((void*)0)) {
   if (--VAR_7 < 0 && VAR_9 == ((void*)0)) {
    FUNC_5(VAR_8, VAR_4, VAR_5);
    if (VAR_3 != VAR_0 && VAR_3 != VAR_2)
     VAR_10 = VAR_3;
    if (VAR_10 == VAR_1)
     break;
   }
   FUNC_4(VAR_8);
  }
 }


 if (VAR_10 == VAR_0 || VAR_10 == VAR_2)
  FUNC_0(127, "%s: not found", VAR_4[0]);
 else
  FUNC_0(126, "%s: %s", VAR_4[0], FUNC_3(VAR_10));
}
