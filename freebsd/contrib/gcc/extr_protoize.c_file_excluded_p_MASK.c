
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {char const* name; struct string_list* next; } ;


 scalar_t__ FUNC_0 (char const) ;
 struct string_list* VAR_0 ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_1)
{
  struct string_list *VAR_2;
  int VAR_3 = FUNC_2 (VAR_1);

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (!FUNC_1 (VAR_1 + VAR_3 - FUNC_2 (VAR_2->name), VAR_2->name)
 && FUNC_0 (VAR_1[VAR_3 - FUNC_2 (VAR_2->name) - 1]))
      return 1;

  return 0;
}
