
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
typedef void* gcov_type ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
typedef TYPE_2__* basic_block ;
struct TYPE_11__ {void* count; } ;
struct TYPE_10__ {int probability; void* count; int flags; TYPE_2__* dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*,int ) ;
 int VAR_11 ;

__attribute__((used)) static tree
FUNC_14 (tree VAR_12, tree VAR_13,
    tree VAR_14, tree VAR_15, tree VAR_16, int VAR_17, gcov_type VAR_18,
    gcov_type VAR_19)
{
  tree VAR_20, VAR_21, VAR_22;
  tree VAR_23, VAR_24, VAR_25;
  tree VAR_26 = FUNC_8 ();
  tree VAR_27 = FUNC_8 ();
  tree VAR_28 = FUNC_8 ();
  tree VAR_29, VAR_30, VAR_31;
  tree VAR_32, VAR_33, VAR_34;
  basic_block VAR_35, VAR_36, VAR_37, VAR_38;
  tree VAR_39 = FUNC_1 (VAR_13);
  edge VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
  block_stmt_iterator VAR_45;

  VAR_35 = FUNC_2 (VAR_12);
  VAR_45 = FUNC_3 (VAR_12);

  VAR_25 = FUNC_9 (VAR_39, "PROF");
  VAR_23 = FUNC_9 (VAR_39, "PROF");
  VAR_20 = FUNC_6 (VAR_7, VAR_39, VAR_25, FUNC_10 (VAR_39, VAR_16));
  VAR_21 = FUNC_6 (VAR_7, VAR_39, VAR_23, VAR_15);
  VAR_22 = FUNC_7 (VAR_1, VAR_11,
     FUNC_6 (VAR_8, VAR_10, VAR_23, VAR_25),
     FUNC_5 (VAR_5, VAR_11, VAR_27),
     FUNC_5 (VAR_5, VAR_11, VAR_26));
  FUNC_4 (&VAR_45, VAR_20, VAR_0);
  FUNC_4 (&VAR_45, VAR_21, VAR_0);
  FUNC_4 (&VAR_45, VAR_22, VAR_0);
  VAR_32 = VAR_22;

  VAR_24 = FUNC_9 (VAR_39, "PROF");
  VAR_29 = FUNC_5 (VAR_6, VAR_11, VAR_26);
  VAR_20 = FUNC_6 (VAR_7, VAR_39, VAR_24,
    FUNC_6 (FUNC_0 (VAR_13), VAR_39, VAR_14, VAR_25));
  FUNC_4 (&VAR_45, VAR_29, VAR_0);
  FUNC_4 (&VAR_45, VAR_20, VAR_0);
  VAR_33 = VAR_20;

  VAR_30 = FUNC_5 (VAR_6, VAR_11, VAR_27);
  VAR_20 = FUNC_6 (VAR_7, VAR_39, VAR_24,
    FUNC_6 (FUNC_0 (VAR_13), VAR_39, VAR_14, VAR_15));
  FUNC_4 (&VAR_45, VAR_30, VAR_0);
  FUNC_4 (&VAR_45, VAR_20, VAR_0);
  VAR_34 = VAR_20;

  VAR_31 = FUNC_5 (VAR_6, VAR_11, VAR_28);
  FUNC_4 (&VAR_45, VAR_31, VAR_0);



  VAR_40 = FUNC_13 (VAR_35, VAR_32);
  VAR_36 = VAR_40->dest;
  VAR_36->count = VAR_18;
  VAR_42 = FUNC_13 (VAR_36, VAR_33);
  VAR_37 = VAR_42->dest;
  VAR_37->count = VAR_19 - VAR_18;
  VAR_44 = FUNC_13 (VAR_37, VAR_34);
  VAR_38 = VAR_44->dest;
  VAR_38->count = VAR_19;

  VAR_40->flags &= ~VAR_2;
  VAR_40->flags |= VAR_3;
  VAR_40->probability = VAR_17;
  VAR_40->count = VAR_18;

  VAR_41 = FUNC_11 (VAR_35, VAR_37, VAR_4);
  VAR_41->probability = VAR_9 - VAR_17;
  VAR_41->count = VAR_19 - VAR_18;

  FUNC_12 (VAR_42);

  VAR_43 = FUNC_11 (VAR_36, VAR_38, VAR_2);
  VAR_43->probability = VAR_9;
  VAR_43->count = VAR_18;

  VAR_44->probability = VAR_9;
  VAR_44->count = VAR_19 - VAR_18;

  return VAR_24;
}
