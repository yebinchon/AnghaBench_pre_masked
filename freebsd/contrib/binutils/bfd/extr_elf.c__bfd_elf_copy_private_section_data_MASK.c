
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_10__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
typedef int asection ;
struct TYPE_11__ {scalar_t__ sh_type; int sh_info; int sh_entsize; } ;
struct TYPE_12__ {TYPE_3__ this_hdr; } ;
struct TYPE_9__ {scalar_t__ flavour; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,TYPE_2__*,int *,int *) ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_1 (int *) ;

bfd_boolean
FUNC_2 (bfd *VAR_6,
        asection *VAR_7,
        bfd *VAR_8,
        asection *VAR_9)
{
  Elf_Internal_Shdr *VAR_10, *VAR_11;

  if (VAR_6->xvec->flavour != VAR_5
      || VAR_8->xvec->flavour != VAR_5)
    return VAR_4;

  VAR_10 = &FUNC_1 (VAR_7)->this_hdr;
  VAR_11 = &FUNC_1 (VAR_9)->this_hdr;

  VAR_11->sh_entsize = VAR_10->sh_entsize;

  if (VAR_10->sh_type == VAR_3
      || VAR_10->sh_type == VAR_0
      || VAR_10->sh_type == VAR_2
      || VAR_10->sh_type == VAR_1)
    VAR_11->sh_info = VAR_10->sh_info;

  return FUNC_0 (VAR_6, VAR_7, VAR_8, VAR_9,
          ((void*)0));
}
