
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_segment_map {scalar_t__ p_type; unsigned int count; TYPE_1__** sections; struct elf_segment_map* next; } ;
typedef int bfd_vma ;
typedef int bfd ;
struct TYPE_4__ {int size; int vma; } ;
typedef TYPE_1__ asection ;
struct TYPE_5__ {struct elf_segment_map* segment_map; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;

asection *
FUNC_1 (bfd *VAR_1, bfd_vma VAR_2, bfd_vma VAR_3)
{
  struct elf_segment_map *VAR_4;
  unsigned int VAR_5;

  for (VAR_4 = FUNC_0 (VAR_1)->segment_map; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    if (VAR_4->p_type == VAR_0)
      for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
 if (VAR_4->sections[VAR_5]->size != 0
     && (VAR_4->sections[VAR_5]->vma < VAR_2
  || VAR_4->sections[VAR_5]->vma > VAR_3
  || VAR_4->sections[VAR_5]->vma + VAR_4->sections[VAR_5]->size - 1 > VAR_3))
   return VAR_4->sections[VAR_5];

  return ((void*)0);
}
