
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct internal_syment {int n_value; int n_scnum; int n_sclass; } ;
struct coff_where {int offset; int bitoffset; void* where; int * section; int bitsize; } ;
struct TYPE_14__ {int * sections; } ;
struct TYPE_8__ {int x_size; } ;
struct TYPE_9__ {TYPE_1__ x_lnsz; } ;
struct TYPE_10__ {TYPE_2__ x_misc; } ;
struct TYPE_11__ {TYPE_3__ x_sym; } ;
struct TYPE_12__ {TYPE_4__ auxent; struct internal_syment syment; } ;
struct TYPE_13__ {TYPE_5__ u; } ;
 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_6__* VAR_9 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct coff_where *
FUNC_2 (int VAR_10)
{
  struct internal_syment *VAR_11 = &VAR_9[VAR_10].u.syment;
  struct coff_where *VAR_12 =
    (struct coff_where *) (FUNC_1 (sizeof (struct coff_where)));
  VAR_12->offset = VAR_11->n_value;

  if (VAR_11->n_scnum == -1)
    VAR_11->n_scnum = 0;

  switch (VAR_11->n_sclass)
    {
    case 138:
      VAR_12->where = VAR_2;
      VAR_12->offset = VAR_11->n_value / 8;
      VAR_12->bitoffset = VAR_11->n_value % 8;
      VAR_12->bitsize = VAR_9[VAR_10 + 1].u.auxent.x_sym.x_misc.x_lnsz.x_size;
      break;
    case 136:
      VAR_12->where = VAR_1;
      break;
    case 135:
    case 134:
      VAR_12->where = VAR_2;
      break;
    case 142:
    case 143:
      VAR_12->where = VAR_5;
      break;
    case 140:
    case 131:
    case 139:
    case 137:
      VAR_12->where = VAR_3;
      VAR_12->section = &VAR_8->sections[VAR_11->n_scnum];
      break;
    case 133:
    case 132:
      VAR_12->where = VAR_4;
      break;
    case 141:
      VAR_12->where = VAR_0;
      break;
    case 130:
    case 128:
      VAR_12->where = VAR_6;
      break;
    case 129:
      VAR_12->where = VAR_7;
      break;
    default:
      FUNC_0 ();
      break;
    }
  return VAR_12;
}
