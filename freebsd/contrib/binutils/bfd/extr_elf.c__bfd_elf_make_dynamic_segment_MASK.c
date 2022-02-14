
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_segment_map {int count; int ** sections; int p_type; int * next; } ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 struct elf_segment_map* FUNC_0 (int *,int) ;

struct elf_segment_map *
FUNC_1 (bfd *VAR_1, asection *VAR_2)
{
  struct elf_segment_map *VAR_3;

  VAR_3 = FUNC_0 (VAR_1, sizeof (struct elf_segment_map));
  if (VAR_3 == ((void*)0))
    return ((void*)0);
  VAR_3->next = ((void*)0);
  VAR_3->p_type = VAR_0;
  VAR_3->count = 1;
  VAR_3->sections[0] = VAR_2;

  return VAR_3;
}
