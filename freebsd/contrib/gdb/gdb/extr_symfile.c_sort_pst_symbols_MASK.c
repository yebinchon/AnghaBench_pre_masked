
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct partial_symtab {int n_global_syms; scalar_t__ globals_offset; TYPE_2__* objfile; } ;
struct partial_symbol {int dummy; } ;
struct TYPE_3__ {scalar_t__ list; } ;
struct TYPE_4__ {TYPE_1__ global_psymbols; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int,int ) ;

void
FUNC_1 (struct partial_symtab *VAR_1)
{


  FUNC_0 (VAR_1->objfile->global_psymbols.list + VAR_1->globals_offset,
  VAR_1->n_global_syms, sizeof (struct partial_symbol *),
  VAR_0);
}
