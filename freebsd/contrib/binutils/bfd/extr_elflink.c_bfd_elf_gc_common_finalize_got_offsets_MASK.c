
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct elf_backend_data {scalar_t__ got_header_size; TYPE_1__* s; scalar_t__ want_got_plt; } ;
struct bfd_link_info {TYPE_2__* input_bfds; int hash; } ;
struct alloc_got_off_arg {unsigned int got_elt_size; scalar_t__ gotoff; } ;
typedef scalar_t__ bfd_vma ;
typedef size_t bfd_size_type ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_12__ {struct TYPE_12__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_13__ {size_t sh_size; size_t sh_info; } ;
struct TYPE_14__ {TYPE_3__ symtab_hdr; } ;
struct TYPE_11__ {int arch_size; size_t sizeof_sym; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (struct bfd_link_info*) ;
 int FUNC_3 (int ,int ,struct alloc_got_off_arg*) ;
 scalar_t__* FUNC_4 (TYPE_2__*) ;
 TYPE_5__* FUNC_5 (TYPE_2__*) ;
 struct elf_backend_data* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

bfd_boolean
FUNC_8 (bfd *VAR_4,
     struct bfd_link_info *VAR_5)
{
  bfd *VAR_6;
  const struct elf_backend_data *VAR_7 = FUNC_6 (VAR_4);
  bfd_vma VAR_8;
  unsigned int VAR_9 = VAR_7->s->arch_size / 8;
  struct alloc_got_off_arg VAR_10;

  if (! FUNC_7 (VAR_5->hash))
    return VAR_0;



  if (VAR_7->want_got_plt)
    VAR_8 = 0;
  else
    VAR_8 = VAR_7->got_header_size;


  for (VAR_6 = VAR_5->input_bfds; VAR_6; VAR_6 = VAR_6->link_next)
    {
      bfd_signed_vma *VAR_11;
      bfd_size_type VAR_12, VAR_13;
      Elf_Internal_Shdr *VAR_14;

      if (FUNC_0 (VAR_6) != VAR_2)
 continue;

      VAR_11 = FUNC_4 (VAR_6);
      if (!VAR_11)
 continue;

      VAR_14 = &FUNC_5 (VAR_6)->symtab_hdr;
      if (FUNC_1 (VAR_6))
 VAR_13 = VAR_14->sh_size / VAR_7->s->sizeof_sym;
      else
 VAR_13 = VAR_14->sh_info;

      for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
 {
   if (VAR_11[VAR_12] > 0)
     {
       VAR_11[VAR_12] = VAR_8;
       VAR_8 += VAR_9;
     }
   else
     VAR_11[VAR_12] = (bfd_vma) -1;
 }
    }



  VAR_10.gotoff = VAR_8;
  VAR_10.got_elt_size = VAR_9;
  FUNC_3 (FUNC_2 (VAR_5),
     VAR_3,
     &VAR_10);
  return VAR_1;
}
