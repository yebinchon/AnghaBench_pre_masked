
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum mi_cmd_result { ____Placeholder_mi_cmd_result } mi_cmd_result ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,int) ;
 struct cleanup* FUNC_2 (int ,char*) ;
 int FUNC_3 (char**,char*,char*) ;
 int VAR_1 ;

enum mi_cmd_result
FUNC_4 (char *VAR_2, int VAR_3)
{
  char *VAR_4;
  struct cleanup *VAR_5 = ((void*)0);

  FUNC_3 (&VAR_4, "load %s", VAR_2);
  VAR_5 = FUNC_2 (VAR_1, VAR_4);
  FUNC_1 (VAR_4, VAR_3);

  FUNC_0 (VAR_5);
  return VAR_0;
}
