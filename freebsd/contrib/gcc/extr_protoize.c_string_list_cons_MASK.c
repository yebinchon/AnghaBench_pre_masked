
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {char const* name; struct string_list* next; } ;


 struct string_list* FUNC_0 (int) ;

__attribute__((used)) static struct string_list *
FUNC_1 (const char *VAR_0, struct string_list *VAR_1)
{
  struct string_list *VAR_2 = FUNC_0 (sizeof (struct string_list));

  VAR_2->next = VAR_1;
  VAR_2->name = VAR_0;
  return VAR_2;
}
