
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_symbol_def {int entry; struct map_symbol_def* next; } ;
struct fat_user_section_struct {struct map_symbol_def* map_symbol_def_head; scalar_t__* map_symbol_def_tail; } ;
typedef int asection ;


 struct fat_user_section_struct* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2 (asection *VAR_0)
{
  struct fat_user_section_struct *VAR_1 = FUNC_0 (VAR_0);
  struct map_symbol_def *VAR_2;

  if (!VAR_1)
    return;

  *VAR_1->map_symbol_def_tail = 0;
  for (VAR_2 = VAR_1->map_symbol_def_head; VAR_2; VAR_2 = VAR_2->next)
    FUNC_1 (VAR_2->entry, VAR_0);
}
