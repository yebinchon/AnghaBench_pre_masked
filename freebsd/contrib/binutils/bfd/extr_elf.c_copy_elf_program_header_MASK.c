
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct elf_segment_map {scalar_t__ p_type; int p_flags_valid; int p_paddr_valid; int p_align_valid; int includes_filehdr; int includes_phdrs; unsigned int count; struct elf_segment_map* next; int * sections; scalar_t__ p_vaddr_offset; int p_align; scalar_t__ p_paddr; int p_flags; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_15__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_16__ {int output_section; struct TYPE_16__* next; int lma; } ;
typedef TYPE_2__ asection ;
struct TYPE_20__ {int this_hdr; } ;
struct TYPE_19__ {struct elf_segment_map* segment_map; TYPE_3__* phdr; } ;
struct TYPE_18__ {unsigned int e_phnum; scalar_t__ e_ehsize; int e_phentsize; scalar_t__ e_phoff; } ;
struct TYPE_17__ {scalar_t__ p_type; scalar_t__ p_offset; scalar_t__ p_filesz; scalar_t__ p_paddr; int p_align; int p_flags; } ;
typedef int Elf_Internal_Shdr ;
typedef TYPE_3__ Elf_Internal_Phdr ;
typedef TYPE_4__ Elf_Internal_Ehdr ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct elf_segment_map* FUNC_1 (TYPE_1__*,int) ;
 TYPE_4__* FUNC_2 (TYPE_1__*) ;
 TYPE_7__* FUNC_3 (TYPE_2__*) ;
 TYPE_5__* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_4, bfd *VAR_5)
{
  Elf_Internal_Ehdr *VAR_6;
  struct elf_segment_map *VAR_7;
  struct elf_segment_map *VAR_8;
  struct elf_segment_map **VAR_9;
  Elf_Internal_Phdr *VAR_10;
  unsigned int VAR_11;
  unsigned int VAR_12;
  bfd_boolean VAR_13 = VAR_0;

  VAR_6 = FUNC_2 (VAR_4);

  VAR_8 = ((void*)0);
  VAR_9 = &VAR_8;

  VAR_12 = FUNC_2 (VAR_4)->e_phnum;
  for (VAR_11 = 0, VAR_10 = FUNC_4 (VAR_4)->phdr;
       VAR_11 < VAR_12;
       VAR_11++, VAR_10++)
    {
      asection *VAR_14;
      unsigned int VAR_15;
      bfd_size_type VAR_16;
      Elf_Internal_Shdr *VAR_17;
      asection *VAR_18 = ((void*)0);


      if (VAR_10->p_type == VAR_2)
 continue;


      for (VAR_14 = VAR_4->sections, VAR_15 = 0;
    VAR_14 != ((void*)0);
    VAR_14 = VAR_14->next)
 {
   VAR_17 = &(FUNC_3(VAR_14)->this_hdr);
   if (FUNC_0 (VAR_17, VAR_10))
     {
       if (!VAR_18)
  VAR_18 = VAR_14;
       VAR_15++;
     }
 }



      VAR_16 = sizeof (struct elf_segment_map);
      if (VAR_15 != 0)
 VAR_16 += ((bfd_size_type) VAR_15 - 1) * sizeof (asection *);
      VAR_7 = FUNC_1 (VAR_5, VAR_16);
      if (VAR_7 == ((void*)0))
 return VAR_0;



      VAR_7->next = ((void*)0);
      VAR_7->p_type = VAR_10->p_type;
      VAR_7->p_flags = VAR_10->p_flags;
      VAR_7->p_flags_valid = 1;
      VAR_7->p_paddr = VAR_10->p_paddr;
      VAR_7->p_paddr_valid = 1;
      VAR_7->p_align = VAR_10->p_align;
      VAR_7->p_align_valid = 1;
      VAR_7->p_vaddr_offset = 0;



      VAR_7->includes_filehdr = (VAR_10->p_offset == 0
          && VAR_10->p_filesz >= VAR_6->e_ehsize);

      VAR_7->includes_phdrs = 0;
      if (! VAR_13 || VAR_10->p_type != VAR_1)
 {
   VAR_7->includes_phdrs =
     (VAR_10->p_offset <= (bfd_vma) VAR_6->e_phoff
      && (VAR_10->p_offset + VAR_10->p_filesz
   >= ((bfd_vma) VAR_6->e_phoff
       + VAR_6->e_phnum * VAR_6->e_phentsize)));

   if (VAR_10->p_type == VAR_1 && VAR_7->includes_phdrs)
     VAR_13 = VAR_3;
 }

      if (!VAR_7->includes_phdrs && !VAR_7->includes_filehdr)

 VAR_7->p_vaddr_offset = ((VAR_18 ? VAR_18->lma : 0)
          - VAR_10->p_paddr);

      if (VAR_15 != 0)
 {
   unsigned int VAR_19 = 0;

   for (VAR_14 = VAR_18;
        VAR_14 != ((void*)0);
        VAR_14 = VAR_14->next)
     {
       VAR_17 = &(FUNC_3(VAR_14)->this_hdr);
       if (FUNC_0 (VAR_17, VAR_10))
  {
    VAR_7->sections[VAR_19++] = VAR_14->output_section;
    if (VAR_19 == VAR_15)
      break;
  }
     }
 }

      VAR_7->count = VAR_15;
      *VAR_9 = VAR_7;
      VAR_9 = &VAR_7->next;
    }

  FUNC_4 (VAR_5)->segment_map = VAR_8;
  return VAR_3;
}
