
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int flags; char* replacement; } ;


 int VAR_0 ;
 int VAR_1 ;

struct cmd_list_element *
FUNC_0 (struct cmd_list_element *VAR_2, char *VAR_3)
{
  VAR_2->flags |= (VAR_0 | VAR_1);

  if (VAR_3 != ((void*)0))
    VAR_2->replacement = VAR_3;
  else
    VAR_2->replacement = ((void*)0);

  return VAR_2;
}
