
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int VAR_0 ;
 char* FUNC_7 (char const*) ;

char *
FUNC_8 (char **VAR_1, const char *VAR_2)
{
  char *VAR_3;
  char *VAR_4;




  if ((*VAR_1) == ((void*)0))
    {
      if (VAR_2 == ((void*)0))
 FUNC_0 ("Missing filename.");
      VAR_3 = FUNC_7 (VAR_2);
      FUNC_2 (VAR_0, VAR_3);
    }
  else
    {

      char *VAR_5;

      (*VAR_1) = FUNC_4 (*VAR_1);
      VAR_5 = *VAR_1 + FUNC_5 (*VAR_1, " \t");
      VAR_3 = FUNC_3 ((*VAR_1), VAR_5 - (*VAR_1));
      FUNC_2 (VAR_0, VAR_3);
      (*VAR_1) = FUNC_4 (VAR_5);
    }
  FUNC_1 (VAR_3 != ((void*)0));

  VAR_4 = FUNC_6 (VAR_3);
  FUNC_2 (VAR_0, VAR_4);

  return VAR_4;
}
