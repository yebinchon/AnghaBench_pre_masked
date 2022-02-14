
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char,int *) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, FILE *VAR_1, int VAR_2)
{
  char *VAR_3;

  for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
    if (*VAR_3 == '\''
 || *VAR_3 == '"'
 || *VAR_3 == '\\'
 || FUNC_0 (*VAR_3)
 || *VAR_3 == ','
 || *VAR_3 == ';')
      VAR_2 = 1;

  if (VAR_2)
    {
      FUNC_2 ('"', VAR_1);

      while (*VAR_0)
 {
   if (*VAR_0 == '"' || *VAR_0 == '\\')
     FUNC_2 ('\\', VAR_1);

   FUNC_2 (*VAR_0, VAR_1);
   VAR_0++;
 }

      FUNC_2 ('"', VAR_1);
    }
  else
    FUNC_1 (VAR_0, VAR_1);
}
