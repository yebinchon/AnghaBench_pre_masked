
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ type; void* min; void* max; int * equiv; int * member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ value_range_t ;
typedef void* tree ;
typedef enum ssa_prop_result { ____Placeholder_ssa_prop_result } ssa_prop_result ;
typedef TYPE_4__* edge ;
struct TYPE_17__ {int flags; TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_15__ {int index; } ;
struct TYPE_14__ {int index; } ;
typedef int TREE_OVERFLOW ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 TYPE_4__* FUNC_1 (void*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (void*,void*) ;
 void* FUNC_10 (void*) ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (scalar_t__,TYPE_3__*) ;
 int FUNC_13 (scalar_t__,char*,...) ;
 TYPE_3__* FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (void*) ;
 int FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,void*,int) ;
 int FUNC_20 (TYPE_3__*) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (void*,TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_24 (void*) ;
 scalar_t__ FUNC_25 (void*) ;
 int FUNC_26 (void*,void*) ;

__attribute__((used)) static enum ssa_prop_result
FUNC_27 (tree VAR_12)
{
  int VAR_13;
  tree VAR_14 = FUNC_3 (VAR_12);
  value_range_t *VAR_15 = FUNC_14 (VAR_14);
  value_range_t VAR_16 = { VAR_8, VAR_1, VAR_1, ((void*)0) };

  FUNC_11 (&VAR_16, VAR_15);

  if (VAR_10 && (VAR_11 & VAR_6))
    {
      FUNC_13 (VAR_10, "\nVisiting PHI node: ");
      FUNC_19 (VAR_10, VAR_12, VAR_11);
    }

  for (VAR_13 = 0; VAR_13 < FUNC_2 (VAR_12); VAR_13++)
    {
      edge VAR_17 = FUNC_1 (VAR_12, VAR_13);

      if (VAR_10 && (VAR_11 & VAR_6))
 {
   FUNC_13 (VAR_10,
       "\n    Argument #%d (%d -> %d %sexecutable)\n",
       VAR_13, VAR_17->src->index, VAR_17->dest->index,
       (VAR_17->flags & VAR_0) ? "" : "not ");
 }

      if (VAR_17->flags & VAR_0)
 {
   tree VAR_18 = FUNC_0 (VAR_12, VAR_13);
   value_range_t VAR_19;

   if (FUNC_5 (VAR_18) == VAR_2)
     VAR_19 = *(FUNC_14 (VAR_18));
   else
     {
       if (FUNC_15 (VAR_18))
  {
    VAR_18 = FUNC_10 (VAR_18);
    TREE_OVERFLOW (VAR_20) = 0;
  }

       VAR_19.type = VAR_7;
       VAR_19.min = VAR_18;
       VAR_19.max = VAR_18;
       VAR_19.equiv = ((void*)0);
     }

   if (VAR_10 && (VAR_11 & VAR_6))
     {
       FUNC_13 (VAR_10, "\t");
       FUNC_19 (VAR_10, VAR_18, VAR_11);
       FUNC_13 (VAR_10, "\n\tValue: ");
       FUNC_12 (VAR_10, &VAR_19);
       FUNC_13 (VAR_10, "\n");
     }

   FUNC_23 (&VAR_16, &VAR_19);

   if (VAR_16.type == VAR_9)
     break;
 }
    }

  if (VAR_16.type == VAR_9)
    goto varying;




  if (VAR_15->type == VAR_7 && VAR_16.type == VAR_7)
    {
      if (!FUNC_4 (FUNC_6 (VAR_14)))
 {
   int VAR_21 = FUNC_9 (VAR_15->min, VAR_16.min);
   int VAR_22 = FUNC_9 (VAR_15->max, VAR_16.max);






   if (VAR_21 > 0 || VAR_21 < 0)
     {


       if (FUNC_24 (VAR_16.max))
  goto varying;

       if (!FUNC_16 (FUNC_6 (VAR_16.min))
    || !FUNC_26 (VAR_14, VAR_12))
  VAR_16.min = FUNC_8 (FUNC_6 (VAR_16.min));
       else if (FUNC_21 (FUNC_6 (VAR_16.min)))
  VAR_16.min =
    FUNC_17 (FUNC_6 (VAR_16.min));
       else
  goto varying;
     }



   if (VAR_22 < 0 || VAR_22 > 0)
     {


       if (FUNC_25 (VAR_16.min))
  goto varying;

       if (!FUNC_16 (FUNC_6 (VAR_16.max))
    || !FUNC_26 (VAR_14, VAR_12))
  VAR_16.max = FUNC_7 (FUNC_6 (VAR_16.max));
       else if (FUNC_21 (FUNC_6 (VAR_16.max)))
  VAR_16.max =
    FUNC_18 (FUNC_6 (VAR_16.max));
       else
  goto varying;
     }
 }
    }



  if (FUNC_22 (VAR_14, &VAR_16))
    return VAR_3;


  return VAR_4;


varying:
  FUNC_20 (VAR_15);
  return VAR_5;
}
