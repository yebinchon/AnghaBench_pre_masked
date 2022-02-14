
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_8__ {int e_phnum; } ;
struct TYPE_6__ {scalar_t__ flavour; } ;
typedef int Elf_Internal_Phdr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;

long
FUNC_2 (bfd *VAR_2)
{
  if (VAR_2->xvec->flavour != VAR_1)
    {
      FUNC_0 (VAR_0);
      return -1;
    }

  return FUNC_1 (VAR_2)->e_phnum * sizeof (Elf_Internal_Phdr);
}
