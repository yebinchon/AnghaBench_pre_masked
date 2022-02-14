
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int gid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char**,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char**) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_3 ;
 char** FUNC_8 (char**,int) ;
 scalar_t__ FUNC_9 (int ) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(int VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_1];
 char *VAR_7, **VAR_8;
 int VAR_9, VAR_10;
 gid_t VAR_11;

 VAR_10 = 0;
 VAR_11 = FUNC_6();
 if (FUNC_9(FUNC_7()) != 0)
  FUNC_1(1, "setegid failed");
 if ((VAR_5 = FUNC_4(VAR_2, "r")) == ((void*)0)) {
  if (FUNC_9(VAR_11) != 0)
   FUNC_1(1, "setegid failed");
  FUNC_12("fopen: %s", VAR_2);
  return (1);
 }
 if (FUNC_9(VAR_11) != 0)
  FUNC_1(1, "setegid failed");

 while (FUNC_3(VAR_6, sizeof(VAR_6), VAR_5) != ((void*)0)) {
  VAR_9 = 0;
  VAR_8 = ((void*)0);
  ++VAR_3;
  if ((VAR_7 = FUNC_10(VAR_6, '\n')) != ((void*)0))
   *VAR_7 = '\0';


  if (VAR_6[0] == '\0')
   goto end_of_line;
  for (VAR_7 = VAR_6; (VAR_7 = FUNC_11(VAR_7, " \t")) != ((void*)0); VAR_7 = ((void*)0)) {
   if (*VAR_7 == '#')
    break;
   if ((VAR_8 = FUNC_8(VAR_8,
       sizeof(char *) * ++VAR_9)) == ((void*)0)) {
    FUNC_13("no memory to configure ccds");
    return (1);
   }
   VAR_8[VAR_9 - 1] = VAR_7;







   if (VAR_4 == VAR_0) {
    if (FUNC_0(VAR_9, VAR_8, VAR_4))
     VAR_10 = 1;
    goto end_of_line;
   }
  }
  if (VAR_9 != 0)
   if (FUNC_0(VAR_9, VAR_8, VAR_4))
    VAR_10 = 1;

 end_of_line:
  if (VAR_8 != ((void*)0))
   FUNC_5(VAR_8);
 }

 (void)FUNC_2(VAR_5);
 return (VAR_10);
}
