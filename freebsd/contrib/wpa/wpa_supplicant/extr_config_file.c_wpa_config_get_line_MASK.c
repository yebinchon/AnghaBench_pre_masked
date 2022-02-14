
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static char * FUNC_7(char *VAR_1, int VAR_2, FILE *VAR_3, int *VAR_4,
      char **VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;

 while (FUNC_0(VAR_1, VAR_2, VAR_3)) {
  (*VAR_4)++;
  VAR_1[VAR_2 - 1] = '\0';
  if (!FUNC_1(VAR_1, VAR_2)) {




   FUNC_6(VAR_0, "Long line in configuration file "
       "truncated");
   FUNC_5(VAR_3);
  }
  VAR_6 = VAR_1;


  while (*VAR_6 == ' ' || *VAR_6 == '\t' || *VAR_6 == '\r')
   VAR_6++;


  if (*VAR_6 == '#' || *VAR_6 == '\n' || *VAR_6 == '\0')
   continue;





  VAR_8 = FUNC_2(VAR_6, '"');
  if (VAR_8)
   VAR_8 = FUNC_4(VAR_8 + 1, '"');
  if (!VAR_8)
   VAR_8 = VAR_6;
  VAR_7 = FUNC_2(VAR_8, '#');
  if (VAR_7)
   *VAR_7-- = '\0';
  else
   VAR_7 = VAR_6 + FUNC_3(VAR_6) - 1;


  while (VAR_7 > VAR_6 &&
         (*VAR_7 == '\n' || *VAR_7 == ' ' || *VAR_7 == '\t' ||
   *VAR_7 == '\r'))
   *VAR_7-- = '\0';

  if (*VAR_6 == '\0')
   continue;

  if (VAR_5)
   *VAR_5 = VAR_6;
  return VAR_6;
 }

 if (VAR_5)
  *VAR_5 = ((void*)0);
 return ((void*)0);
}
