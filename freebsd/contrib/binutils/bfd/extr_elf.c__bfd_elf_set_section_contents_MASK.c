
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sec_ptr ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_signed_vma ;
typedef int bfd_boolean ;
struct TYPE_8__ {int output_has_begun; } ;
typedef TYPE_1__ bfd ;
struct TYPE_9__ {scalar_t__ sh_offset; } ;
struct TYPE_10__ {TYPE_2__ this_hdr; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (void const*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 TYPE_3__* FUNC_3 (int ) ;

bfd_boolean
FUNC_4 (bfd *VAR_3,
          sec_ptr VAR_4,
          const void *VAR_5,
          file_ptr VAR_6,
          bfd_size_type VAR_7)
{
  Elf_Internal_Shdr *VAR_8;
  bfd_signed_vma VAR_9;

  if (! VAR_3->output_has_begun
      && ! FUNC_0 (VAR_3, ((void*)0)))
    return VAR_0;

  VAR_8 = &FUNC_3 (VAR_4)->this_hdr;
  VAR_9 = VAR_8->sh_offset + VAR_6;
  if (FUNC_2 (VAR_3, VAR_9, VAR_1) != 0
      || FUNC_1 (VAR_5, VAR_7, VAR_3) != VAR_7)
    return VAR_0;

  return VAR_2;
}
