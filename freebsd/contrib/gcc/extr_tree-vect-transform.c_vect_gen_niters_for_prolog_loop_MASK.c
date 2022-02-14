
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
struct data_reference {int dummy; } ;
typedef int stmt_vec_info ;
typedef int loop_vec_info ;
typedef int edge ;
typedef int basic_block ;
struct TYPE_3__ {scalar_t__ (* type_for_size ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct data_reference*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 struct loop* FUNC_2 (int ) ;
 struct data_reference* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (scalar_t__,char*) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__*,int,scalar_t__) ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (int) ;
 TYPE_2__ VAR_9 ;
 int FUNC_20 (struct loop*) ;
 int FUNC_21 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_22 (int ,int) ;
 int FUNC_23 (scalar_t__,int) ;
 scalar_t__ FUNC_24 (scalar_t__,scalar_t__*,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_27 (loop_vec_info VAR_11, tree VAR_12)
{
  struct data_reference *VAR_13 = FUNC_3 (VAR_11);
  int VAR_14 = FUNC_4 (VAR_11);
  struct loop *VAR_15 = FUNC_2 (VAR_11);
  tree VAR_16, VAR_17;
  tree VAR_18, VAR_19;
  edge VAR_20;
  basic_block VAR_21;
  tree VAR_22 = FUNC_0 (VAR_13);
  stmt_vec_info VAR_23 = FUNC_26 (VAR_22);
  tree VAR_24 = FUNC_5 (VAR_23);
  int VAR_25 = FUNC_8 (VAR_24) / VAR_0;
  tree VAR_26 = FUNC_7 (VAR_12);

  VAR_20 = FUNC_20 (VAR_15);

  if (FUNC_1 (VAR_11) > 0)
    {
      int VAR_27 = FUNC_1 (VAR_11);
      int VAR_28 = VAR_25/VAR_14;
      int VAR_29 = VAR_27 / VAR_28;

      if (FUNC_25 (VAR_6))
        FUNC_18 (VAR_10, "known alignment = %d.", VAR_27);
      VAR_18 = FUNC_13 (VAR_26, (VAR_14 - VAR_29)&(VAR_14-1));
    }
  else
    {
      tree VAR_30 = VAR_5;
      tree VAR_31 =
        FUNC_24 (VAR_22, &VAR_30, VAR_5);
      tree VAR_32 = FUNC_7 (VAR_31);
      tree VAR_33 = FUNC_9 (VAR_32);
      tree VAR_34 = VAR_9.types.type_for_size (FUNC_23 (VAR_33, 1), 1);
      tree VAR_35 = FUNC_13 (VAR_34, VAR_25 - 1);
      tree VAR_36 =
        FUNC_13 (VAR_34, FUNC_15 (VAR_25/VAR_14));
      tree VAR_37 = FUNC_13 (VAR_34, VAR_14 - 1);
      tree VAR_38 = FUNC_13 (VAR_34, VAR_14);
      tree VAR_39;
      tree VAR_40;

      VAR_21 = FUNC_11 (VAR_20, VAR_30);
      FUNC_19 (!VAR_21);


      VAR_39 =
        FUNC_12 (VAR_1, VAR_34, VAR_31, VAR_35);


      VAR_40 =
        FUNC_12 (VAR_7, VAR_34, VAR_39, VAR_36);


      VAR_18 = FUNC_12 (VAR_3, VAR_34, VAR_38, VAR_40);
      VAR_18 = FUNC_12 (VAR_1, VAR_34, VAR_18, VAR_37);
      VAR_18 = FUNC_16 (VAR_26, VAR_18);
    }





  if (FUNC_6 (VAR_12) != VAR_2)
    VAR_18 = FUNC_12 (VAR_4, VAR_26, VAR_18, VAR_12);

  if (FUNC_25 (VAR_6))
    {
      FUNC_18 (VAR_10, "niters for prolog loop: ");
      FUNC_21 (VAR_10, VAR_18, VAR_8);
    }

  VAR_16 = FUNC_14 (VAR_26, "prolog_loop_niters");
  FUNC_10 (VAR_16);
  VAR_19 = FUNC_17 (VAR_18, &VAR_17, 0, VAR_16);


  if (VAR_17)
    {
      basic_block VAR_41 = FUNC_11 (VAR_20, VAR_17);
      FUNC_19 (!VAR_41);
    }

  return VAR_19;
}
