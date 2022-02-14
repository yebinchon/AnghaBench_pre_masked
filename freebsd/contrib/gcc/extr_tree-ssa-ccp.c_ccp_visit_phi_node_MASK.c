
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_13__ {int lattice_val; void* mem_ref; void* value; } ;
typedef TYPE_3__ prop_value_t ;
typedef enum ssa_prop_result { ____Placeholder_ssa_prop_result } ssa_prop_result ;
typedef TYPE_4__* edge ;
struct TYPE_14__ {int flags; TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {int index; } ;



 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*,int) ;
 TYPE_4__* FUNC_1 (void*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_4 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__,char*,TYPE_3__) ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 TYPE_3__* FUNC_9 (void*,int) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (scalar_t__,void*,int) ;
 scalar_t__ FUNC_12 (void*,TYPE_3__) ;

__attribute__((used)) static enum ssa_prop_result
FUNC_13 (tree VAR_9)
{
  int VAR_10;
  prop_value_t *VAR_11, VAR_12;

  if (VAR_7 && (VAR_8 & VAR_5))
    {
      FUNC_6 (VAR_7, "\nVisiting PHI node: ");
      FUNC_11 (VAR_7, VAR_9, VAR_8);
    }

  VAR_11 = FUNC_9 (FUNC_3 (VAR_9), 0);
  switch (VAR_11->lattice_val)
    {
    case 128:
      return VAR_4;

    case 132:
      VAR_12 = *VAR_11;
      break;

    case 129:






      FUNC_7 (VAR_6);



    case 131:
    case 130:
      VAR_12.lattice_val = 131;
      VAR_12.value = VAR_1;
      VAR_12.mem_ref = VAR_1;
      break;

    default:
      FUNC_8 ();
    }

  for (VAR_10 = 0; VAR_10 < FUNC_2 (VAR_9); VAR_10++)
    {


      edge VAR_13 = FUNC_1 (VAR_9, VAR_10);

      if (VAR_7 && (VAR_8 & VAR_5))
 {
   FUNC_6 (VAR_7,
       "\n    Argument #%d (%d -> %d %sexecutable)\n",
       VAR_10, VAR_13->src->index, VAR_13->dest->index,
       (VAR_13->flags & VAR_0) ? "" : "not ");
 }



      if (VAR_13->flags & VAR_0)
 {
   tree VAR_14 = FUNC_0 (VAR_9, VAR_10);
   prop_value_t VAR_15;

   if (FUNC_10 (VAR_14))
     {
       VAR_15.lattice_val = 132;
       VAR_15.value = VAR_14;
       VAR_15.mem_ref = VAR_1;
     }
   else
     VAR_15 = *(FUNC_9 (VAR_14, 1));

   FUNC_4 (&VAR_12, &VAR_15);

   if (VAR_7 && (VAR_8 & VAR_5))
     {
       FUNC_6 (VAR_7, "\t");
       FUNC_11 (VAR_7, VAR_14, VAR_8);
       FUNC_5 (VAR_7, "\tValue: ", VAR_15);
       FUNC_6 (VAR_7, "\n");
     }

   if (VAR_12.lattice_val == 128)
     break;
 }
    }

  if (VAR_7 && (VAR_8 & VAR_5))
    {
      FUNC_5 (VAR_7, "\n    PHI node value: ", VAR_12);
      FUNC_6 (VAR_7, "\n\n");
    }


  if (VAR_6
      && VAR_11->lattice_val == 129
      && VAR_12.lattice_val == 131)
    return VAR_3;


  if (FUNC_12 (FUNC_3 (VAR_9), VAR_12))
    {
      if (VAR_12.lattice_val == 128)
 return VAR_4;
      else
 return VAR_2;
    }
  else
    return VAR_3;
}
