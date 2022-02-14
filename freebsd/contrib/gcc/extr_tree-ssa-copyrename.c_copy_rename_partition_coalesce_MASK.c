
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef TYPE_2__* var_ann_t ;
typedef scalar_t__ tree ;
struct TYPE_10__ {int (* types_compatible_p ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_9__ {scalar_t__ symbol_mem_tag; } ;
struct TYPE_8__ {int var_partition; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 TYPE_6__ VAR_6 ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int *,scalar_t__,int ) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_19 (scalar_t__) ;

__attribute__((used)) static void
FUNC_20 (var_map VAR_7, tree VAR_8, tree VAR_9, FILE *VAR_10)
{
  int VAR_11, VAR_12, VAR_13;
  tree VAR_14, VAR_15;
  tree VAR_16, VAR_17;
  var_ann_t VAR_18, VAR_19, VAR_20;
  bool VAR_21, VAR_22, VAR_23;

  FUNC_10 (FUNC_6 (VAR_8) == VAR_3);
  FUNC_10 (FUNC_6 (VAR_9) == VAR_3);

  FUNC_16 (VAR_7, VAR_8, 0);
  FUNC_16 (VAR_7, VAR_9, 1);

  VAR_11 = FUNC_12 (VAR_7->var_partition, FUNC_5 (VAR_8));
  VAR_12 = FUNC_12 (VAR_7->var_partition, FUNC_5 (VAR_9));

  if (VAR_10)
    {
      FUNC_9 (VAR_10, "Try : ");
      FUNC_15 (VAR_10, VAR_8, VAR_4);
      FUNC_9 (VAR_10, "(P%d) & ", VAR_11);
      FUNC_15 (VAR_10, VAR_9, VAR_4);
      FUNC_9 (VAR_10, "(P%d)", VAR_12);
    }

  FUNC_10 (VAR_11 != VAR_0);
  FUNC_10 (VAR_12 != VAR_0);

  VAR_16 = FUNC_13 (VAR_7, VAR_11);
  VAR_17 = FUNC_13 (VAR_7, VAR_12);
  VAR_14 = FUNC_4 (VAR_16);
  VAR_15 = FUNC_4 (VAR_17);

  VAR_18 = FUNC_19 (VAR_14);
  VAR_19 = FUNC_19 (VAR_15);

  if (VAR_11 == VAR_12)
    {
      if (VAR_10)
 FUNC_9 (VAR_10, " : Already coalesced.\n");
      return;
    }


  VAR_23 = (FUNC_3 (VAR_16)
     || FUNC_3 (VAR_17));
  if (VAR_23)
    {
      if (VAR_10)
 FUNC_9 (VAR_10, " : Abnormal PHI barrier.  No coalesce.\n");
      return;
    }


  if (VAR_14 == VAR_15)
    {
      VAR_11 = FUNC_14 (VAR_7->var_partition, VAR_11, VAR_12);
      if (VAR_10)
 FUNC_9 (VAR_10, " : Same root, coalesced --> P%d.\n", VAR_11);
      return;
    }


  if (FUNC_6 (VAR_14) == VAR_1 && FUNC_6 (VAR_15) == VAR_1)
    {
      if (VAR_10)
        FUNC_9 (VAR_10, " : 2 different PARM_DECLS. No coalesce.\n");
      return;
    }

  if ((FUNC_6 (VAR_14) == VAR_2) != (FUNC_6 (VAR_15) == VAR_2))
    {
      if (VAR_10)
        FUNC_9 (VAR_10, " : One root a RESULT_DECL. No coalesce.\n");
      return;
    }

  VAR_21 = FUNC_6 (VAR_14) == VAR_5 && FUNC_1 (VAR_14);
  VAR_22 = FUNC_6 (VAR_15) == VAR_5 && FUNC_1 (VAR_15);



  if (!VAR_21 && !VAR_22)
    {
      if (FUNC_0 (VAR_15))
        VAR_22 = 1;
      else if (FUNC_0 (VAR_14))
 VAR_21 = 1;
      else
 {
   if (VAR_10)
     FUNC_9 (VAR_10, " : 2 different USER vars. No coalesce.\n");
   return;
 }
    }


  if (VAR_18->symbol_mem_tag
      && VAR_19->symbol_mem_tag
      && VAR_18->symbol_mem_tag != VAR_19->symbol_mem_tag)
    {
      if (VAR_10)
 FUNC_9 (VAR_10, " : 2 memory tags. No coalesce.\n");
      return;
    }



  if (FUNC_8 (VAR_14))
    {
      if (FUNC_8 (VAR_15))
 {
   if (VAR_10)
     FUNC_9 (VAR_10, " : 2 default defs. No coalesce.\n");
   return;
 }
      else
        {
   VAR_22 = 1;
   VAR_21 = 0;
 }
    }
  else if (FUNC_8 (VAR_15))
    {
      VAR_21 = 1;
      VAR_22 = 0;
    }


  if (!VAR_6.types_compatible_p (FUNC_7 (VAR_14), FUNC_7 (VAR_15)))
    {
      if (VAR_10)
 FUNC_9 (VAR_10, " : Incompatible types.  No coalesce.\n");
      return;
    }


  if (FUNC_2 (FUNC_7 (VAR_14))
      && FUNC_2 (FUNC_7 (VAR_15))
      && FUNC_11 (FUNC_7 (FUNC_7 (VAR_14)))
          != FUNC_11 (FUNC_7 (FUNC_7 (VAR_15))))
    {
      if (VAR_10)
 FUNC_9 (VAR_10, " : 2 different aliasing sets. No coalesce.\n");
      return;
    }



  VAR_13 = FUNC_14 (VAR_7->var_partition, VAR_11, VAR_12);



  if (!VAR_22)
    FUNC_17 (FUNC_13 (VAR_7, VAR_13), VAR_15);
  else if (!VAR_21)
    FUNC_17 (FUNC_13 (VAR_7, VAR_13), VAR_14);


  VAR_20 = FUNC_19 (FUNC_4 (FUNC_13 (VAR_7, VAR_13)));
  if (VAR_18->symbol_mem_tag)
    VAR_20->symbol_mem_tag = VAR_18->symbol_mem_tag;
  else
    VAR_20->symbol_mem_tag = VAR_19->symbol_mem_tag;

  if (VAR_10)
    {
      FUNC_9 (VAR_10, " --> P%d ", VAR_13);
      FUNC_15 (VAR_10, FUNC_4 (FUNC_13 (VAR_7, VAR_13)),
     VAR_4);
      FUNC_9 (VAR_10, "\n");
    }
}
