
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct loops {int dummy; } ;
struct loop {unsigned int num_nodes; TYPE_2__* latch; TYPE_1__* single_exit; TYPE_2__* header; scalar_t__ inner; } ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_35__ {int flags; } ;
struct TYPE_34__ {int flags; } ;
struct TYPE_33__ {int flags; TYPE_2__* dest; TYPE_2__* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct loop*,TYPE_1__*,struct loops*,int,int *,int *,int *,int *,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__**,TYPE_1__**) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 TYPE_2__** FUNC_5 (struct loop*) ;
 TYPE_1__* FUNC_6 (struct loop*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 struct loop* FUNC_8 (struct loops*,TYPE_1__*,TYPE_5__*,TYPE_2__*,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,TYPE_2__*,TYPE_1__*,void*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*) ;
 TYPE_5__* FUNC_12 (TYPE_2__*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*) ;

struct loop *
FUNC_14 (struct loops *VAR_2, struct loop * VAR_3,
       void *VAR_4, basic_block *VAR_5,
       bool VAR_6)
{
  basic_block VAR_7, VAR_8;
  edge VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  int VAR_14;
  struct loop *VAR_15;
  basic_block VAR_16;


  if (VAR_3->inner)
    return ((void*)0);


  VAR_9 = FUNC_6 (VAR_3);
  VAR_14 = VAR_9->flags & VAR_1;
  VAR_9->flags &= ~VAR_1;


  VAR_7 = VAR_9->dest;


  if (!FUNC_0 (VAR_3, VAR_9, VAR_2, 1,
            ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0))
    return ((void*)0);



  VAR_8 = VAR_9->dest;


  VAR_16 = FUNC_9 (VAR_7, VAR_8,
     VAR_9, VAR_4);
  if (VAR_5)
    *VAR_5 = VAR_16;

  if (!VAR_16)
    {
      VAR_9->flags |= VAR_14;
      return ((void*)0);
    }

  VAR_10 = FUNC_13 (FUNC_4 (VAR_3->latch));

  FUNC_1 (VAR_16, &VAR_12, &VAR_13);
  VAR_15 = FUNC_8 (VAR_2,
     VAR_10,
     FUNC_12 (FUNC_4 (VAR_3->header)),
     VAR_16, VAR_12, VAR_13,
     0 );

  VAR_11 = VAR_3->single_exit;
  if (VAR_11)
    VAR_15->single_exit = FUNC_2 (FUNC_4 (VAR_11->src), VAR_11->dest);


  FUNC_10 (VAR_10);


  FUNC_1 (VAR_16, &VAR_12, &VAR_13);
  FUNC_10 (VAR_13);

  if (VAR_14)
    {
      VAR_16->flags |= VAR_0;
      FUNC_6 (VAR_3)->flags |= VAR_1;
      FUNC_6 (VAR_15)->flags |= VAR_1;
      FUNC_12 (VAR_16)->flags |= VAR_1;
    }

  if (VAR_6)
    {
      basic_block *VAR_17 = FUNC_5 (VAR_15), VAR_18;
      unsigned VAR_19;

      VAR_18 = VAR_3->latch;

      for (VAR_19 = 0; VAR_19 < VAR_15->num_nodes; VAR_19++)
 {
   FUNC_11 (VAR_17[VAR_19], VAR_18);
   VAR_18 = VAR_17[VAR_19];
 }
      FUNC_3 (VAR_17);
    }




  FUNC_7 (FUNC_6 (VAR_3), ((void*)0));
  FUNC_7 (FUNC_6 (VAR_15), ((void*)0));

  return VAR_15;
}
