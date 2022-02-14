
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_segment_map {scalar_t__ p_type; int count; struct elf_segment_map* next; int ** sections; } ;
struct bfd_link_info {int dummy; } ;
typedef unsigned int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {struct elf_segment_map* segment_map; } ;
struct TYPE_3__ {scalar_t__ ovl_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,char*) ;
 struct elf_segment_map* FUNC_1 (int *,unsigned int) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int **,int **,int) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  asection *VAR_5, *VAR_6;
  struct elf_segment_map *VAR_7;
  unsigned int VAR_8;

  if (VAR_4 == ((void*)0))
    return VAR_2;

  VAR_5 = FUNC_0 (VAR_3, ".toe");
  for (VAR_7 = FUNC_2 (VAR_3)->segment_map; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    if (VAR_7->p_type == VAR_1 && VAR_7->count > 1)
      for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++)
 if ((VAR_6 = VAR_7->sections[VAR_8]) == VAR_5
     || FUNC_4 (VAR_6)->ovl_index != 0)
   {
     struct elf_segment_map *VAR_9;
     bfd_vma VAR_10;

     if (VAR_8 + 1 < VAR_7->count)
       {
  VAR_10 = sizeof (struct elf_segment_map);
  VAR_10 += (VAR_7->count - (VAR_8 + 2)) * sizeof (VAR_7->sections[0]);
  VAR_9 = FUNC_1 (VAR_3, VAR_10);
  if (VAR_9 == ((void*)0))
    return VAR_0;
  VAR_9->count = VAR_7->count - (VAR_8 + 1);
  FUNC_3 (VAR_9->sections, VAR_7->sections + VAR_8 + 1,
   VAR_9->count * sizeof (VAR_7->sections[0]));
  VAR_9->p_type = VAR_1;
  VAR_9->next = VAR_7->next;
  VAR_7->next = VAR_9;
       }
     VAR_7->count = 1;
     if (VAR_8 != 0)
       {
  VAR_7->count = VAR_8;
  VAR_10 = sizeof (struct elf_segment_map);
  VAR_9 = FUNC_1 (VAR_3, VAR_10);
  if (VAR_9 == ((void*)0))
    return VAR_0;
  VAR_9->p_type = VAR_1;
  VAR_9->count = 1;
  VAR_9->sections[0] = VAR_6;
  VAR_9->next = VAR_7->next;
  VAR_7->next = VAR_9;
       }
     break;
   }

  return VAR_2;
}
