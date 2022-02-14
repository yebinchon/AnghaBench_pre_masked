
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
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*,int ) ;
 int VAR_13 ;

__attribute__((used)) static tree
FUNC_14 (tree VAR_14, tree VAR_15, tree VAR_16, tree VAR_17, int VAR_18,
        gcov_type VAR_19, gcov_type VAR_20)
{
  tree VAR_21, VAR_22, VAR_23, VAR_24;
  tree VAR_25, VAR_26;
  tree VAR_27 = FUNC_9 ();
  tree VAR_28 = FUNC_9 ();
  tree VAR_29 = FUNC_9 ();
  tree VAR_30, VAR_31, VAR_32;
  tree VAR_33, VAR_34, VAR_35;
  basic_block VAR_36, VAR_37, VAR_38, VAR_39;
  tree VAR_40 = FUNC_1 (VAR_15);
  edge VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
  block_stmt_iterator VAR_46;
  tree VAR_47 = FUNC_10 (VAR_40, "PROF");

  VAR_36 = FUNC_2 (VAR_14);
  VAR_46 = FUNC_3 (VAR_14);

  VAR_25 = FUNC_10 (VAR_40, "PROF");
  VAR_26 = FUNC_10 (VAR_40, "PROF");
  VAR_22 = FUNC_6 (VAR_8, VAR_40, VAR_25,
    FUNC_6 (VAR_10, VAR_40, VAR_17, FUNC_8 (VAR_40, -1)));
  VAR_23 = FUNC_6 (VAR_8, VAR_40, VAR_26,
    FUNC_6 (VAR_0, VAR_40, VAR_25, VAR_17));
  VAR_24 = FUNC_7 (VAR_2, VAR_13,
    FUNC_6 (VAR_9, VAR_12,
     VAR_26, FUNC_8 (VAR_40, 0)),
    FUNC_5 (VAR_6, VAR_13, VAR_28),
     FUNC_5 (VAR_6, VAR_13, VAR_27));
  FUNC_4 (&VAR_46, VAR_22, VAR_1);
  FUNC_4 (&VAR_46, VAR_23, VAR_1);
  FUNC_4 (&VAR_46, VAR_24, VAR_1);
  VAR_33 = VAR_24;


  VAR_30 = FUNC_5 (VAR_7, VAR_13, VAR_27);
  VAR_21 = FUNC_6 (VAR_8, VAR_40, VAR_47,
    FUNC_6 (VAR_0, VAR_40, VAR_16, VAR_25));
  FUNC_4 (&VAR_46, VAR_30, VAR_1);
  FUNC_4 (&VAR_46, VAR_21, VAR_1);
  VAR_34 = VAR_21;

  VAR_31 = FUNC_5 (VAR_7, VAR_13, VAR_28);
  VAR_21 = FUNC_6 (VAR_8, VAR_40, VAR_47,
    FUNC_6 (FUNC_0 (VAR_15), VAR_40, VAR_16, VAR_17));
  FUNC_4 (&VAR_46, VAR_31, VAR_1);
  FUNC_4 (&VAR_46, VAR_21, VAR_1);
  VAR_35 = VAR_21;

  VAR_32 = FUNC_5 (VAR_7, VAR_13, VAR_29);
  FUNC_4 (&VAR_46, VAR_32, VAR_1);



  VAR_41 = FUNC_13 (VAR_36, VAR_33);
  VAR_37 = VAR_41->dest;
  VAR_37->count = VAR_19;
  VAR_43 = FUNC_13 (VAR_37, VAR_34);
  VAR_38 = VAR_43->dest;
  VAR_38->count = VAR_20 - VAR_19;
  VAR_45 = FUNC_13 (VAR_38, VAR_35);
  VAR_39 = VAR_45->dest;
  VAR_39->count = VAR_20;

  VAR_41->flags &= ~VAR_3;
  VAR_41->flags |= VAR_4;
  VAR_41->probability = VAR_18;
  VAR_41->count = VAR_19;

  VAR_42 = FUNC_11 (VAR_36, VAR_38, VAR_5);
  VAR_42->probability = VAR_11 - VAR_18;
  VAR_42->count = VAR_20 - VAR_19;

  FUNC_12 (VAR_43);

  VAR_44 = FUNC_11 (VAR_37, VAR_39, VAR_3);
  VAR_44->probability = VAR_11;
  VAR_44->count = VAR_19;

  VAR_45->probability = VAR_11;
  VAR_45->count = VAR_20 - VAR_19;

  return VAR_47;
}
