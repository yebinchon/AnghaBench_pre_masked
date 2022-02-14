
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_list {char const* name; struct section_list* next; scalar_t__ flags; void* set_flags; scalar_t__ lma_val; scalar_t__ vma_val; void* change_lma; void* change_vma; void* copy; void* remove; void* used; } ;
typedef int bfd_boolean ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct section_list* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 struct section_list* FUNC_1 (int) ;

__attribute__((used)) static struct section_list *
FUNC_2 (const char *VAR_3, bfd_boolean VAR_4)
{
  struct section_list *VAR_5;

  for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (FUNC_0 (VAR_5->name, VAR_3) == 0)
      return VAR_5;

  if (! VAR_4)
    return ((void*)0);

  VAR_5 = FUNC_1 (sizeof (struct section_list));
  VAR_5->name = VAR_3;
  VAR_5->used = VAR_1;
  VAR_5->remove = VAR_1;
  VAR_5->copy = VAR_1;
  VAR_5->change_vma = VAR_0;
  VAR_5->change_lma = VAR_0;
  VAR_5->vma_val = 0;
  VAR_5->lma_val = 0;
  VAR_5->set_flags = VAR_1;
  VAR_5->flags = 0;

  VAR_5->next = VAR_2;
  VAR_2 = VAR_5;

  return VAR_5;
}
