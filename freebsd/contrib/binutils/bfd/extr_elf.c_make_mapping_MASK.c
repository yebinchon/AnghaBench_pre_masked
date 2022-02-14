
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_segment_map {unsigned int count; int includes_filehdr; int includes_phdrs; int ** sections; int p_type; int * next; } ;
typedef unsigned int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 struct elf_segment_map* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static struct elf_segment_map *
FUNC_1 (bfd *VAR_1,
       asection **VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4,
       bfd_boolean VAR_5)
{
  struct elf_segment_map *VAR_6;
  unsigned int VAR_7;
  asection **VAR_8;
  bfd_size_type VAR_9;

  VAR_9 = sizeof (struct elf_segment_map);
  VAR_9 += (VAR_4 - VAR_3 - 1) * sizeof (asection *);
  VAR_6 = FUNC_0 (VAR_1, VAR_9);
  if (VAR_6 == ((void*)0))
    return ((void*)0);
  VAR_6->next = ((void*)0);
  VAR_6->p_type = VAR_0;
  for (VAR_7 = VAR_3, VAR_8 = VAR_2 + VAR_3; VAR_7 < VAR_4; VAR_7++, VAR_8++)
    VAR_6->sections[VAR_7 - VAR_3] = *VAR_8;
  VAR_6->count = VAR_4 - VAR_3;

  if (VAR_3 == 0 && VAR_5)
    {

      VAR_6->includes_filehdr = 1;
      VAR_6->includes_phdrs = 1;
    }

  return VAR_6;
}
