
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 char* FUNC_0 (struct symbol*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3 (const void *VAR_0, const void *VAR_1)
{
  char *VAR_2, *VAR_3;

  VAR_2 = FUNC_0 (*(struct symbol **) VAR_0);
  VAR_3 = FUNC_0 (*(struct symbol **) VAR_1);
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    FUNC_1 ("internal: compare_classes(1)");

  return FUNC_2 (VAR_2+1, VAR_3+1);
}
