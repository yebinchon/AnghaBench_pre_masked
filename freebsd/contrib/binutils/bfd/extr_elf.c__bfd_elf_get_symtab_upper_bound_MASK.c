
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
struct TYPE_8__ {TYPE_2__ symtab_hdr; } ;
struct TYPE_7__ {TYPE_1__* s; } ;
struct TYPE_5__ {long sizeof_sym; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;

long
FUNC_2 (bfd *VAR_0)
{
  long VAR_1;
  long VAR_2;
  Elf_Internal_Shdr *VAR_3 = &FUNC_0 (VAR_0)->symtab_hdr;

  VAR_1 = VAR_3->sh_size / FUNC_1 (VAR_0)->s->sizeof_sym;
  VAR_2 = (VAR_1 + 1) * (sizeof (asymbol *));
  if (VAR_1 > 0)
    VAR_2 -= sizeof (asymbol *);

  return VAR_2;
}
