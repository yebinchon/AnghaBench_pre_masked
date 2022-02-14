
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_11__ {int e_phnum; } ;
struct TYPE_10__ {int phdr; } ;
struct TYPE_8__ {scalar_t__ flavour; } ;
typedef int Elf_Internal_Phdr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void*,int ,int) ;

int
FUNC_4 (bfd *VAR_2, void *VAR_3)
{
  int VAR_4;

  if (VAR_2->xvec->flavour != VAR_1)
    {
      FUNC_0 (VAR_0);
      return -1;
    }

  VAR_4 = FUNC_1 (VAR_2)->e_phnum;
  FUNC_3 (VAR_3, FUNC_2 (VAR_2)->phdr,
   VAR_4 * sizeof (Elf_Internal_Phdr));

  return VAR_4;
}
