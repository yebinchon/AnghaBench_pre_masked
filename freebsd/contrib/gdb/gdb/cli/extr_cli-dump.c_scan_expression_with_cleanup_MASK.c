
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5 (char **VAR_1, const char *VAR_2)
{
  if ((*VAR_1) == ((void*)0) || (**VAR_1) == '\0')
    {
      char *VAR_3 = FUNC_4 (VAR_2);
      FUNC_0 (VAR_0, VAR_3);
      return VAR_3;
    }
  else
    {
      char *VAR_4;
      char *VAR_5;

      VAR_5 = (*VAR_1) + FUNC_3 (*VAR_1, " \t");
      VAR_4 = FUNC_1 ((*VAR_1), VAR_5 - (*VAR_1));
      FUNC_0 (VAR_0, VAR_4);
      (*VAR_1) = FUNC_2 (VAR_5);
      return VAR_4;
    }
}
