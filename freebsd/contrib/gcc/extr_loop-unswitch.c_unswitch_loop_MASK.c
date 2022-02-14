
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct loops {int dummy; } ;
struct loop {TYPE_2__* header; TYPE_2__* latch; int inner; } ;
typedef int sbitmap ;
typedef int rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_33__ {int flags; int succs; } ;
struct TYPE_32__ {int flags; TYPE_2__* dest; } ;
struct TYPE_31__ {int prev_bb; } ;
struct TYPE_30__ {int flags; int probability; int count; int dest; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_25__* FUNC_3 (TYPE_2__*,int) ;
 TYPE_24__* VAR_3 ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int,int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (struct loop*,TYPE_1__*,struct loops*,int,int ,int *,int *,int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct loop*) ;
 int FUNC_13 (struct loop*,TYPE_2__*) ;
 int FUNC_14 (int) ;
 TYPE_2__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct loop*,TYPE_2__*) ;
 TYPE_1__* FUNC_17 (struct loop*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 struct loop* FUNC_19 (struct loops*,TYPE_1__*,int ,TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_20 (TYPE_2__*,int ,int ) ;
 int FUNC_21 (struct loops*,TYPE_1__*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (TYPE_2__*) ;
 TYPE_1__* FUNC_26 (TYPE_2__*) ;

__attribute__((used)) static struct loop *
FUNC_27 (struct loops *VAR_6, struct loop *VAR_7, basic_block VAR_8,
        rtx VAR_9, rtx VAR_10)
{
  edge VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  basic_block VAR_16, VAR_17;
  struct loop *VAR_18;
  sbitmap VAR_19;
  int VAR_20, VAR_21;
  rtx VAR_22;


  FUNC_14 (FUNC_13 (VAR_7, VAR_8));
  FUNC_14 (FUNC_2 (VAR_8->succs) == 2);
  FUNC_14 (FUNC_16 (VAR_7, VAR_8));
  FUNC_14 (!VAR_7->inner);
  FUNC_14 (FUNC_13 (VAR_7, FUNC_3 (VAR_8, 0)->dest));
  FUNC_14 (FUNC_13 (VAR_7, FUNC_3 (VAR_8, 1)->dest));

  VAR_11 = FUNC_17 (VAR_7);


  VAR_20 = VAR_11->flags & VAR_2;
  VAR_11->flags &= ~VAR_2;
  VAR_19 = FUNC_22 (2);
  FUNC_24 (VAR_19);
  if (!FUNC_10 (VAR_7, VAR_11, VAR_6, 1,
 VAR_19, ((void*)0), ((void*)0), ((void*)0), 0))
    {
      FUNC_23 (VAR_19);
      return ((void*)0);
    }
  FUNC_23 (VAR_19);
  VAR_11->flags |= VAR_20;


  VAR_17 = FUNC_15 (VAR_8);
  VAR_13 = FUNC_1 (VAR_17);
  VAR_14 = FUNC_4 (VAR_8);
  VAR_12 = FUNC_26 (FUNC_15 (VAR_7->latch));


  VAR_21 = VAR_13->probability;
  VAR_16 = FUNC_9 (VAR_3->prev_bb);
  VAR_22 = FUNC_8 (FUNC_6 (VAR_9, 0), FUNC_6 (VAR_9, 1), FUNC_5 (VAR_9),
         FUNC_7 (VAR_13->dest),
         VAR_21, VAR_10);
  FUNC_11 (VAR_22, FUNC_0 (VAR_16));
  VAR_15 = FUNC_20 (VAR_16, VAR_13->dest, 0);
  VAR_15->probability = VAR_21;
  VAR_15->count = VAR_12->count * VAR_21 / VAR_5;
  VAR_15 = FUNC_20 (VAR_16, FUNC_4 (VAR_8)->dest, VAR_1);
  VAR_15->probability = VAR_14->probability;
  VAR_15->count = VAR_12->count * (VAR_14->probability) / VAR_5;

  if (VAR_20)
    {
      VAR_16->flags |= VAR_0;
      FUNC_3 (VAR_16, 0)->flags |= VAR_2;
      FUNC_3 (VAR_16, 1)->flags |= VAR_2;
    }
  else
    {
      VAR_16->flags &= ~VAR_0;
      FUNC_3 (VAR_16, 0)->flags &= ~VAR_2;
      FUNC_3 (VAR_16, 1)->flags &= ~VAR_2;
    }


  VAR_18 = FUNC_19 (VAR_6, VAR_12,
     FUNC_25 (FUNC_15 (VAR_7->header)), VAR_16,
     FUNC_1 (VAR_16), FUNC_4 (VAR_16), 1);


  FUNC_21 (VAR_6, VAR_13);
  FUNC_21 (VAR_6, VAR_14);



  FUNC_12 (VAR_7);
  FUNC_12 (VAR_18);


  FUNC_18 (FUNC_17 (VAR_7), VAR_4);
  FUNC_18 (FUNC_17 (VAR_18), VAR_4);

  return VAR_18;
}
