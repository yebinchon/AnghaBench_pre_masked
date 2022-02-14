
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_26__ {TYPE_8__* ref; } ;
struct TYPE_24__ {TYPE_6__* elements; int idx; } ;
struct TYPE_22__ {int dim; struct coff_type* array_of; } ;
struct TYPE_21__ {TYPE_3__* ref; } ;
struct TYPE_19__ {TYPE_1__* elements; int idx; } ;
struct TYPE_16__ {TYPE_11__* parameters; struct coff_type* function_returns; } ;
struct TYPE_14__ {struct coff_type* points_to; } ;
struct TYPE_17__ {TYPE_9__ aenumref; TYPE_7__ aenumdef; TYPE_5__ array; TYPE_4__ astructref; TYPE_2__ astructdef; TYPE_12__ function; TYPE_10__ pointer; int basic; } ;
struct coff_type {int type; int size; TYPE_13__ u; } ;
struct coff_symbol {struct coff_symbol* next; } ;
struct coff_sfile {int dummy; } ;
struct IT_dpt {int neg; int dunno; } ;
struct IT_dfp {int end; int neg; int nparams; int spare; } ;
struct IT_den {int end; int neg; int spare; } ;
struct IT_dds {int end; int neg; int spare; } ;
struct IT_dbt {int bitsize; int neg; void* sid; void* fptype; void* sign; void* btype; } ;
struct IT_dar {int dims; int* max; int* min; int neg; int length; int * min_variable; int * max_variable; int * spare; int * subtype; int * variable; void* minspare; void* maxspare; } ;
struct TYPE_25__ {int number; } ;
struct TYPE_23__ {struct coff_symbol* vars_head; } ;
struct TYPE_20__ {int number; } ;
struct TYPE_18__ {struct coff_symbol* vars_head; } ;
struct TYPE_15__ {struct coff_symbol* vars_head; int nvars; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 () ;
 int VAR_17 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,struct IT_dar*) ;
 int FUNC_4 (int ,struct IT_dbt*) ;
 int FUNC_5 (int ,struct IT_dds*) ;
 int FUNC_6 (int ,struct IT_den*) ;
 int FUNC_7 (int ,struct IT_dfp*) ;
 int FUNC_8 (int ,struct IT_dpt*) ;
 int FUNC_9 (struct coff_sfile*,int ,struct coff_symbol*,int) ;

