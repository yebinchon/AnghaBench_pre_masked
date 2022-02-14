
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int FILE ;


 int FUNC_0 (char***,int*,char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,int,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,size_t*,int *) ;
 int FUNC_7 (char*,char const*,int ) ;
 int VAR_0 ;
 char* FUNC_8 (char*,char) ;
 size_t FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(char ***VAR_1, u_int *VAR_2,
 const char *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
 size_t VAR_9 = 0;
 u_int VAR_10 = 0;

 VAR_5 = FUNC_3(VAR_3, "r");
 if (!VAR_5)
  return;

 while (FUNC_6(&VAR_6, &VAR_9, VAR_5) != -1) {
  if (++VAR_10 > 1000)
   FUNC_1("Too many lines in environment file %s", VAR_3);
  for (VAR_7 = VAR_6; *VAR_7 == ' ' || *VAR_7 == '\t'; VAR_7++)
   ;
  if (!*VAR_7 || *VAR_7 == '#' || *VAR_7 == '\n')
   continue;

  VAR_7[FUNC_9(VAR_7, "\n")] = '\0';

  VAR_8 = FUNC_8(VAR_7, '=');
  if (VAR_8 == ((void*)0)) {
   FUNC_4(VAR_0, "Bad line %u in %.100s\n", VAR_10,
       VAR_3);
   continue;
  }




  *VAR_8 = '\0';
  VAR_8++;
  if (VAR_4 != ((void*)0) &&
      FUNC_7(VAR_7, VAR_4, 0) != 1)
   continue;
  FUNC_0(VAR_1, VAR_2, VAR_7, VAR_8);
 }
 FUNC_5(VAR_6);
 FUNC_2(VAR_5);
}
