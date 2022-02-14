
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_t ;


 long VAR_0 ;
 int FUNC_0 (char*,int,int,long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 char* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_9 (char*,char*,int) ;
 int * FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (char*,char*) ;

long
FUNC_12(int VAR_6, int VAR_7)
{
 static char *VAR_8 = ((void*)0);
 static int VAR_9 = 0;

 line_t *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12;
 char *VAR_13 = ((void*)0);
 if (!VAR_6 && (VAR_13 = FUNC_6(&VAR_12, 0)) == ((void*)0))
  return VAR_0;

 FUNC_1();
 while ((VAR_10 = FUNC_10()) != ((void*)0)) {
  if ((VAR_1 = FUNC_7(VAR_10)) < 0)
   return VAR_0;
  if (VAR_6) {

   if (FUNC_3(VAR_1, VAR_1, VAR_7) < 0)
    return VAR_0;
   while ((VAR_12 = FUNC_8()) > 0 &&
       VAR_3[VAR_12 - 1] != '\n')
    FUNC_2(VAR_5);
   if (VAR_12 < 0)
    return VAR_0;
   else if (VAR_12 == 0) {
    VAR_2 = "unexpected end-of-file";
    return VAR_0;
   } else if (VAR_12 == 1 && !FUNC_11(VAR_3, "\n"))
    continue;
   else if (VAR_12 == 2 && !FUNC_11(VAR_3, "&\n")) {
    if (VAR_13 == ((void*)0)) {
     VAR_2 = "no previous command";
     return VAR_0;
    } else VAR_13 = VAR_8;
   } else if ((VAR_13 = FUNC_6(&VAR_12, 0)) == ((void*)0))
    return VAR_0;
   else {
    FUNC_0(VAR_8, VAR_9, VAR_12 + 1, VAR_0);
    FUNC_9(VAR_8, VAR_13, VAR_12 + 1);
    VAR_13 = VAR_8;
   }

  }
  VAR_4 = VAR_13;
  for (; *VAR_4;)
   if ((VAR_11 = FUNC_5()) < 0 ||
       (VAR_11 = FUNC_4()) < 0 ||
       (VAR_11 > 0 && (VAR_11 = FUNC_3(
       VAR_1, VAR_1, VAR_11)) < 0))
    return VAR_11;
 }
 return 0;
}
