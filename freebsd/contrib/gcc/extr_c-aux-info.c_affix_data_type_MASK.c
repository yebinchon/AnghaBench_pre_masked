
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char* const,char*,char* const,...) ;
 int VAR_0 ;
 char* FUNC_2 (char*,char*,char*,char*,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_1)
{
  char *const VAR_2 = FUNC_0 (VAR_1);
  char *VAR_3 = VAR_2;
  char *VAR_4;
  char VAR_5;



  for (;;)
    {
      if (!FUNC_3 (VAR_3, "volatile ", 9))
 {
   VAR_3 += 9;
   continue;
 }
      if (!FUNC_3 (VAR_3, "const ", 6))
 {
   VAR_3 += 6;
   continue;
 }
      break;
    }




  if (VAR_3 == VAR_2)
    return FUNC_1 (VAR_0, " ", VAR_2, ((void*)0));

  VAR_5 = *VAR_3;
  *VAR_3 = '\0';
  VAR_4 = FUNC_1 (VAR_2, VAR_0, ((void*)0));
  *VAR_3 = VAR_5;
  return FUNC_2 (VAR_4,
     VAR_4, " ", VAR_3, ((void*)0));
}