__attribute__((used)) static void
FUNC_10 (struct coff_sfile *VAR_18, struct coff_symbol *VAR_19,
    struct coff_type *VAR_20, int VAR_21)
{
  switch (VAR_20->type)
    {
    case 130:
    case 135:
      {
 struct IT_dbt VAR_22;

 switch (VAR_20->u.basic)
   {
   case 143:
   case 137:
     VAR_22.btype = VAR_7;
     VAR_22.sign = VAR_6;
     VAR_22.fptype = VAR_10;
     break;

   case 149:
     VAR_22.btype = VAR_0;
     VAR_22.sign = VAR_6;
     VAR_22.fptype = VAR_10;
     break;

   case 142:
   case 146:
   case 144:
     VAR_22.btype = VAR_3;
     VAR_22.sign = VAR_12;
     VAR_22.fptype = VAR_10;
     break;

   case 147:
     VAR_22.btype = VAR_2;
     VAR_22.fptype = VAR_11;
     break;

   case 148:
     VAR_22.btype = VAR_2;
     VAR_22.fptype = VAR_8;
     break;

   case 145:
     VAR_22.btype = VAR_2;
     VAR_22.fptype = VAR_9;
     break;

   case 141:
     VAR_22.btype = VAR_0;
     VAR_22.sign = VAR_13;
     VAR_22.fptype = VAR_10;
     break;

   case 138:
   case 140:
   case 139:
     VAR_22.btype = VAR_3;
     VAR_22.sign = VAR_13;
     VAR_22.fptype = VAR_10;
     break;
   }

 VAR_22.bitsize = VAR_20->size;
 VAR_22.neg = 0x1001;
 FUNC_4 (VAR_17, &VAR_22);
 break;
      }

    case 131:
      {
 struct IT_dpt VAR_23;

 VAR_23.dunno = 0;
 FUNC_10 (VAR_18, VAR_19, VAR_20->u.pointer.points_to, VAR_21 + 1);
 VAR_23.neg = 0x1001;
 FUNC_8 (VAR_17, &VAR_23);
 break;
      }

    case 132:
      {
 struct IT_dfp VAR_24;
 struct coff_symbol *VAR_25;

 VAR_24.end = 0;
 VAR_24.spare = 0;
 VAR_24.nparams = VAR_20->u.function.parameters->nvars;
 VAR_24.neg = 0x1001;

 FUNC_10 (VAR_18, VAR_19, VAR_20->u.function.function_returns, VAR_21 + 1);

 FUNC_7 (VAR_17, &VAR_24);

 for (VAR_25 = VAR_20->u.function.parameters->vars_head;
      VAR_25;
      VAR_25 = VAR_25->next)
   FUNC_9 (VAR_18, 0, VAR_25, VAR_21);

 VAR_24.end = 1;
 FUNC_7 (VAR_17, &VAR_24);
 break;
      }

    case 129:
      {
 struct IT_dbt VAR_26;
 struct IT_dds VAR_27;
 struct coff_symbol *VAR_28;

 VAR_27.spare = 0;
 VAR_26.btype = VAR_4;
 VAR_26.bitsize = VAR_20->size;
 VAR_26.sign = VAR_14;
 VAR_26.fptype = VAR_10;
 VAR_26.sid = FUNC_1 (VAR_20->u.astructdef.idx);
 VAR_26.neg = 0x1001;
 FUNC_4 (VAR_17, &VAR_26);
 VAR_27.end = 0;
 VAR_27.neg = 0x1001;
 FUNC_5 (VAR_17, &VAR_27);

 for (VAR_28 = VAR_20->u.astructdef.elements->vars_head;
      VAR_28;
      VAR_28 = VAR_28->next)
   FUNC_9 (VAR_18, 0, VAR_28, VAR_21 + 1);

 VAR_27.end = 1;
 FUNC_5 (VAR_17, &VAR_27);

      }
      break;

    case 128:
      {
 struct IT_dbt VAR_29;

 VAR_29.btype = VAR_5;
 VAR_29.bitsize = VAR_20->size;
 VAR_29.sign = VAR_14;
 VAR_29.fptype = VAR_10;

 if (VAR_20->u.astructref.ref)
   VAR_29.sid = FUNC_1 (VAR_20->u.astructref.ref->number);
 else
   VAR_29.sid = 0;

 VAR_29.neg = 0x1001;
 FUNC_4 (VAR_17, &VAR_29);
      }
      break;

    case 136:
      {
 struct IT_dar VAR_30;
 int VAR_31;
 int VAR_32 = 1;

 VAR_30.dims = VAR_32;
 VAR_30.variable = FUNC_2 (VAR_32);
 VAR_30.subtype = FUNC_2 (VAR_32);
 VAR_30.spare = FUNC_2 (VAR_32);
 VAR_30.max_variable = FUNC_2 (VAR_32);
 VAR_30.maxspare = FUNC_2 (VAR_32);
 VAR_30.max = FUNC_2 (VAR_32);
 VAR_30.min_variable = FUNC_2 (VAR_32);
 VAR_30.min = FUNC_2 (VAR_32);
 VAR_30.minspare = FUNC_2 (VAR_32);
 VAR_30.neg = 0x1001;
 VAR_30.length = VAR_20->size / VAR_20->u.array.dim;

 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
   {
     VAR_30.variable[VAR_31] = VAR_16;
     VAR_30.subtype[VAR_31] = VAR_15;
     VAR_30.spare[VAR_31] = 0;
     VAR_30.max_variable[VAR_31] = 0;
     VAR_30.max[VAR_31] = VAR_20->u.array.dim;
     VAR_30.min_variable[VAR_31] = 0;
     VAR_30.min[VAR_31] = 1;
   }
 FUNC_10 (VAR_18, VAR_19, VAR_20->u.array.array_of, VAR_21 + 1);
 FUNC_3 (VAR_17, &VAR_30);
      }
      break;

    case 134:
      {
 struct IT_dbt VAR_33;
 struct IT_den VAR_34;
 struct coff_symbol *VAR_35;

 VAR_33.btype = VAR_1;
 VAR_33.bitsize = VAR_20->size;
 VAR_33.sign = VAR_14;
 VAR_33.fptype = VAR_10;
 VAR_33.sid = FUNC_1 (VAR_20->u.aenumdef.idx);
 VAR_33.neg = 0x1001;
 FUNC_4 (VAR_17, &VAR_33);

 VAR_34.end = 0;
 VAR_34.neg = 0x1001;
 VAR_34.spare = 0;
 FUNC_6 (VAR_17, &VAR_34);

 for (VAR_35 = VAR_20->u.aenumdef.elements->vars_head;
      VAR_35;
      VAR_35 = VAR_35->next)
   FUNC_9 (VAR_18, 0, VAR_35, VAR_21 + 1);

 VAR_34.end = 1;
 FUNC_6 (VAR_17, &VAR_34);
      }
      break;

    case 133:
      {
 struct IT_dbt VAR_36;

 VAR_36.btype = VAR_5;
 VAR_36.bitsize = VAR_20->size;
 VAR_36.sign = VAR_14;
 VAR_36.fptype = VAR_10;
 VAR_36.sid = FUNC_1 (VAR_20->u.aenumref.ref->number);
 VAR_36.neg = 0x1001;
 FUNC_4 (VAR_17, &VAR_36);
      }
      break;

    default:
      FUNC_0 ();
    }
}
