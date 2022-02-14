
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t*) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char) ;
 char* FUNC_7 (char*,char) ;

void FUNC_8 (const char* VAR_0)
{
 FILE* VAR_1;
 char *VAR_2;
 size_t VAR_3;
 char *VAR_4, *VAR_5;
 char* VAR_6;

 VAR_1 = FUNC_5 (VAR_0, "r");
 if (!VAR_1)
  FUNC_1(1, "cannot open config file %s", VAR_0);

 while ((VAR_2 = FUNC_4(VAR_1, &VAR_3)) != ((void*)0)) {
  if (VAR_2[VAR_3 - 1] == '\n')
   VAR_2[VAR_3 - 1] = '\0';
  else
   FUNC_2(1, "config file format error: "
    "last line should end with newline");




  if ((VAR_4 = FUNC_7(VAR_2, '#')))
   *VAR_4 = '\0';
  for (VAR_4 = VAR_2; FUNC_6(*VAR_4); ++VAR_4)
   continue;
  if (*VAR_4 == '\0')
   continue;
  for (VAR_5 = FUNC_7(VAR_2, '\0'); FUNC_6(*--VAR_5);)
   continue;
  *++VAR_5 = '\0';




  VAR_6 = VAR_4;
  while (*VAR_4 && !FUNC_6 (*VAR_4))
   ++VAR_4;

  if (*VAR_4 != '\0') {

   *VAR_4 = '\0';
   ++VAR_4;
  }



  while (*VAR_4 && FUNC_6 (*VAR_4))
   ++VAR_4;

  FUNC_0 (VAR_6, *VAR_4 ? VAR_4 : ((void*)0));
 }

 FUNC_3 (VAR_1);
}
