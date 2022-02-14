
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * the_bfd; } ;
struct TYPE_5__ {TYPE_2__ symbol; } ;
typedef TYPE_1__ elf_symbol_type ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef TYPE_2__ asymbol ;


 TYPE_1__* FUNC_0 (int *,int) ;

asymbol *
FUNC_1 (bfd *VAR_0)
{
  elf_symbol_type *VAR_1;
  bfd_size_type VAR_2 = sizeof (elf_symbol_type);

  VAR_1 = FUNC_0 (VAR_0, VAR_2);
  if (!VAR_1)
    return ((void*)0);
  else
    {
      VAR_1->symbol.the_bfd = VAR_0;
      return &VAR_1->symbol;
    }
}
