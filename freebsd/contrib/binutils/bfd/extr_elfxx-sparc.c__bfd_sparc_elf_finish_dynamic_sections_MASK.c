
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ shared; } ;
struct TYPE_11__ {int * dynobj; } ;
struct _bfd_sparc_elf_link_hash_table {TYPE_3__* sgot; int plt_entry_size; scalar_t__ is_vxworks; int plt_header_size; TYPE_1__ elf; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_14__ {scalar_t__ size; scalar_t__ contents; scalar_t__ output_offset; TYPE_8__* output_section; } ;
typedef TYPE_4__ asection ;
struct TYPE_17__ {scalar_t__ dynamic_sections_created; } ;
struct TYPE_16__ {scalar_t__ vma; } ;
struct TYPE_12__ {int sh_entsize; } ;
struct TYPE_15__ {TYPE_2__ this_hdr; } ;
struct TYPE_13__ {scalar_t__ size; TYPE_8__* output_section; int contents; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct _bfd_sparc_elf_link_hash_table*,int *,scalar_t__,int ) ;
 int FUNC_3 (struct _bfd_sparc_elf_link_hash_table*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct _bfd_sparc_elf_link_hash_table* FUNC_4 (struct bfd_link_info*) ;
 TYPE_4__* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 TYPE_9__* FUNC_7 (struct bfd_link_info*) ;
 TYPE_7__* FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int *,struct bfd_link_info*,int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_11 (int *,struct bfd_link_info*) ;
 int FUNC_12 (int *,struct bfd_link_info*) ;

bfd_boolean
FUNC_13 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  bfd *VAR_5;
  asection *VAR_6;
  struct _bfd_sparc_elf_link_hash_table *VAR_7;

  VAR_7 = FUNC_4 (VAR_4);
  VAR_5 = VAR_7->elf.dynobj;

  VAR_6 = FUNC_5 (VAR_5, ".dynamic");

  if (FUNC_7 (VAR_4)->dynamic_sections_created)
    {
      asection *VAR_8;

      VAR_8 = FUNC_5 (VAR_5, ".plt");
      FUNC_1 (VAR_8 != ((void*)0) && VAR_6 != ((void*)0));

      if (!FUNC_10 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_8))
 return VAR_0;


      if (VAR_8->size > 0)
 {
   if (VAR_7->is_vxworks)
     {
       if (VAR_4->shared)
  FUNC_12 (VAR_3, VAR_4);
       else
  FUNC_11 (VAR_3, VAR_4);
     }
   else
     {
       FUNC_9 (VAR_8->contents, 0, VAR_7->plt_header_size);
       if (!FUNC_0 (VAR_3))
  FUNC_6 (VAR_3, (bfd_vma) VAR_1,
       VAR_8->contents + VAR_8->size - 4);
     }
 }

      FUNC_8 (VAR_8->output_section)->this_hdr.sh_entsize
 = (VAR_7->is_vxworks || !FUNC_0 (VAR_3))
   ? 0 : VAR_7->plt_entry_size;
    }



  if (VAR_7->sgot && VAR_7->sgot->size > 0)
    {
      bfd_vma VAR_9 = (VAR_6 ?
       VAR_6->output_section->vma + VAR_6->output_offset :
       0);

      FUNC_2 (VAR_7, VAR_3, VAR_9, VAR_7->sgot->contents);
    }

  if (VAR_7->sgot)
    FUNC_8 (VAR_7->sgot->output_section)->this_hdr.sh_entsize =
      FUNC_3 (VAR_7);

  return VAR_2;
}
