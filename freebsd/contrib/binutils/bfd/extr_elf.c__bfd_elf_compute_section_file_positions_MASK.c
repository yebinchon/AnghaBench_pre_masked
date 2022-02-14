
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_post_process_headers ) (TYPE_1__*,struct bfd_link_info*) ;int (* elf_backend_begin_write_processing ) (TYPE_1__*,struct bfd_link_info*) ;} ;
struct bfd_strtab_hash {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_19__ {int flags; scalar_t__ output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_20__ {scalar_t__ sh_size; int sh_addralign; int sh_offset; scalar_t__ sh_info; scalar_t__ sh_link; scalar_t__ sh_entsize; scalar_t__ sh_addr; scalar_t__ sh_flags; int sh_type; } ;
struct TYPE_21__ {int next_file_pos; TYPE_2__ strtab_hdr; TYPE_2__ symtab_shndx_hdr; TYPE_2__ symtab_hdr; TYPE_2__ shstrtab_hdr; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct bfd_strtab_hash*) ;
 int FUNC_3 (struct bfd_strtab_hash*) ;
 int FUNC_4 (TYPE_1__*,struct bfd_link_info*) ;
 int FUNC_5 (TYPE_1__*,struct bfd_link_info*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_8__* FUNC_10 (TYPE_1__*) ;
 struct elf_backend_data* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,struct bfd_link_info*) ;
 int FUNC_14 (TYPE_1__*,struct bfd_link_info*) ;
 int FUNC_15 (TYPE_1__*,struct bfd_strtab_hash**,int) ;

bfd_boolean
FUNC_16 (bfd *VAR_8,
      struct bfd_link_info *VAR_9)
{
  const struct elf_backend_data *VAR_10 = FUNC_11 (VAR_8);
  bfd_boolean VAR_11;
  struct bfd_strtab_hash *VAR_12 = ((void*)0);
  Elf_Internal_Shdr *VAR_13;

  if (VAR_8->output_has_begun)
    return VAR_5;


  if (VAR_10->elf_backend_begin_write_processing)
    (*VAR_10->elf_backend_begin_write_processing) (VAR_8, VAR_9);

  if (! FUNC_12 (VAR_8))
    return VAR_2;


  if (VAR_10->elf_backend_post_process_headers)
    (*VAR_10->elf_backend_post_process_headers) (VAR_8, VAR_9);

  VAR_11 = VAR_2;
  FUNC_7 (VAR_8, VAR_7, &VAR_11);
  if (VAR_11)
    return VAR_2;

  if (!FUNC_5 (VAR_8, VAR_9))
    return VAR_2;


  if (VAR_9 == ((void*)0) && FUNC_6 (VAR_8) > 0)
    {

      int VAR_14 = ! (VAR_8->flags & (VAR_1 | VAR_0));

      if (! FUNC_15 (VAR_8, &VAR_12, VAR_14))
 return VAR_2;
    }

  if (VAR_9 == ((void*)0))
    {
      FUNC_7 (VAR_8, VAR_6, &VAR_11);
      if (VAR_11)
 return VAR_2;
    }

  VAR_13 = &FUNC_10 (VAR_8)->shstrtab_hdr;

  VAR_13->sh_type = VAR_4;
  VAR_13->sh_flags = 0;
  VAR_13->sh_addr = 0;
  VAR_13->sh_size = FUNC_1 (FUNC_9 (VAR_8));
  VAR_13->sh_entsize = 0;
  VAR_13->sh_link = 0;
  VAR_13->sh_info = 0;

  VAR_13->sh_addralign = 1;

  if (!FUNC_4 (VAR_8, VAR_9))
    return VAR_2;

  if (VAR_9 == ((void*)0) && FUNC_6 (VAR_8) > 0)
    {
      file_ptr VAR_15;
      Elf_Internal_Shdr *VAR_16;

      VAR_15 = FUNC_10 (VAR_8)->next_file_pos;

      VAR_16 = &FUNC_10 (VAR_8)->symtab_hdr;
      VAR_15 = FUNC_0 (VAR_16, VAR_15, VAR_5);

      VAR_16 = &FUNC_10 (VAR_8)->symtab_shndx_hdr;
      if (VAR_16->sh_size != 0)
 VAR_15 = FUNC_0 (VAR_16, VAR_15, VAR_5);

      VAR_16 = &FUNC_10 (VAR_8)->strtab_hdr;
      VAR_15 = FUNC_0 (VAR_16, VAR_15, VAR_5);

      FUNC_10 (VAR_8)->next_file_pos = VAR_15;



      if (FUNC_8 (VAR_8, VAR_16->sh_offset, VAR_3) != 0
   || ! FUNC_2 (VAR_8, VAR_12))
 return VAR_2;
      FUNC_3 (VAR_12);
    }

  VAR_8->output_has_begun = VAR_5;

  return VAR_5;
}
