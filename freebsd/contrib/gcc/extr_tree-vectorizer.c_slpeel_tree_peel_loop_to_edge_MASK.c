
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loops {int dummy; } ;
struct loop {scalar_t__ single_exit; int outer; } ;
typedef scalar_t__ edge ;
typedef int bitmap ;
typedef int basic_block ;
typedef scalar_t__ LOC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct loop*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_10 (struct loop*) ;
 int FUNC_11 (struct loop*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct loop*,scalar_t__) ;
 int FUNC_14 (struct loop*,int ) ;
 struct loop* FUNC_15 (struct loop*,struct loops*,scalar_t__) ;
 int FUNC_16 (scalar_t__,struct loop*,int,int *,int *) ;
 int FUNC_17 (scalar_t__,struct loop*,int,int *) ;
 int FUNC_18 (struct loop*,struct loop*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 () ;
 int FUNC_21 () ;

struct loop*
FUNC_22 (struct loop *VAR_7, struct loops *VAR_8,
          edge VAR_9, tree VAR_10,
          tree VAR_11, bool VAR_12)
{
  struct loop *VAR_13 = ((void*)0), *VAR_14, *VAR_15;
  edge VAR_16;
  tree VAR_17;
  bitmap VAR_18;
  basic_block VAR_19, VAR_20;
  basic_block VAR_21;
  basic_block VAR_22;
  basic_block VAR_23;
  edge VAR_24 = VAR_7->single_exit;
  LOC VAR_25;

  if (!FUNC_13 (VAR_7, VAR_9))
    return ((void*)0);





  FUNC_21 ();
  if (!(VAR_13 = FUNC_15 (VAR_7, VAR_8, VAR_9)))
    {
      VAR_25 = FUNC_7 (VAR_7);
      if (VAR_5 && (VAR_6 & VAR_2))
        {
          if (VAR_25 != VAR_3)
            FUNC_9 (VAR_5, "\n%s:%d: note: ",
                     FUNC_1 (VAR_25), FUNC_2 (VAR_25));
          FUNC_9 (VAR_5, "tree_duplicate_loop_to_edge_cfg failed.\n");
        }
      return ((void*)0);
    }

  if (VAR_9 == VAR_24)
    {

      VAR_14 = VAR_7;
      VAR_15 = VAR_13;
    }
  else
    {

      VAR_14 = VAR_13;
      VAR_15 = VAR_7;
    }

  VAR_18 = FUNC_20 ();
  FUNC_18 (VAR_7, VAR_13, VAR_9 == VAR_24);
  FUNC_11 (VAR_13);
  VAR_21 = FUNC_19 (FUNC_10 (VAR_14));
  FUNC_4 (VAR_21, VAR_14->outer);
  VAR_19 = FUNC_19 (VAR_14->single_exit);
  FUNC_4 (VAR_19, VAR_14->outer);

  VAR_17 =
    FUNC_8 (VAR_1, VAR_4, VAR_10,
                 FUNC_5 (FUNC_3 (VAR_10), 0));
  VAR_16 = FUNC_12 (VAR_21, VAR_17,
                                  VAR_19, VAR_21);
  FUNC_16 (VAR_16, VAR_14,
          VAR_14 == VAR_13,
          &VAR_23, &VAR_18);
  VAR_22 = VAR_23;
  VAR_20 = FUNC_19 (VAR_15->single_exit);
  FUNC_4 (VAR_20, VAR_15->outer);

  VAR_17 =
 FUNC_8 (VAR_0, VAR_4, VAR_10, VAR_11);
  VAR_16 = FUNC_12 (VAR_22, VAR_17,
                                  VAR_20, VAR_21);
  FUNC_17 (VAR_16, VAR_15,
                                     VAR_15 == VAR_13, &VAR_23);



  if (VAR_12)
    FUNC_14 (VAR_14, VAR_10);

  FUNC_0 (VAR_18);
  FUNC_6 ();

  return VAR_13;
}
