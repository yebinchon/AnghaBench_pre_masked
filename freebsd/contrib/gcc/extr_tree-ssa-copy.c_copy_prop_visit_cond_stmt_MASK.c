
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum ssa_prop_result { ____Placeholder_ssa_prop_result } ssa_prop_result ;
typedef TYPE_3__* edge ;
typedef int basic_block ;
struct TYPE_8__ {TYPE_2__* dest; TYPE_1__* src; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int index; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static enum ssa_prop_result
FUNC_10 (tree VAR_7, edge *VAR_8)
{
  enum ssa_prop_result VAR_9;
  tree VAR_10;

  VAR_10 = FUNC_1 (VAR_7);
  VAR_9 = VAR_2;



  if (FUNC_0 (VAR_10)
      && FUNC_2 (FUNC_3 (VAR_10, 0)) == VAR_0
      && FUNC_2 (FUNC_3 (VAR_10, 1)) == VAR_0)
    {
      tree VAR_11 = FUNC_8 (FUNC_3 (VAR_10, 0));
      tree VAR_12 = FUNC_8 (FUNC_3 (VAR_10, 1));


      if (VAR_5 && (VAR_6 & VAR_3))
 {
   FUNC_7 (VAR_5, "Trying to determine truth value of ");
   FUNC_7 (VAR_5, "predicate ");
   FUNC_9 (VAR_5, VAR_10, 0);
 }



      if (VAR_11 == VAR_12)
 {
   tree VAR_13 = FUNC_6 (FUNC_2 (VAR_10), VAR_4,
       VAR_11, VAR_12);
   if (VAR_13)
     {
       basic_block VAR_14 = FUNC_4 (VAR_7);
       *VAR_8 = FUNC_5 (VAR_14, VAR_13);
       if (*VAR_8)
  VAR_9 = VAR_1;
     }
 }
    }

  if (VAR_5 && (VAR_6 & VAR_3) && *VAR_8)
    FUNC_7 (VAR_5, "\nConditional will always take edge %d->%d\n",
      (*VAR_8)->src->index, (*VAR_8)->dest->index);

  return VAR_9;
}
