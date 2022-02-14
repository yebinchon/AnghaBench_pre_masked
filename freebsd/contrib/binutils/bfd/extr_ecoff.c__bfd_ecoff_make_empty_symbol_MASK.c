
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * the_bfd; int * section; } ;
struct TYPE_5__ {TYPE_2__ symbol; int * native; int local; int * fdr; } ;
typedef TYPE_1__ ecoff_symbol_type ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef TYPE_2__ asymbol ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

asymbol *
FUNC_1 (bfd *VAR_1)
{
  ecoff_symbol_type *VAR_2;
  bfd_size_type VAR_3 = sizeof (ecoff_symbol_type);

  VAR_2 = FUNC_0 (VAR_1, VAR_3);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_2->symbol.section = ((void*)0);
  VAR_2->fdr = ((void*)0);
  VAR_2->local = VAR_0;
  VAR_2->native = ((void*)0);
  VAR_2->symbol.the_bfd = VAR_1;
  return &VAR_2->symbol;
}
