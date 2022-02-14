
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 char* FUNC_1 (int ) ;

int
FUNC_2 (struct symbol *VAR_0)
{
  const char *VAR_1 = FUNC_1 (FUNC_0 (VAR_0));
  return VAR_1 != ((void*)0)
    && (VAR_1[2] == '\0' || VAR_1[2] == '_');
}
