
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct eh_region {int region_number; scalar_t__ type; int post_landing_pad; int landing_pad; } ;
typedef int rtx ;
typedef TYPE_2__* edge ;
typedef TYPE_3__* basic_block ;
struct TYPE_13__ {TYPE_1__* eh; } ;
struct TYPE_12__ {int (* eh_return_filter_mode ) () ;} ;
struct TYPE_11__ {int count; int next_bb; } ;
struct TYPE_10__ {int probability; int count; } ;
struct TYPE_9__ {int last_region_number; int filter; int exc_ptr; int region_array; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct eh_region* FUNC_1 (int ,int ,int) ;
 TYPE_8__* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 TYPE_2__* FUNC_12 (TYPE_3__*,int ,int ) ;
 int VAR_9 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static void
FUNC_15 (void)
{
  int VAR_11;

  for (VAR_11 = VAR_7->eh->last_region_number; VAR_11 > 0; --VAR_11)
    {
      struct eh_region *VAR_12;
      rtx VAR_13;
      basic_block VAR_14;
      edge VAR_15;

      VAR_12 = FUNC_1 (VAR_8, VAR_7->eh->region_array, VAR_11);

      if (!VAR_12 || VAR_12->region_number != VAR_11)
 continue;

      if (VAR_12->type != VAR_2
   && VAR_12->type != VAR_3
   && VAR_12->type != VAR_1)
 continue;

      FUNC_13 ();

      VAR_12->landing_pad = FUNC_8 ();
      FUNC_3 (VAR_12->landing_pad);
   { }

      FUNC_4 (VAR_7->eh->exc_ptr,
        FUNC_10 (VAR_9, FUNC_0 (0)));
      FUNC_4 (VAR_7->eh->filter,
        FUNC_10 (VAR_10.eh_return_filter_mode (),
       FUNC_0 (1)));

      VAR_13 = FUNC_11 ();
      FUNC_6 ();

      VAR_14 = FUNC_5 (VAR_13, VAR_12->post_landing_pad);
      VAR_15 = FUNC_12 (VAR_14, VAR_14->next_bb, VAR_0);
      VAR_15->count = VAR_14->count;
      VAR_15->probability = VAR_6;
    }
}
