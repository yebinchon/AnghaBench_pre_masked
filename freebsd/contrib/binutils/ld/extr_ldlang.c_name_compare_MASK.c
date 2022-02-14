
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5 (char *VAR_0, char *VAR_1)
{
  char *VAR_2;
  char *VAR_3;
  int VAR_4;

  VAR_2 = FUNC_4 (FUNC_3 (VAR_0) + 1);
  VAR_3 = FUNC_4 (FUNC_3 (VAR_1) + 1);


  FUNC_2 (VAR_2, VAR_0);
  FUNC_2 (VAR_3, VAR_1);


  FUNC_1 (VAR_2, "big");
  FUNC_1 (VAR_2, "little");
  FUNC_1 (VAR_3, "big");
  FUNC_1 (VAR_3, "little");




  for (VAR_4 = 0; VAR_2[VAR_4] == VAR_3[VAR_4]; VAR_4++)
    if (VAR_2[VAR_4] == 0)
      {
 VAR_4 *= 10;
 break;
      }

  FUNC_0 (VAR_2);
  FUNC_0 (VAR_3);

  return VAR_4;
}
