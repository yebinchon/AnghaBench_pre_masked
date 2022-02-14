
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char**,char*) ;

char *
FUNC_13(char *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 char *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;

 if (VAR_2 == ((void*)0))
  return (FUNC_9(""));


 FUNC_5(VAR_3, VAR_1);
 FUNC_5(VAR_3, VAR_0);
 VAR_7 = FUNC_2(VAR_4);




 VAR_8 = ((void*)0);
 for (VAR_6 = VAR_2; (VAR_5 = FUNC_12(&VAR_6, ",")) != ((void*)0);) {
  if (FUNC_7(VAR_1, VAR_5) == 0)
   VAR_8 = FUNC_0(VAR_8, VAR_3);
  else if (FUNC_7(VAR_0, VAR_5) == 0)
   VAR_8 = FUNC_0(VAR_8, VAR_7);
  else
   VAR_8 = FUNC_0(VAR_8, VAR_5);
 }
 FUNC_3(VAR_7);
 FUNC_3(VAR_2);






 VAR_9 = ((void*)0);
 for (VAR_6 = VAR_8; (VAR_5 = FUNC_12(&VAR_6, ",")) != ((void*)0);) {
  if ((VAR_10 = FUNC_4( FUNC_10(VAR_5) + 2 + 1 )) == ((void*)0))
   FUNC_1(1, "malloc failed");

  FUNC_8(VAR_10, "no");
  FUNC_6(VAR_10, VAR_5);
  FUNC_5(VAR_9, VAR_10);
  FUNC_3(VAR_10);

  if (FUNC_11("no", VAR_5, 2) == 0)
   FUNC_5(VAR_9, VAR_5+2);

  VAR_9 = FUNC_0(VAR_9, VAR_5);
 }
 FUNC_3(VAR_8);

 return (VAR_9);
}
