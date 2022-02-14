
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int elements; } ;
struct TYPE_22__ {TYPE_8__* ref; } ;
struct TYPE_20__ {TYPE_6__* ref; } ;
struct TYPE_18__ {int elements; } ;
struct TYPE_17__ {int code; int parameters; int lines; struct coff_type* function_returns; } ;
struct TYPE_16__ {int dim; struct coff_type* array_of; } ;
struct TYPE_15__ {struct coff_type* points_to; } ;
struct TYPE_14__ {int address; int size; } ;
struct TYPE_13__ {int basic; TYPE_10__ aenumdef; TYPE_9__ astructref; TYPE_7__ aenumref; TYPE_5__ astructdef; TYPE_4__ function; TYPE_3__ array; TYPE_2__ pointer; TYPE_1__ asecdef; } ;
struct coff_type {int size; int type; TYPE_11__ u; } ;
struct TYPE_21__ {char* name; } ;
struct TYPE_19__ {char* name; } ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (struct coff_type *VAR_0)
{
  FUNC_5 (1);
  FUNC_4 ("size %d ", VAR_0->size);

  switch (VAR_0->type)
    {
    case 130:
      FUNC_4 ("section definition at %x size %x\n",
       VAR_0->u.asecdef.address,
       VAR_0->u.asecdef.size);
      FUNC_3 ();
      break;
    case 131:
      FUNC_4 ("pointer to");
      FUNC_3 ();
      FUNC_6 (VAR_0->u.pointer.points_to);
      break;
    case 136:
      FUNC_4 ("array [%d] of", VAR_0->u.array.dim);
      FUNC_3 ();
      FUNC_6 (VAR_0->u.array.array_of);
      break;
    case 132:
      FUNC_4 ("function returning");
      FUNC_3 ();
      FUNC_6 (VAR_0->u.function.function_returns);
      FUNC_1 (VAR_0->u.function.lines);
      FUNC_4 ("arguments");
      FUNC_3 ();
      FUNC_2 (VAR_0->u.function.parameters);
      FUNC_5 (0);
      FUNC_4 ("code");
      FUNC_3 ();
      FUNC_2 (VAR_0->u.function.code);
      FUNC_5(0);
      break;
    case 129:
      FUNC_4 ("structure definition");
      FUNC_3 ();
      FUNC_2 (VAR_0->u.astructdef.elements);
      break;
    case 128:
      if (!VAR_0->u.aenumref.ref)
 FUNC_4 ("structure ref to UNKNOWN struct");
      else
 FUNC_4 ("structure ref to %s", VAR_0->u.aenumref.ref->name);
      break;
    case 133:
      FUNC_4 ("enum ref to %s", VAR_0->u.astructref.ref->name);
      break;
    case 134:
      FUNC_4 ("enum definition");
      FUNC_3 ();
      FUNC_2 (VAR_0->u.aenumdef.elements);
      break;
    case 135:
      switch (VAR_0->u.basic)
 {
 case 145:
   FUNC_4 ("NULL");
   break;
 case 137:
   FUNC_4 ("VOID");
   break;
 case 153:
   FUNC_4 ("CHAR");
   break;
 case 144:
   FUNC_4 ("SHORT");
   break;
 case 149:
   FUNC_4 ("INT ");
   break;
 case 147:
   FUNC_4 ("LONG");
   break;
 case 150:
   FUNC_4 ("FLOAT");
   break;
 case 152:
   FUNC_4 ("DOUBLE");
   break;
 case 143:
   FUNC_4 ("STRUCT");
   break;
 case 139:
   FUNC_4 ("UNION");
   break;
 case 151:
   FUNC_4 ("ENUM");
   break;
 case 146:
   FUNC_4 ("MOE ");
   break;
 case 142:
   FUNC_4 ("UCHAR");
   break;
 case 138:
   FUNC_4 ("USHORT");
   break;
 case 141:
   FUNC_4 ("UINT");
   break;
 case 140:
   FUNC_4 ("ULONG");
   break;
 case 148:
   FUNC_4 ("LNGDBL");
   break;
 default:
   FUNC_0 ();
 }
    }
  FUNC_3 ();
  FUNC_5 (-1);
}
