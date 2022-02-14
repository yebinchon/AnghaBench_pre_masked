
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ dynamic_sections_created; int * dynobj; } ;
struct elf64_x86_64_link_hash_table {scalar_t__ tlsdesc_plt; scalar_t__ tlsdesc_got; TYPE_5__* sgot; TYPE_5__* sgotplt; TYPE_5__* splt; TYPE_3__* srelplt; TYPE_2__ elf; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_16__ {scalar_t__ contents; scalar_t__ size; scalar_t__ output_offset; scalar_t__ vma; TYPE_8__* output_section; } ;
typedef TYPE_5__ asection ;
struct TYPE_19__ {scalar_t__ vma; } ;
struct TYPE_12__ {int sh_entsize; } ;
struct TYPE_18__ {TYPE_1__ this_hdr; } ;
struct TYPE_15__ {scalar_t__ d_ptr; scalar_t__ d_val; } ;
struct TYPE_17__ {int d_tag; TYPE_4__ d_un; } ;
struct TYPE_14__ {TYPE_5__* output_section; } ;
typedef TYPE_6__ Elf_Internal_Dyn ;
typedef int Elf64_External_Dyn ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,TYPE_6__*) ;
 int FUNC_2 (int *,TYPE_6__*,int *) ;
 TYPE_5__* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 struct elf64_x86_64_link_hash_table* FUNC_6 (struct bfd_link_info*) ;
 int VAR_3 ;
 TYPE_7__* FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (scalar_t__,int ,int) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_4, struct bfd_link_info *VAR_5)
{
  struct elf64_x86_64_link_hash_table *VAR_6;
  bfd *VAR_7;
  asection *VAR_8;

  VAR_6 = FUNC_6 (VAR_5);
  VAR_7 = VAR_6->elf.dynobj;
  VAR_8 = FUNC_3 (VAR_7, ".dynamic");

  if (VAR_6->elf.dynamic_sections_created)
    {
      Elf64_External_Dyn *VAR_9, *VAR_10;

      if (VAR_8 == ((void*)0) || VAR_6->sgot == ((void*)0))
 FUNC_0 ();

      VAR_9 = (Elf64_External_Dyn *) VAR_8->contents;
      VAR_10 = (Elf64_External_Dyn *) (VAR_8->contents + VAR_8->size);
      for (; VAR_9 < VAR_10; VAR_9++)
 {
   Elf_Internal_Dyn VAR_11;
   asection *VAR_12;

   FUNC_1 (VAR_7, VAR_9, &VAR_11);

   switch (VAR_11.d_tag)
     {
     default:
       continue;

     case 132:
       VAR_12 = VAR_6->sgotplt;
       VAR_11.d_un.d_ptr = VAR_12->output_section->vma + VAR_12->output_offset;
       break;

     case 133:
       VAR_11.d_un.d_ptr = VAR_6->srelplt->output_section->vma;
       break;

     case 131:
       VAR_12 = VAR_6->srelplt->output_section;
       VAR_11.d_un.d_val = VAR_12->size;
       break;

     case 130:







       if (VAR_6->srelplt != ((void*)0))
  {
    VAR_12 = VAR_6->srelplt->output_section;
    VAR_11.d_un.d_val -= VAR_12->size;
  }
       break;

     case 128:
       VAR_12 = VAR_6->splt;
       VAR_11.d_un.d_ptr = VAR_12->output_section->vma + VAR_12->output_offset
  + VAR_6->tlsdesc_plt;
       break;

     case 129:
       VAR_12 = VAR_6->sgot;
       VAR_11.d_un.d_ptr = VAR_12->output_section->vma + VAR_12->output_offset
  + VAR_6->tlsdesc_got;
       break;
     }

   FUNC_2 (VAR_4, &VAR_11, VAR_9);
 }


      if (VAR_6->splt && VAR_6->splt->size > 0)
 {

   FUNC_8 (VAR_6->splt->contents, VAR_3,
    VAR_1);


   FUNC_4 (VAR_4,
        (VAR_6->sgotplt->output_section->vma
         + VAR_6->sgotplt->output_offset
         + 8
         - VAR_6->splt->output_section->vma
         - VAR_6->splt->output_offset
         - 6),
        VAR_6->splt->contents + 2);


   FUNC_4 (VAR_4,
        (VAR_6->sgotplt->output_section->vma
         + VAR_6->sgotplt->output_offset
         + 16
         - VAR_6->splt->output_section->vma
         - VAR_6->splt->output_offset
         - 12),
        VAR_6->splt->contents + 8);

   FUNC_7 (VAR_6->splt->output_section)->this_hdr.sh_entsize =
     VAR_1;

   if (VAR_6->tlsdesc_plt)
     {
       FUNC_5 (VAR_4, (bfd_vma) 0,
     VAR_6->sgot->contents + VAR_6->tlsdesc_got);

       FUNC_8 (VAR_6->splt->contents + VAR_6->tlsdesc_plt,
        VAR_3,
        VAR_1);



       FUNC_4 (VAR_4,
     (VAR_6->sgotplt->output_section->vma
      + VAR_6->sgotplt->output_offset
      + 8
      - VAR_6->splt->output_section->vma
      - VAR_6->splt->output_offset
      - VAR_6->tlsdesc_plt
      - 6),
     VAR_6->splt->contents + VAR_6->tlsdesc_plt + 2);



       FUNC_4 (VAR_4,
     (VAR_6->sgot->output_section->vma
      + VAR_6->sgot->output_offset
      + VAR_6->tlsdesc_got
      - VAR_6->splt->output_section->vma
      - VAR_6->splt->output_offset
      - VAR_6->tlsdesc_plt
      - 12),
     VAR_6->splt->contents + VAR_6->tlsdesc_plt + 8);
     }
 }
    }

  if (VAR_6->sgotplt)
    {

      if (VAR_6->sgotplt->size > 0)
 {


   if (VAR_8 == ((void*)0))
     FUNC_5 (VAR_4, (bfd_vma) 0, VAR_6->sgotplt->contents);
   else
     FUNC_5 (VAR_4,
   VAR_8->output_section->vma + VAR_8->output_offset,
   VAR_6->sgotplt->contents);

   FUNC_5 (VAR_4, (bfd_vma) 0, VAR_6->sgotplt->contents + VAR_0);
   FUNC_5 (VAR_4, (bfd_vma) 0, VAR_6->sgotplt->contents + VAR_0*2);
 }

      FUNC_7 (VAR_6->sgotplt->output_section)->this_hdr.sh_entsize =
 VAR_0;
    }

  if (VAR_6->sgot && VAR_6->sgot->size > 0)
    FUNC_7 (VAR_6->sgot->output_section)->this_hdr.sh_entsize
      = VAR_0;

  return VAR_2;
}
