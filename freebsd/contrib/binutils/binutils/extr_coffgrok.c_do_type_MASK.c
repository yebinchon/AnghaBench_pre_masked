
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_33__ {int* x_dimen; } ;
struct TYPE_37__ {TYPE_1__ x_ary; } ;
struct TYPE_32__ {int x_size; } ;
struct TYPE_34__ {TYPE_19__ x_lnsz; } ;
struct TYPE_26__ {int p; } ;
struct TYPE_35__ {TYPE_2__ x_fcnary; TYPE_20__ x_misc; TYPE_13__ x_tagndx; } ;
struct TYPE_43__ {int x_scnlen; } ;
union internal_auxent {TYPE_21__ x_sym; TYPE_8__ x_scn; } ;
struct TYPE_40__ {int * _n_nptr; } ;
struct internal_syment {int n_type; TYPE_5__ _n; int n_numaux; int n_sclass; } ;
struct TYPE_41__ {int code; int lines; void* parameters; struct coff_type* function_returns; } ;
struct TYPE_39__ {struct coff_type* points_to; } ;
struct TYPE_38__ {int dim; struct coff_type* array_of; } ;
struct TYPE_30__ {void* elements; } ;
struct TYPE_29__ {TYPE_15__* ref; } ;
struct TYPE_24__ {TYPE_12__* ref; } ;
struct TYPE_23__ {int isstruct; int idx; void* elements; } ;
struct TYPE_31__ {int basic; TYPE_6__ function; TYPE_4__ pointer; TYPE_3__ array; TYPE_17__ aenumdef; TYPE_16__ aenumref; TYPE_11__ astructref; TYPE_10__ astructdef; } ;
struct coff_type {int size; TYPE_18__ u; void* type; } ;
struct TYPE_44__ {int size; } ;
struct TYPE_42__ {union internal_auxent auxent; struct internal_syment syment; } ;
struct TYPE_36__ {TYPE_7__ u; } ;
struct TYPE_28__ {TYPE_14__* type; } ;
struct TYPE_27__ {int size; } ;
struct TYPE_25__ {TYPE_9__* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 () ;
 struct coff_type* VAR_17 ;
 struct coff_type* VAR_18 ;
 struct coff_type* VAR_19 ;
 TYPE_22__* VAR_20 ;
 void** VAR_21 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static
struct coff_type *
FUNC_4 (int VAR_22)
{
  struct internal_syment *VAR_23 = &VAR_20[VAR_22].u.syment;
  union internal_auxent *VAR_24 = &VAR_20[VAR_22 + 1].u.auxent;
  struct coff_type *VAR_25 =
    (struct coff_type *) FUNC_3 (sizeof (struct coff_type));
  int VAR_26 = VAR_23->n_type;
  int VAR_27 = 0;
  int VAR_28 = 0;

  VAR_25->type = VAR_9;
  VAR_25->u.basic = VAR_26 & 0xf;

  switch (VAR_26 & 0xf)
    {
    case 136:
    case 128:
      if (VAR_23->n_numaux && VAR_23->n_sclass == VAR_0)
 {

   VAR_25->type = VAR_14;
   VAR_25->size = VAR_24->x_scn.x_scnlen;
 }
      else
 {
   if (VAR_26 == 0)
     {

       VAR_25->size = VAR_4;
       VAR_25->u.basic = 132;
     }
   else
     {

       VAR_25->size = 0;
     }
 }
      break;


      break;
    case 133:
    case 143:
      VAR_25->size = 1;
      break;
    case 129:
    case 135:
      VAR_25->size = VAR_7;
      break;
    case 132:
    case 139:
      VAR_25->size = VAR_4;
      break;
    case 131:
    case 138:
      VAR_25->size = VAR_5;
      break;
    case 140:
      VAR_25->size = VAR_3;
      break;
    case 142:
      VAR_25->size = VAR_2;
      break;
    case 134:
    case 130:
      if (VAR_23->n_numaux)
 {
   if (VAR_24->x_sym.x_tagndx.p)
     {

       VAR_25->type = VAR_16;
       VAR_25->u.astructref.ref = VAR_21[FUNC_0 (VAR_24->x_sym.x_tagndx.p)];
       VAR_25->size = VAR_25->u.astructref.ref ?
  VAR_25->u.astructref.ref->type->size : 0;
     }
   else
     {

       VAR_19 = VAR_25;
       VAR_25->type = VAR_15;
       VAR_25->u.astructdef.elements = FUNC_2 ();
       VAR_25->u.astructdef.idx = 0;
       VAR_25->u.astructdef.isstruct = (VAR_26 & 0xf) == 134;
       VAR_25->size = VAR_24->x_sym.x_misc.x_lnsz.x_size;
     }
 }
      else
 {

   VAR_25->type = VAR_16;
   VAR_25->u.astructref.ref = 0;
   VAR_25->size = 0;
 }
      break;
    case 141:
      if (VAR_24->x_sym.x_tagndx.p)
 {

   VAR_25->type = VAR_11;
   VAR_25->u.aenumref.ref = VAR_21[FUNC_0 (VAR_24->x_sym.x_tagndx.p)];
   VAR_25->size = VAR_25->u.aenumref.ref->type->size;
 }
      else
 {

   VAR_17 = VAR_25;
   VAR_25->type = VAR_10;
   VAR_25->u.aenumdef.elements = FUNC_2 ();
   VAR_25->size = VAR_24->x_sym.x_misc.x_lnsz.x_size;
 }
      break;
    case 137:
      break;
    }

  for (VAR_27 = 5; VAR_27 >= 0; VAR_27--)
    {
      switch ((VAR_26 >> ((VAR_27 * 2) + 4)) & 0x3)
 {
 case 0:
   break;
 case 146:
   {
     struct coff_type *VAR_29 = ((struct coff_type *)
         FUNC_3 (sizeof (struct coff_type)));
     int VAR_30 = (VAR_28 < VAR_1
         ? VAR_24->x_sym.x_fcnary.x_ary.x_dimen[VAR_28]
         : 0);
     ++VAR_28;
     VAR_29->type = VAR_8;
     VAR_29->size = VAR_30 * VAR_25->size;
     VAR_29->u.array.dim = VAR_30;
     VAR_29->u.array.array_of = VAR_25;
     VAR_25 = VAR_29;
     break;
   }
 case 144:
   {
     struct coff_type *VAR_31 =
       (struct coff_type *) FUNC_3 (sizeof (struct coff_type));
     VAR_31->size = VAR_6;
     VAR_31->type = VAR_13;
     VAR_31->u.pointer.points_to = VAR_25;
     VAR_25 = VAR_31;
     break;
   }
 case 145:
   {
     struct coff_type *VAR_32
       = (struct coff_type *) FUNC_3 (sizeof (struct coff_type));
     VAR_32->size = 0;
     VAR_32->type = VAR_12;
     VAR_32->u.function.function_returns = VAR_25;
     VAR_32->u.function.parameters = FUNC_2 ();
     VAR_32->u.function.lines = FUNC_1 (VAR_22, VAR_23->_n._n_nptr[1]);
     VAR_32->u.function.code = 0;
     VAR_18 = VAR_32;
     VAR_25 = VAR_32;
     break;
   }
 }
    }
  return VAR_25;
}
