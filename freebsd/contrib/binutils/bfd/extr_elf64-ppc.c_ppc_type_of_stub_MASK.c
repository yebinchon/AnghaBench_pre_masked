
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {TYPE_3__* section; } ;
struct TYPE_18__ {TYPE_4__ def; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_14__ {struct plt_entry* plist; } ;
struct TYPE_20__ {int dynindx; TYPE_6__ root; TYPE_1__ plt; } ;
struct ppc_link_hash_entry {TYPE_7__ elf; struct ppc_link_hash_entry* oh; scalar_t__ is_func_descriptor; } ;
struct TYPE_15__ {scalar_t__ offset; } ;
struct plt_entry {scalar_t__ addend; TYPE_2__ plt; struct plt_entry* next; } ;
typedef enum ppc_stub_type { ____Placeholder_ppc_stub_type } ppc_stub_type ;
typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef scalar_t__ bfd_vma ;
struct TYPE_22__ {scalar_t__ output_offset; TYPE_8__* output_section; } ;
typedef TYPE_9__ asection ;
struct TYPE_21__ {scalar_t__ vma; } ;
struct TYPE_16__ {int * output_section; } ;
struct TYPE_13__ {scalar_t__ r_addend; scalar_t__ r_offset; int r_info; } ;
typedef TYPE_10__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline enum ppc_stub_type
FUNC_1 (asection *VAR_6,
    const Elf_Internal_Rela *VAR_7,
    struct ppc_link_hash_entry **VAR_8,
    bfd_vma VAR_9)
{
  struct ppc_link_hash_entry *VAR_10 = *VAR_8;
  bfd_vma VAR_11;
  bfd_vma VAR_12;
  bfd_vma VAR_13;
  enum elf_ppc64_reloc_type VAR_14;

  if (VAR_10 != ((void*)0))
    {
      struct ppc_link_hash_entry *VAR_15 = VAR_10;
      if (VAR_15->oh != ((void*)0)
   && VAR_15->oh->is_func_descriptor)
 VAR_15 = VAR_15->oh;

      if (VAR_15->elf.dynindx != -1)
 {
   struct plt_entry *VAR_16;

   for (VAR_16 = VAR_15->elf.plt.plist; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
     if (VAR_16->addend == VAR_7->r_addend
  && VAR_16->plt.offset != (bfd_vma) -1)
       {
  *VAR_8 = VAR_15;
  return VAR_5;
       }
 }





      if (!((VAR_15->elf.root.type == VAR_1
     || VAR_15->elf.root.type == VAR_2)
     && VAR_15->elf.root.u.def.section->output_section != ((void*)0))
   && !((VAR_10->elf.root.type == VAR_1
  || VAR_10->elf.root.type == VAR_2)
        && VAR_10->elf.root.u.def.section->output_section != ((void*)0)))
 return VAR_4;
    }


  VAR_11 = (VAR_6->output_offset
       + VAR_6->output_section->vma
       + VAR_7->r_offset);

  VAR_12 = VAR_9 - VAR_11;
  VAR_14 = FUNC_0 (VAR_7->r_info);


  VAR_13 = 1 << 25;
  if (VAR_14 != VAR_0)
    VAR_13 = 1 << 15;

  if (VAR_12 + VAR_13 >= 2 * VAR_13)


    return VAR_3;

  return VAR_4;
}
