
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {int dynindx; int def_regular; } ;
struct score_elf_link_hash_entry {TYPE_1__ root; } ;
struct bfd_link_info {int symbolic; } ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_16__ {int reloc_count; int size; scalar_t__ output_offset; TYPE_9__* output_section; int * contents; } ;
typedef TYPE_3__ asection ;
struct TYPE_19__ {scalar_t__ vma; } ;
struct TYPE_15__ {int sh_flags; } ;
struct TYPE_18__ {TYPE_2__ this_hdr; } ;
struct TYPE_17__ {scalar_t__ r_offset; void* r_info; } ;
struct TYPE_13__ {int * dynobj; } ;
typedef TYPE_4__ Elf_Internal_Rela ;
typedef int Elf32_External_Rel ;


 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned long,int) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_4 (int *,struct bfd_link_info*,TYPE_3__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_4__*,int *) ;
 TYPE_10__* FUNC_6 (struct bfd_link_info*) ;
 TYPE_8__* FUNC_7 (TYPE_9__*) ;
 TYPE_3__* FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_7,
         struct bfd_link_info *VAR_8,
         const Elf_Internal_Rela *VAR_9,
         struct score_elf_link_hash_entry *VAR_10,
         bfd_vma VAR_11,
         bfd_vma *VAR_12, asection *VAR_13)
{
  Elf_Internal_Rela VAR_14[3];
  asection *VAR_15;
  bfd *VAR_16;
  int VAR_17;
  long VAR_18;
  bfd_boolean VAR_19;

  VAR_17 = FUNC_2 (VAR_9->r_info);
  VAR_16 = FUNC_6 (VAR_8)->dynobj;
  VAR_15 = FUNC_8 (VAR_16, VAR_0);
  FUNC_0 (VAR_15 != ((void*)0));
  FUNC_0 (VAR_15->contents != ((void*)0));
  FUNC_0 (VAR_15->reloc_count * FUNC_3 (VAR_7) < VAR_15->size);

  VAR_14[0].r_offset =
    FUNC_4 (VAR_7, VAR_8, VAR_13, VAR_9[0].r_offset);
  VAR_14[1].r_offset =
    FUNC_4 (VAR_7, VAR_8, VAR_13, VAR_9[1].r_offset);
  VAR_14[2].r_offset =
    FUNC_4 (VAR_7, VAR_8, VAR_13, VAR_9[2].r_offset);

  if (VAR_14[0].r_offset == VAR_1)

    return VAR_6;

  if (VAR_14[0].r_offset == VAR_2)
    {



      *VAR_12 += VAR_11;
      return VAR_6;
    }



  if (VAR_10 != ((void*)0)
      && (! VAR_8->symbolic || !VAR_10->root.def_regular)


      && VAR_10->root.dynindx != -1)
    {
      VAR_18 = VAR_10->root.dynindx;




      VAR_19 = VAR_0;
    }
  else
    {
      VAR_18 = 0;
      VAR_19 = VAR_6;
    }





  if (VAR_19 && VAR_17 != VAR_4)
    *VAR_12 += VAR_11;



  VAR_14[0].r_info = FUNC_1 ((unsigned long) VAR_18, VAR_4);
  VAR_14[1].r_info = FUNC_1 (0, VAR_3);
  VAR_14[2].r_info = FUNC_1 (0, VAR_3);



  VAR_14[0].r_offset += (VAR_13->output_section->vma
    + VAR_13->output_offset);
  VAR_14[1].r_offset += (VAR_13->output_section->vma
    + VAR_13->output_offset);
  VAR_14[2].r_offset += (VAR_13->output_section->vma
    + VAR_13->output_offset);




  FUNC_5
      (VAR_7, &VAR_14[0],
       (VAR_15->contents + VAR_15->reloc_count * sizeof (Elf32_External_Rel)));


  ++VAR_15->reloc_count;



  FUNC_7 (VAR_13->output_section)->this_hdr.sh_flags |= VAR_5;

  return VAR_6;
}
