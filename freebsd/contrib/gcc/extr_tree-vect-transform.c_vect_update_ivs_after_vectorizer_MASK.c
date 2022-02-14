
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int num; int header; TYPE_1__* single_exit; } ;
typedef int loop_vec_info ;
typedef TYPE_2__* edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;
struct TYPE_5__ {int dest_idx; int dest; } ;
struct TYPE_4__ {int dest; } ;


 int VAR_0 ;
 struct loop* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct loop*,int ) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__*,int,scalar_t__) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,scalar_t__,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_24 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_25 (scalar_t__) ;

__attribute__((used)) static void
FUNC_26 (loop_vec_info VAR_8, tree VAR_9,
      edge VAR_10)
{
  struct loop *VAR_11 = FUNC_0 (VAR_8);
  basic_block VAR_12 = VAR_11->single_exit->dest;
  tree VAR_13, VAR_14;
  basic_block VAR_15 = VAR_10->dest;




  FUNC_16 (FUNC_21 (VAR_12));

  for (VAR_13 = FUNC_19 (VAR_11->header), VAR_14 = FUNC_19 (VAR_15);
       VAR_13 && VAR_14;
       VAR_13 = FUNC_1 (VAR_13), VAR_14 = FUNC_1 (VAR_14))
    {
      tree VAR_16 = ((void*)0);
      tree VAR_17;
      tree VAR_18;
      tree VAR_19;
      tree VAR_20, VAR_21, VAR_22, VAR_23;
      block_stmt_iterator VAR_24;

      if (FUNC_24 (VAR_4))
        {
          FUNC_15 (VAR_6, "vect_update_ivs_after_vectorizer: phi: ");
          FUNC_20 (VAR_6, VAR_13, VAR_5);
        }


      if (!FUNC_18 (FUNC_4 (FUNC_2 (VAR_13))))
 {
   if (FUNC_24 (VAR_4))
     FUNC_15 (VAR_6, "virtual phi. skip.");
   continue;
 }


      if (FUNC_5 (FUNC_25 (VAR_13)) == VAR_7)
        {
          if (FUNC_24 (VAR_4))
            FUNC_15 (VAR_6, "reduc phi. skip.");
          continue;
        }

      VAR_16 = FUNC_8 (VAR_11, FUNC_2 (VAR_13));
      FUNC_16 (VAR_16);
      VAR_17 =
  FUNC_23 (FUNC_13 (VAR_16, VAR_11->num));
      FUNC_16 (VAR_17 != VAR_2);



      FUNC_16 (!FUNC_22 (VAR_17));

      VAR_19 = VAR_17;
      VAR_18 = FUNC_23 (FUNC_17 (VAR_16,
              VAR_11->num));

      VAR_22 = FUNC_11 (VAR_3, FUNC_6 (VAR_18),
    FUNC_11 (VAR_1, FUNC_6 (VAR_9),
         VAR_9, VAR_19), VAR_18);

      VAR_20 = FUNC_12 (FUNC_6 (VAR_18), "tmp");
      FUNC_7 (VAR_20);

      VAR_23 = FUNC_14 (VAR_22, &VAR_21, 0, VAR_20);


      VAR_24 = FUNC_10 (VAR_12);
      if (VAR_21)
        FUNC_9 (&VAR_24, VAR_21, VAR_0);


      FUNC_3 (VAR_14, VAR_10->dest_idx, VAR_23);
    }
}
