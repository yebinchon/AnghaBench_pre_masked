
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char**,int) ;
 int FUNC_6 (char*,char*) ;

void
FUNC_7 (char *VAR_1, char *VAR_2)
{
  int VAR_3;
  char *VAR_4, *VAR_5;


  if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
    return;


  for (VAR_4 = VAR_2; FUNC_1 (*VAR_4); ++VAR_4);;


  for (VAR_5 = VAR_4; *VAR_5 != '\0' && !FUNC_1 (*VAR_5); ++VAR_5);;


  FUNC_0 (VAR_4, VAR_5);
  FUNC_4 (FUNC_2 (VAR_4, VAR_5 - VAR_4));


  VAR_3 = FUNC_5 (VAR_5, &VAR_4, 10);


  FUNC_0 (VAR_4, VAR_5);
  VAR_0 = VAR_3;


  VAR_3 = FUNC_5 (VAR_4, &VAR_5, 10);


  FUNC_0 (VAR_4, VAR_5);
  FUNC_3 (VAR_3);


  for (VAR_4 = VAR_5; FUNC_1 (*VAR_4); ++VAR_4);;


  if (*VAR_4 != '\0')
    FUNC_6 (VAR_1, VAR_4);

  return;
}
