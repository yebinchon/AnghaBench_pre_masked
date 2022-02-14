
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * _n_nptr; } ;
struct internal_syment {int n_numaux; TYPE_2__ _n; } ;
struct coff_symbol {int number; TYPE_7__* type; TYPE_6__* where; int visible; struct coff_symbol* next; struct coff_symbol* next_in_ofile_list; TYPE_8__* sfile; int name; } ;
struct coff_scope {int nvars; struct coff_symbol* vars_tail; struct coff_symbol* vars_head; } ;
struct coff_isection {int init; TYPE_3__* parent; scalar_t__ high; scalar_t__ low; } ;
struct TYPE_16__ {struct coff_isection* section; } ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ size; } ;
struct TYPE_14__ {scalar_t__ where; TYPE_3__* section; scalar_t__ offset; } ;
struct TYPE_13__ {struct coff_symbol* symbol_list_tail; struct coff_symbol* symbol_list_head; } ;
struct TYPE_9__ {struct internal_syment syment; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_11__ {int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* VAR_3 ;
 TYPE_7__* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (int) ;
 struct coff_symbol* FUNC_3 () ;
 struct coff_symbol* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 struct coff_symbol** VAR_8 ;

__attribute__((used)) static int
FUNC_4 (int VAR_9, struct coff_scope *VAR_10)
{
  static int VAR_11;
  struct internal_syment *VAR_12 = &VAR_7[VAR_9].u.syment;


  struct coff_symbol *VAR_13 = FUNC_3 ();

  VAR_13->number = ++VAR_11;
  VAR_13->name = VAR_12->_n._n_nptr[1];
  VAR_13->sfile = VAR_3;

  if (VAR_5 >= 0)
    {
      if (VAR_6->symbol_list_tail)
 VAR_6->symbol_list_tail->next_in_ofile_list = VAR_13;
      else
 VAR_6->symbol_list_head = VAR_13;
      VAR_6->symbol_list_tail = VAR_13;

    }
  if (VAR_10->vars_tail)
    VAR_10->vars_tail->next = VAR_13;
  else
    VAR_10->vars_head = VAR_13;

  VAR_10->vars_tail = VAR_13;
  VAR_10->nvars++;
  VAR_13->type = FUNC_0 (VAR_9);
  VAR_13->where = FUNC_2 (VAR_9);
  VAR_13->visible = FUNC_1 (VAR_9);

  VAR_8[VAR_9] = VAR_13;



  if (VAR_13->where->where == VAR_2
      && VAR_13->type->type == VAR_1)
    {
      struct coff_isection *VAR_14 = VAR_3->section + VAR_13->where->section->number;

      if (!VAR_14->init)
 {
   VAR_14->low = VAR_13->where->offset;
   VAR_14->high = VAR_13->where->offset + VAR_13->type->size;
   VAR_14->init = 1;
   VAR_14->parent = VAR_13->where->section;
 }

    }

  if (VAR_13->type->type == VAR_0)
    VAR_4 = VAR_13;

  return VAR_9 + VAR_12->n_numaux + 1;
}
