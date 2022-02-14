
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef TYPE_3__* edge ;
typedef TYPE_4__* basic_block ;
struct TYPE_32__ {int flags; } ;
struct TYPE_29__ {TYPE_1__* rtl; } ;
struct TYPE_31__ {int index; struct TYPE_31__* prev_bb; struct TYPE_31__* next_bb; TYPE_2__ il; } ;
struct TYPE_30__ {TYPE_4__* dest; } ;
struct TYPE_28__ {int global_live_at_end; int global_live_at_start; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int ,int) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (scalar_t__,char*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_12 (int ,TYPE_4__*) ;
 int FUNC_13 (int ,TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 TYPE_6__* FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_18 (basic_block VAR_12, edge VAR_13, edge VAR_14)
{
  basic_block VAR_15 = VAR_13->dest;
  basic_block VAR_16 = VAR_14->dest, VAR_17;
  int VAR_18;
  if ((FUNC_1 (VAR_15)
       && FUNC_9 (FUNC_1 (VAR_15), VAR_6, VAR_5))
      || (FUNC_1 (VAR_12)
   && FUNC_9 (FUNC_1 (VAR_12), VAR_6, VAR_5))
      || (FUNC_1 (VAR_16)
   && FUNC_9 (FUNC_1 (VAR_16), VAR_6,
       VAR_5)))
    return VAR_4;


  if (!FUNC_17 (VAR_15))
    return VAR_4;


  if (FUNC_16 (VAR_15)->flags & (VAR_1 | VAR_2))
    return VAR_4;


  if (!FUNC_14 (VAR_15))
    return VAR_4;


  if (FUNC_10 (VAR_15))
    return VAR_4;

  VAR_9++;
  if (VAR_8)
    FUNC_11 (VAR_8,
      "\nIF-CASE-1 found, start %d, then %d\n",
      VAR_12->index, VAR_15->index);


  if (! FUNC_6 (VAR_15, FUNC_2 (VAR_0)))
    return VAR_4;


  if (! FUNC_7 (VAR_12, VAR_15, VAR_16,
       FUNC_15 (VAR_15), 1))
    return VAR_4;




  FUNC_5 (VAR_12->il.rtl->global_live_at_end,
       VAR_16->il.rtl->global_live_at_start,
       VAR_15->il.rtl->global_live_at_end);






  if (VAR_15->next_bb == VAR_16
      && VAR_15->prev_bb == VAR_12
      && VAR_16 != VAR_3)
    {
      FUNC_13 (FUNC_3 (VAR_12), VAR_16);
      VAR_17 = 0;
    }
  else
    VAR_17 = FUNC_12 (FUNC_3 (VAR_12),
                                             VAR_16);

  VAR_18 = VAR_15->index;
  FUNC_8 (VAR_15);



  if (VAR_17)
    {
      VAR_17->index = VAR_18;
      FUNC_4 (VAR_18, VAR_17);



      FUNC_0 (VAR_17, VAR_12);
    }



  VAR_10++;
  VAR_11++;

  return VAR_7;
}
