
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * the_bfd; scalar_t__ section; } ;
struct TYPE_5__ {TYPE_2__ symbol; int done_lineno; int * lineno; scalar_t__ native; } ;
typedef TYPE_1__ coff_symbol_type ;
typedef int bfd_size_type ;
typedef int bfd ;
typedef TYPE_2__ asymbol ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

asymbol *
FUNC_1 (bfd *VAR_1)
{
  bfd_size_type VAR_2 = sizeof (coff_symbol_type);
  coff_symbol_type *VAR_3 = FUNC_0 (VAR_1, VAR_2);

  if (VAR_3 == ((void*)0))
    return ((void*)0);
  VAR_3->symbol.section = 0;
  VAR_3->native = 0;
  VAR_3->lineno = ((void*)0);
  VAR_3->done_lineno = VAR_0;
  VAR_3->symbol.the_bfd = VAR_1;

  return & VAR_3->symbol;
}
