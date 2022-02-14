
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ member_1; scalar_t__ member_2; scalar_t__ value; scalar_t__ mem_ref; int member_0; } ;
typedef TYPE_1__ prop_value_t ;
typedef enum ssa_prop_result { ____Placeholder_ssa_prop_result } ssa_prop_result ;
typedef TYPE_2__* edge ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 TYPE_2__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (scalar_t__,char*,...) ;
 TYPE_1__* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static enum ssa_prop_result
FUNC_14 (tree VAR_10)
{
  enum ssa_prop_result VAR_11;
  int VAR_12;
  tree VAR_13;
  prop_value_t VAR_14 = { 0, VAR_1, VAR_1 };

  VAR_13 = FUNC_3 (VAR_10);

  if (VAR_8 && (VAR_9 & VAR_6))
    {
      FUNC_7 (VAR_8, "\nVisiting PHI node: ");
      FUNC_11 (VAR_8, VAR_10, VAR_9);
      FUNC_7 (VAR_8, "\n\n");
    }

  for (VAR_12 = 0; VAR_12 < FUNC_2 (VAR_10); VAR_12++)
    {
      prop_value_t *VAR_15;
      tree VAR_16 = FUNC_0 (VAR_10, VAR_12);
      edge VAR_17 = FUNC_1 (VAR_10, VAR_12);



      if (!(VAR_17->flags & VAR_0))
 continue;




      if (FUNC_5 (VAR_16) != VAR_2 || FUNC_4 (VAR_16))
 {
   VAR_14.value = VAR_13;
   break;
 }






      if (FUNC_10 (VAR_16) > FUNC_10 (VAR_13))
 {
   VAR_14.value = VAR_13;
   break;
 }



      if (VAR_16 == VAR_13 || FUNC_9 (VAR_16) == VAR_13)
 continue;

      if (VAR_8 && (VAR_9 & VAR_6))
 {
   FUNC_7 (VAR_8, "\tArgument #%d: ", VAR_12);
   FUNC_6 (VAR_8, VAR_16);
   FUNC_7 (VAR_8, "\n");
 }

      VAR_15 = FUNC_8 (VAR_16);






      if (VAR_14.value == VAR_1)
 {
   VAR_14.value = VAR_16;
   VAR_14.mem_ref = VAR_15->mem_ref;
   continue;
 }






      if (FUNC_9 (VAR_14.value) != FUNC_9 (VAR_16)
   || (VAR_7
       && VAR_14.mem_ref
       && VAR_15->mem_ref
       && FUNC_13 (VAR_14.mem_ref, VAR_15->mem_ref) != 1))
 {
   VAR_14.value = VAR_13;
   break;
 }
    }

  if (VAR_14.value && FUNC_12 (VAR_13, VAR_14.value, VAR_14.mem_ref))
    VAR_11 = (VAR_14.value != VAR_13) ? VAR_3 : VAR_5;
  else
    VAR_11 = VAR_4;

  if (VAR_8 && (VAR_9 & VAR_6))
    {
      FUNC_7 (VAR_8, "\nPHI node ");
      FUNC_6 (VAR_8, VAR_13);
      FUNC_7 (VAR_8, "\nTelling the propagator to ");
      if (VAR_11 == VAR_3)
 FUNC_7 (VAR_8, "add SSA edges out of this PHI and continue.");
      else if (VAR_11 == VAR_5)
 FUNC_7 (VAR_8, "add SSA edges out of this PHI and never visit again.");
      else
 FUNC_7 (VAR_8, "do nothing with SSA edges and keep iterating.");
      FUNC_7 (VAR_8, "\n\n");
    }

  return VAR_11;
}
