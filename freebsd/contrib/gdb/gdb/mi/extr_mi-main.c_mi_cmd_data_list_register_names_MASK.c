
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cleanup*) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,char*) ;
 int VAR_5 ;
 int FUNC_5 (int *,char*) ;

enum mi_cmd_result
FUNC_6 (char *VAR_6, char **VAR_7, int VAR_8)
{
  int VAR_9, VAR_10;
  int VAR_11;
  struct cleanup *VAR_12;







  VAR_10 = VAR_3 + VAR_2;

  VAR_12 = FUNC_3 (VAR_5, "register-names");

  if (VAR_8 == 0)
    {
      for (VAR_9 = 0;
    VAR_9 < VAR_10;
    VAR_9++)
 {
   if (FUNC_0 (VAR_9) == ((void*)0)
       || *(FUNC_0 (VAR_9)) == '\0')
     FUNC_4 (VAR_5, ((void*)0), "");
   else
     FUNC_4 (VAR_5, ((void*)0), FUNC_0 (VAR_9));
 }
    }


  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
      VAR_9 = FUNC_1 (VAR_7[VAR_11]);
      if (VAR_9 < 0 || VAR_9 >= VAR_10)
 {
   FUNC_2 (VAR_12);
   FUNC_5 (&VAR_4, "bad register number");
   return VAR_1;
 }
      if (FUNC_0 (VAR_9) == ((void*)0)
   || *(FUNC_0 (VAR_9)) == '\0')
 FUNC_4 (VAR_5, ((void*)0), "");
      else
 FUNC_4 (VAR_5, ((void*)0), FUNC_0 (VAR_9));
    }
  FUNC_2 (VAR_12);
  return VAR_0;
}
