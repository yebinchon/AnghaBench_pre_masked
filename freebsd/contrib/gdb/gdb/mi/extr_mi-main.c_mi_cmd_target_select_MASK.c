
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;
 char* VAR_2 ;
 struct cleanup* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char**,char*,char*) ;
 int VAR_5 ;

enum mi_cmd_result
FUNC_8 (char *VAR_6, int VAR_7)
{
  char *VAR_8;
  struct cleanup *VAR_9 = ((void*)0);

  FUNC_7 (&VAR_8, "target %s", VAR_6);
  VAR_9 = FUNC_4 (VAR_5, VAR_8);






  FUNC_2 (VAR_8, VAR_7);

  FUNC_0 (VAR_9);


  if (VAR_2)
    FUNC_3 (VAR_2, VAR_3);
  FUNC_3 ("^connected", VAR_3);
  FUNC_5 (VAR_4, VAR_3);
  FUNC_6 (VAR_4);
  FUNC_3 ("\n", VAR_3);
  FUNC_1 (VAR_0);
  return VAR_1;
}
