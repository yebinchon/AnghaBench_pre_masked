
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_segment_map {unsigned long p_type; unsigned int count; struct elf_segment_map* next; int sections; void* includes_phdrs; void* includes_filehdr; void* p_paddr_valid; void* p_flags_valid; int p_paddr; int p_flags; } ;
typedef int flagword ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef void* bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {struct elf_segment_map* segment_map; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 struct elf_segment_map* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int **,unsigned int) ;

bfd_boolean
FUNC_4 (bfd *VAR_3,
   unsigned long VAR_4,
   bfd_boolean VAR_5,
   flagword VAR_6,
   bfd_boolean VAR_7,
   bfd_vma VAR_8,
   bfd_boolean VAR_9,
   bfd_boolean VAR_10,
   unsigned int VAR_11,
   asection **VAR_12)
{
  struct elf_segment_map *VAR_13, **VAR_14;
  bfd_size_type VAR_15;

  if (FUNC_0 (VAR_3) != VAR_2)
    return VAR_1;

  VAR_15 = sizeof (struct elf_segment_map);
  VAR_15 += ((bfd_size_type) VAR_11 - 1) * sizeof (asection *);
  VAR_13 = FUNC_1 (VAR_3, VAR_15);
  if (VAR_13 == ((void*)0))
    return VAR_0;

  VAR_13->p_type = VAR_4;
  VAR_13->p_flags = VAR_6;
  VAR_13->p_paddr = VAR_8;
  VAR_13->p_flags_valid = VAR_5;
  VAR_13->p_paddr_valid = VAR_7;
  VAR_13->includes_filehdr = VAR_9;
  VAR_13->includes_phdrs = VAR_10;
  VAR_13->count = VAR_11;
  if (VAR_11 > 0)
    FUNC_3 (VAR_13->sections, VAR_12, VAR_11 * sizeof (asection *));

  for (VAR_14 = &FUNC_2 (VAR_3)->segment_map; *VAR_14 != ((void*)0); VAR_14 = &(*VAR_14)->next)
    ;
  *VAR_14 = VAR_13;

  return VAR_1;
}
