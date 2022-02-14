
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ step; scalar_t__ base; } ;
struct tree_niter_desc {int cmp; int may_be_zero; scalar_t__ bound; TYPE_1__ control; } ;
struct loop {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__*,int,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct loop*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15 (struct loop *VAR_14, struct tree_niter_desc *VAR_15,
      unsigned VAR_16, tree *VAR_17,
      tree *VAR_18, tree *VAR_19,
      enum tree_code *VAR_20, tree *VAR_21)
{
  tree VAR_22;
  tree VAR_23 = VAR_15->control.base;
  tree VAR_24 = VAR_15->control.step;
  tree VAR_25 = VAR_15->bound;
  tree VAR_26 = FUNC_0 (VAR_23);
  tree VAR_27, VAR_28;
  tree VAR_29 = FUNC_10 (VAR_26, VAR_26);
  tree VAR_30 = FUNC_13 (VAR_26, VAR_26);
  enum tree_code VAR_31 = VAR_15->cmp;
  tree VAR_32 = VAR_12, VAR_33;

  *VAR_17 = VAR_11;
  *VAR_18 = VAR_8;
  *VAR_19 = VAR_8;
  *VAR_20 = VAR_0;
  *VAR_21 = VAR_8;
  FUNC_5 (VAR_31 != VAR_0);





  if (VAR_31 == VAR_7)
    {
      if (FUNC_11 (VAR_24))
 VAR_31 = VAR_2;
      else
 VAR_31 = VAR_4;
    }
  else if (VAR_31 == VAR_4)
    {
      FUNC_5 (!FUNC_11 (VAR_24));
    }
  else if (VAR_31 == VAR_2)
    {
      FUNC_5 (FUNC_11 (VAR_24));
    }
  else
    FUNC_6 ();
  if (!FUNC_14 (VAR_15->may_be_zero))
    VAR_32 = FUNC_3 (VAR_10, VAR_13,
   FUNC_7 (VAR_15->may_be_zero),
   VAR_32);

  VAR_27 = FUNC_3 (VAR_6, VAR_26, VAR_24,
    FUNC_2 (VAR_26, VAR_16));
  VAR_28 = FUNC_3 (VAR_5, VAR_26, VAR_27, VAR_24);
  if (VAR_31 == VAR_4)
    VAR_33 = FUNC_3 (VAR_1, VAR_13,
    VAR_25,
    FUNC_3 (VAR_9, VAR_26, VAR_29, VAR_28));
  else
    VAR_33 = FUNC_3 (VAR_3, VAR_13,
    VAR_25,
    FUNC_3 (VAR_9, VAR_26, VAR_30, VAR_28));
  VAR_32 = FUNC_3 (VAR_10, VAR_13, VAR_33, VAR_32);

  VAR_25 = FUNC_3 (VAR_5, VAR_26, VAR_25, VAR_28);
  VAR_33 = FUNC_3 (VAR_31, VAR_13, VAR_23, VAR_25);
  VAR_32 = FUNC_3 (VAR_10, VAR_13, VAR_33, VAR_32);

  VAR_32 = FUNC_4 (FUNC_12 (VAR_32), &VAR_22, 0, VAR_8);
  if (VAR_22)
    FUNC_1 (FUNC_9 (VAR_14), VAR_22);



  if (!FUNC_8 (VAR_32))
    {
      VAR_32 = FUNC_4 (VAR_32, &VAR_22, 1, VAR_8);
      if (VAR_22)
 FUNC_1 (FUNC_9 (VAR_14), VAR_22);
    }
  *VAR_17 = VAR_32;

  VAR_23 = FUNC_4 (FUNC_12 (VAR_23), &VAR_22, 1, VAR_8);
  if (VAR_22)
    FUNC_1 (FUNC_9 (VAR_14), VAR_22);
  VAR_25 = FUNC_4 (FUNC_12 (VAR_25), &VAR_22, 1, VAR_8);
  if (VAR_22)
    FUNC_1 (FUNC_9 (VAR_14), VAR_22);

  *VAR_18 = VAR_23;
  *VAR_19 = VAR_27;
  *VAR_20 = VAR_31;
  *VAR_21 = VAR_25;
}
