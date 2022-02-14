
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {TYPE_1__* single_exit; int latch; int outer; int header; } ;
typedef TYPE_1__* edge ;
typedef int bitmap ;
typedef int basic_block ;
struct TYPE_8__ {int dest_idx; int dest; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (struct loop*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_20 (edge VAR_2, struct loop *VAR_3,
                                    bool VAR_4, basic_block *VAR_5,
                                    bitmap *VAR_6)
{
  tree VAR_7, VAR_8;
  tree VAR_9, VAR_10;
  tree VAR_11, VAR_12;
  basic_block VAR_13 = VAR_2->dest;
  edge VAR_14 = FUNC_0 (VAR_13, 0);
  basic_block VAR_15 = VAR_14->dest;
  basic_block VAR_16 = VAR_3->header;
  edge VAR_17;
  tree VAR_18;
  tree VAR_19;


  *VAR_5 = FUNC_19 (VAR_3->single_exit);
  FUNC_7 (*VAR_5, VAR_3->outer);

  VAR_17 = FUNC_0 (*VAR_5, 0);

  for (VAR_7 = FUNC_15 (VAR_16), VAR_9 = FUNC_15 (VAR_15);
       VAR_7 && VAR_9;
       VAR_7 = FUNC_2 (VAR_7), VAR_9 = FUNC_2 (VAR_9))
    {





      VAR_19 = FUNC_3 (VAR_7);
      if (!FUNC_13 (FUNC_5 (VAR_19)))
        FUNC_9 (VAR_1, FUNC_6 (VAR_19));




      VAR_8 = FUNC_10 (FUNC_5 (FUNC_3 (VAR_7)),
                                 VAR_13);



      VAR_12 = FUNC_1 (VAR_7, FUNC_0 (VAR_3->latch, 0));
      VAR_11 = FUNC_1 (VAR_7, FUNC_14 (VAR_3));

      FUNC_8 (VAR_8, VAR_12, VAR_17);
      FUNC_8 (VAR_8, VAR_11, VAR_2);


      FUNC_11 (FUNC_1 (VAR_9, VAR_14) == VAR_12
                  || FUNC_1 (VAR_9, VAR_14) == VAR_11);
      FUNC_4 (VAR_9, VAR_14->dest_idx, FUNC_3 (VAR_8));
      VAR_10 = VAR_8;





      VAR_8 = FUNC_10 (FUNC_5 (FUNC_3 (VAR_7)),
                                 *VAR_5);


      FUNC_8 (VAR_8, VAR_12, VAR_3->single_exit);


      FUNC_11 (FUNC_1 (VAR_10, VAR_17) == VAR_12);
      FUNC_4 (VAR_10, VAR_17->dest_idx, FUNC_3 (VAR_8));
      if (VAR_4)
        VAR_18 = VAR_12;
      else
        {
          VAR_18 = FUNC_12 (VAR_12);




   if (!VAR_18)
     continue;
        }
      FUNC_11 (FUNC_12 (VAR_18) == VAR_0);

      FUNC_17 (VAR_18, FUNC_3 (VAR_8));
      FUNC_9 (*VAR_6, FUNC_6 (VAR_18));
    }

  FUNC_18 (VAR_13, FUNC_16 (FUNC_15 (VAR_13)));
}
