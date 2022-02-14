
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_final_link_info {int symbuf_count; int output_bfd; int symbuf; } ;
struct elf_backend_data {TYPE_1__* s; } ;
typedef scalar_t__ file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ sh_size; scalar_t__ sh_offset; } ;
struct TYPE_6__ {TYPE_2__ symtab_hdr; } ;
struct TYPE_4__ {int sizeof_sym; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct elf_final_link_info *VAR_3,
       const struct elf_backend_data *VAR_4)
{
  if (VAR_3->symbuf_count > 0)
    {
      Elf_Internal_Shdr *VAR_5;
      file_ptr VAR_6;
      bfd_size_type VAR_7;

      VAR_5 = &FUNC_2 (VAR_3->output_bfd)->symtab_hdr;
      VAR_6 = VAR_5->sh_offset + VAR_5->sh_size;
      VAR_7 = VAR_3->symbuf_count * VAR_4->s->sizeof_sym;
      if (FUNC_1 (VAR_3->output_bfd, VAR_6, VAR_1) != 0
   || FUNC_0 (VAR_3->symbuf, VAR_7, VAR_3->output_bfd) != VAR_7)
 return VAR_0;

      VAR_5->sh_size += VAR_7;
      VAR_3->symbuf_count = 0;
    }

  return VAR_2;
}
