
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct extern_list {char const* name; int decl; struct extern_list* next; } ;


 struct extern_list* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1 (tree VAR_1, const char *VAR_2)
{
  struct extern_list *VAR_3;

  VAR_3 = (struct extern_list *) FUNC_0 (sizeof *VAR_3);
  VAR_3->next = VAR_0;
  VAR_3->decl = VAR_1;
  VAR_3->name = VAR_2;
  VAR_0 = VAR_3;
}
