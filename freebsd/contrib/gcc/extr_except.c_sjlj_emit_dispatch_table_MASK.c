
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sjlj_lp_info {int dispatch_index; int directly_reachable; } ;
struct eh_region {int post_landing_pad; } ;
typedef int rtx ;
typedef TYPE_2__* edge ;
typedef TYPE_3__* basic_block ;
struct TYPE_11__ {TYPE_1__* eh; } ;
struct TYPE_10__ {int count; int next_bb; } ;
struct TYPE_9__ {int probability; int count; } ;
struct TYPE_8__ {int last_region_number; int region_array; int filter; int exc_ptr; int sjlj_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 TYPE_7__* VAR_5 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 TYPE_3__* FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_7 ;
 TYPE_2__* FUNC_14 (TYPE_3__*,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_15 () ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_16 (rtx VAR_12, struct sjlj_lp_info *VAR_13)
{
  int VAR_14, VAR_15;
  rtx VAR_16, VAR_17, VAR_18, VAR_19;
  rtx VAR_20;
  basic_block VAR_21;
  edge VAR_22;

  VAR_19 = VAR_5->eh->sjlj_fc;

  FUNC_15 ();

  FUNC_8 (VAR_12);


  FUNC_12 (VAR_12);




  VAR_16 = FUNC_3 (VAR_19, FUNC_1 (VAR_7),
   VAR_9);
  VAR_17 = FUNC_6 (VAR_16);

  VAR_16 = FUNC_3 (VAR_19, VAR_11, VAR_10);
  if (VAR_11 != VAR_8)
    {



      VAR_16 = FUNC_5 (VAR_8, VAR_16, 0);

    }
  FUNC_9 (VAR_5->eh->exc_ptr, VAR_16);

  VAR_16 = FUNC_3 (VAR_19, VAR_11, VAR_10 + VAR_4);
  FUNC_9 (VAR_5->eh->filter, VAR_16);




  VAR_15 = 0;
  for (VAR_14 = VAR_5->eh->last_region_number; VAR_14 > 0; --VAR_14)
    {
      if (! VAR_13[VAR_14].directly_reachable)
 continue;

      if (! VAR_15)
 {
   VAR_15 = VAR_14;
   continue;
 }

      FUNC_7 (VAR_17, FUNC_0 (VAR_13[VAR_14].dispatch_index),
          VAR_1, VAR_2, FUNC_1 (VAR_7), 0,
                        ((struct eh_region *)FUNC_2 (VAR_6, VAR_5->eh->region_array, VAR_14))
    ->post_landing_pad);
    }

  VAR_18 = FUNC_13 ();
  FUNC_11 ();

  VAR_20 = (((struct eh_region *)FUNC_2 (VAR_6, VAR_5->eh->region_array, VAR_15))
     ->post_landing_pad);

  VAR_21 = FUNC_10 (VAR_18, VAR_20);
  VAR_22 = FUNC_14 (VAR_21, VAR_21->next_bb, VAR_0);
  VAR_22->count = VAR_21->count;
  VAR_22->probability = VAR_3;
}
