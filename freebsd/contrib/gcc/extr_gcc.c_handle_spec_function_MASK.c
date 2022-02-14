
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 char* FUNC_5 (char const*,int) ;

__attribute__((used)) static const char *
FUNC_6 (const char *VAR_1)
{
  char *VAR_2, *VAR_3;
  const char *VAR_4, *VAR_5;
  int VAR_6;

  VAR_0++;


  for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4++)
    {
      if (*VAR_4 == '(')
        break;

      if (!FUNC_0 (*VAR_4) && !(*VAR_4 == '-' || *VAR_4 == '_'))
 FUNC_3 ("malformed spec function name");
    }
  if (*VAR_4 != '(')
    FUNC_3 ("no arguments for spec function");
  VAR_2 = FUNC_5 (VAR_1, VAR_4 - VAR_1);
  VAR_1 = ++VAR_4;


  for (VAR_6 = 0; *VAR_4 != '\0'; VAR_4++)
    {

      if (*VAR_4 == ')')
 {
   if (VAR_6 == 0)
     break;
   VAR_6--;
 }
      else if (*VAR_4 == '(')
 VAR_6++;
    }

  if (*VAR_4 != ')')
    FUNC_3 ("malformed spec function arguments");
  VAR_3 = FUNC_5 (VAR_1, VAR_4 - VAR_1);
  VAR_1 = ++VAR_4;



  VAR_5 = FUNC_2 (VAR_2, VAR_3);
  if (VAR_5 != ((void*)0) && FUNC_1 (VAR_5, 0, ((void*)0)) < 0)
    VAR_1 = ((void*)0);

  FUNC_4 (VAR_2);
  FUNC_4 (VAR_3);

  VAR_0--;

  return VAR_1;
}
