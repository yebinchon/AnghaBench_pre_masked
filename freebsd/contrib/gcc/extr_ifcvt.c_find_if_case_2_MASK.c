
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_3__* edge ;
typedef TYPE_4__* basic_block ;
struct TYPE_22__ {TYPE_1__* rtl; } ;
struct TYPE_24__ {scalar_t__ index; TYPE_2__ il; } ;
struct TYPE_23__ {int flags; TYPE_4__* dest; } ;
struct TYPE_21__ {int global_live_at_end; int global_live_at_start; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,char*,scalar_t__,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_3__* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_14 (basic_block VAR_14, edge VAR_15, edge VAR_16)
{
  basic_block VAR_17 = VAR_15->dest;
  basic_block VAR_18 = VAR_16->dest;
  edge VAR_19;
  rtx VAR_20;
  if ((FUNC_0 (VAR_17)
       && FUNC_9 (FUNC_0 (VAR_17), VAR_8, VAR_4))
      || (FUNC_0 (VAR_14)
   && FUNC_9 (FUNC_0 (VAR_14), VAR_8, VAR_4))
      || (FUNC_0 (VAR_18)
   && FUNC_9 (FUNC_0 (VAR_18), VAR_8,
       VAR_4)))
    return VAR_3;


  if (!FUNC_13 (VAR_18))
    return VAR_3;
  else
    VAR_19 = FUNC_12 (VAR_18);


  if (VAR_19->flags & VAR_2)
    return VAR_3;


  if (!FUNC_11 (VAR_18))
    return VAR_3;


  if (VAR_17->index < VAR_5)
    return VAR_3;


  VAR_20 = FUNC_9 (FUNC_0 (VAR_14), VAR_6, VAR_4);
  if (VAR_20 && FUNC_2 (FUNC_3 (VAR_20, 0)) >= VAR_7 / 2)
    ;
  else if (VAR_19->dest->index < VAR_5
    || FUNC_8 (VAR_1, VAR_17,
         VAR_19->dest))
    ;
  else
    return VAR_3;

  VAR_11++;
  if (VAR_10)
    FUNC_10 (VAR_10,
      "\nIF-CASE-2 found, start %ld, else %ld\n",
      VAR_14->index, VAR_18->index);


  if (! FUNC_5 (VAR_18, FUNC_1 (VAR_0)))
    return VAR_3;


  if (! FUNC_6 (VAR_14, VAR_18, VAR_17, VAR_19->dest, 0))
    return VAR_3;




  FUNC_4 (VAR_14->il.rtl->global_live_at_end,
       VAR_17->il.rtl->global_live_at_start,
       VAR_18->il.rtl->global_live_at_end);

  FUNC_7 (VAR_18);

  VAR_12++;
  VAR_13++;




  return VAR_9;
}
