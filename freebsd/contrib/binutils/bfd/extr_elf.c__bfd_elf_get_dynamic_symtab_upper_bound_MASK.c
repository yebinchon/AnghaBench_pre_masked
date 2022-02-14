
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
typedef int asymbol ;
struct TYPE_6__ {long sh_size; } ;
struct TYPE_8__ {TYPE_2__ dynsymtab_hdr; } ;
struct TYPE_7__ {TYPE_1__* s; } ;
struct TYPE_5__ {long sizeof_sym; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;

long
FUNC_4 (bfd *VAR_1)
{
  long VAR_2;
  long VAR_3;
  Elf_Internal_Shdr *VAR_4 = &FUNC_2 (VAR_1)->dynsymtab_hdr;

  if (FUNC_1 (VAR_1) == 0)
    {
      FUNC_0 (VAR_0);
      return -1;
    }

  VAR_2 = VAR_4->sh_size / FUNC_3 (VAR_1)->s->sizeof_sym;
  VAR_3 = (VAR_2 + 1) * (sizeof (asymbol *));
  if (VAR_2 > 0)
    VAR_3 -= sizeof (asymbol *);

  return VAR_3;
}
