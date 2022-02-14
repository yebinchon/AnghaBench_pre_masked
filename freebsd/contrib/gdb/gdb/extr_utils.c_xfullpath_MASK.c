
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,char const*,char const*,...) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;

char *
FUNC_10 (const char *VAR_1)
{
  const char *VAR_2 = FUNC_5 (VAR_1);
  char *VAR_3;
  char *VAR_4;
  char *VAR_5;



  if (VAR_2 == VAR_1)
    return FUNC_9 (VAR_1);

  VAR_3 = FUNC_1 ((size_t) (VAR_2 - VAR_1 + 2));



  FUNC_7 (VAR_3, VAR_1, VAR_2 - VAR_1);
  VAR_3[VAR_2 - VAR_1] = '\000';
  VAR_4 = FUNC_3 (VAR_3);
  if (FUNC_0 (VAR_4[FUNC_6 (VAR_4) - 1]))
    VAR_5 = FUNC_2 (VAR_4, VAR_2, ((void*)0));
  else
    VAR_5 = FUNC_2 (VAR_4, VAR_0, VAR_2, ((void*)0));

  FUNC_8 (VAR_4);
  return VAR_5;
}
