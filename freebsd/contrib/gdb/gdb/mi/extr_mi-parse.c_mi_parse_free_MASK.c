
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_parse {int * argv; struct mi_parse* args; struct mi_parse* token; struct mi_parse* command; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mi_parse*) ;

void
FUNC_2 (struct mi_parse *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return;
  if (VAR_0->command != ((void*)0))
    FUNC_1 (VAR_0->command);
  if (VAR_0->token != ((void*)0))
    FUNC_1 (VAR_0->token);
  if (VAR_0->args != ((void*)0))
    FUNC_1 (VAR_0->args);
  if (VAR_0->argv != ((void*)0))
    FUNC_0 (VAR_0->argv);
  FUNC_1 (VAR_0);
}
