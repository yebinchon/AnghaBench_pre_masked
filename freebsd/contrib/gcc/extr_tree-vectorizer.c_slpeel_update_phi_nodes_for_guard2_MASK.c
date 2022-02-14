
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {TYPE_1__* single_exit; int outer; } ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_18__ {int preds; } ;
struct TYPE_17__ {int dest_idx; TYPE_2__* src; TYPE_2__* dest; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_18 (edge VAR_2, struct loop *VAR_3,
                                    bool VAR_4, basic_block *VAR_5)
{
  tree VAR_6, VAR_7;
  tree VAR_8, VAR_9;
  tree VAR_10, VAR_11;
  basic_block VAR_12 = VAR_2->dest;
  edge VAR_13 = FUNC_2 (VAR_12, 0);
  basic_block VAR_14 = VAR_13->dest;
  edge VAR_15;
  tree VAR_16, VAR_17;
  tree VAR_18, VAR_19;
  tree VAR_20;


  *VAR_5 = FUNC_17 (VAR_3->single_exit);
  FUNC_9 (*VAR_5, VAR_3->outer);

  VAR_15 = FUNC_2 (*VAR_5, 0);

  for (VAR_8 = FUNC_14 (VAR_14); VAR_8;
       VAR_8 = FUNC_4 (VAR_8))
    {
      VAR_6 = VAR_8;
      VAR_16 = FUNC_3 (VAR_6, VAR_13);


      if (FUNC_8 (VAR_16) != VAR_1)
        continue;
      VAR_17 = FUNC_13 (VAR_16);
      VAR_20 = VAR_0;




      VAR_7 = FUNC_11 (FUNC_7 (FUNC_5 (VAR_6)),
                                 VAR_12);



      VAR_18 = VAR_16;
      VAR_19 = VAR_0;
      if (VAR_17)
        {
          VAR_18 = VAR_17;




          VAR_19 = FUNC_13 (VAR_18);
        }

      if (VAR_4)
        {
          VAR_10 = VAR_16;
          VAR_11 = VAR_18;
        }
      else
        {
          VAR_10 = VAR_18;
          VAR_11 = VAR_16;
        }
      if (VAR_19)
        VAR_10 = VAR_19;

      FUNC_10 (VAR_7, VAR_11, VAR_15);
      FUNC_10 (VAR_7, VAR_10, VAR_2);


      FUNC_12 (FUNC_3 (VAR_8, VAR_13) == VAR_16);
      FUNC_6 (VAR_8, VAR_13->dest_idx, FUNC_5 (VAR_7));
      VAR_9 = VAR_7;





      VAR_7 = FUNC_11 (FUNC_7 (FUNC_5 (VAR_6)),
                                 *VAR_5);


      FUNC_10 (VAR_7, VAR_11, VAR_3->single_exit);


      FUNC_12 (FUNC_3 (VAR_9, VAR_15) == VAR_11);
      FUNC_6 (VAR_9, VAR_15->dest_idx, FUNC_5 (VAR_7));
      if (VAR_10 == VAR_19)
 continue;
      VAR_20 = VAR_10;


      VAR_7 = FUNC_11 (FUNC_7 (FUNC_5 (VAR_6)),
                                 VAR_2->src);


      FUNC_12 (FUNC_0 (VAR_2->src->preds) == 1);
      FUNC_10 (VAR_7, VAR_20, FUNC_1 (VAR_2->src, 0));


      FUNC_12 (FUNC_3 (VAR_9, VAR_2)
                                                                == VAR_10);
      FUNC_6 (VAR_9, VAR_2->dest_idx, FUNC_5 (VAR_7));
    }

  FUNC_16 (VAR_12, FUNC_15 (FUNC_14 (VAR_12)));
}
