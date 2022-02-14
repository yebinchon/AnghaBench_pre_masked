
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symlist {char const* name; struct symlist* next; } ;


 struct symlist* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_0, struct symlist **VAR_1)
{
  struct symlist *VAR_2;

  VAR_2 = FUNC_0 (sizeof (struct symlist));
  VAR_2->name = VAR_0;
  VAR_2->next = *VAR_1;
  *VAR_1 = VAR_2;
}
