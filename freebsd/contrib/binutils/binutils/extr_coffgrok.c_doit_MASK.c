
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_20__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_33__ {char** _n_nptr; } ;
struct internal_syment {int n_sclass; int n_numaux; scalar_t__ n_value; scalar_t__ n_scnum; TYPE_4__ _n; } ;
struct coff_sfile {char* name; struct coff_sfile* next; TYPE_12__* scope; struct coff_isection* section; } ;
struct coff_ofile {scalar_t__ sections; scalar_t__ nsources; struct coff_sfile* source_tail; struct coff_sfile* source_head; scalar_t__ symbol_list_head; scalar_t__ symbol_list_tail; } ;
struct coff_isection {int dummy; } ;
struct TYPE_37__ {TYPE_12__* elements; } ;
struct TYPE_38__ {TYPE_8__ astructdef; } ;
struct TYPE_34__ {TYPE_12__* parameters; } ;
struct TYPE_35__ {TYPE_5__ function; } ;
struct TYPE_36__ {TYPE_6__ u; } ;
struct TYPE_31__ {TYPE_12__* code; } ;
struct TYPE_32__ {TYPE_2__ function; } ;
struct TYPE_30__ {int section_count; } ;
struct TYPE_29__ {struct internal_syment syment; } ;
struct TYPE_21__ {TYPE_12__* elements; } ;
struct TYPE_22__ {TYPE_10__ aenumdef; } ;
struct TYPE_28__ {TYPE_11__ u; } ;
struct TYPE_27__ {TYPE_7__* type; } ;
struct TYPE_26__ {TYPE_3__ u; } ;
struct TYPE_25__ {TYPE_9__ u; } ;
struct TYPE_24__ {TYPE_1__ u; } ;
struct TYPE_23__ {scalar_t__ offset; int size; scalar_t__ sec; } ;
 TYPE_20__* VAR_0 ;
 int FUNC_0 () ;
 struct coff_sfile* VAR_1 ;
 int FUNC_1 (int,TYPE_12__*) ;
 int FUNC_2 (struct coff_ofile*) ;
 int FUNC_3 (struct coff_ofile*) ;
 TYPE_12__* VAR_2 ;
 TYPE_17__* VAR_3 ;
 TYPE_16__* VAR_4 ;
 TYPE_15__* VAR_5 ;
 TYPE_14__* VAR_6 ;
 struct coff_ofile* VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 TYPE_13__* VAR_9 ;
 TYPE_12__* VAR_10 ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static
struct coff_ofile *
FUNC_8 (void)
{
  int VAR_11;
  int VAR_12 = 0;
  struct coff_ofile *VAR_13 =
    (struct coff_ofile *) FUNC_7 (sizeof (struct coff_ofile));
  VAR_7 = VAR_13;
  VAR_13->source_head = 0;
  VAR_13->source_tail = 0;
  VAR_13->nsources = 0;
  VAR_13->symbol_list_tail = 0;
  VAR_13->symbol_list_head = 0;
  FUNC_2 (VAR_13);
  FUNC_5 (1);

  for (VAR_11 = 0; VAR_11 < VAR_8;)
    {
      struct internal_syment *VAR_14 = &VAR_9[VAR_11].u.syment;
      switch (VAR_14->n_sclass)
 {
 case 138:
   {

     struct coff_sfile *VAR_15 =
       (struct coff_sfile *) FUNC_7 (sizeof (struct coff_sfile));
     VAR_15->section = (struct coff_isection *) FUNC_6 (sizeof (struct coff_isection), VAR_0->section_count + 1);
     VAR_1 = VAR_15;
     VAR_15->name = VAR_14->_n._n_nptr[1];
     VAR_15->next = 0;

     if (VAR_12)
       {
  FUNC_4 ();
       }
     VAR_12 = 1;
     FUNC_5 (1);
     VAR_2 = VAR_15->scope = VAR_10;

     if (VAR_13->source_tail)
       VAR_13->source_tail->next = VAR_15;
     else
       VAR_13->source_head = VAR_15;
     VAR_13->source_tail = VAR_15;
     VAR_13->nsources++;
     VAR_11 += VAR_14->n_numaux + 1;
   }
   break;
 case 140:
   {
     char *VAR_16 = VAR_14->_n._n_nptr[1];
     if (VAR_16[1] == 'b')
       {

  FUNC_5 (0);
  VAR_5->u.function.code = VAR_10;
  VAR_10->sec = VAR_7->sections + VAR_14->n_scnum;
  VAR_10->offset = VAR_14->n_value;
       }
     else
       {
  VAR_10->size = VAR_14->n_value - VAR_10->offset + 1;
  FUNC_4 ();

       }
     VAR_11 += VAR_14->n_numaux + 1;
   }
   break;

 case 144:
   {
     char *VAR_17 = VAR_14->_n._n_nptr[1];
     if (VAR_17[1] == 'b')
       {

  FUNC_5 (1);
  VAR_10->sec = VAR_7->sections + VAR_14->n_scnum;
  VAR_10->offset = VAR_14->n_value;

       }
     else
       {
  VAR_10->size = VAR_14->n_value - VAR_10->offset + 1;
  FUNC_4 ();
       }
     VAR_11 += VAR_14->n_numaux + 1;
   }
   break;
 case 132:
 case 146:
   VAR_11 = FUNC_1 (VAR_11, VAR_4->type->u.function.parameters);
   break;
 case 135:
 case 134:
 case 139:
   VAR_11 = FUNC_1 (VAR_11, VAR_6->u.astructdef.elements);
   break;
 case 136:
   VAR_11 = FUNC_1 (VAR_11, VAR_3->u.aenumdef.elements);
   break;
 case 130:
 case 143:
 case 128:

   VAR_11 = FUNC_1 (VAR_11, VAR_10);
   break;
 case 141:
 case 137:
   VAR_11 = FUNC_1 (VAR_11, VAR_2);
   break;
 case 131:
 case 129:
 case 145:
 case 133:
   VAR_11 = FUNC_1 (VAR_11, VAR_10);
   break;
 default:
   FUNC_0 ();
 case 142:
   VAR_11 += VAR_14->n_numaux + 1;
   break;
 }
    }
  FUNC_3 (VAR_13);
  return VAR_13;
}
