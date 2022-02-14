
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;
 char* FUNC_3 (int ) ;

int
FUNC_4 (struct symbol *VAR_3)
{
  char *VAR_4 = FUNC_3 (FUNC_2 (VAR_3));

  return (FUNC_1 (VAR_3) != VAR_2
   && FUNC_1 (VAR_3) != VAR_0
   && FUNC_1 (VAR_3) != VAR_1
   && VAR_4 != ((void*)0) && FUNC_0 (VAR_4, "exception"));
}
