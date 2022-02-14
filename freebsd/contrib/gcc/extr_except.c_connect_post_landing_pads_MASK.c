
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct eh_region {int region_number; scalar_t__ type; int * label; scalar_t__ resume; scalar_t__ post_landing_pad; struct eh_region* outer; } ;
typedef scalar_t__ rtx ;
typedef TYPE_2__* edge ;
typedef TYPE_3__* basic_block ;
struct TYPE_13__ {TYPE_1__* eh; } ;
struct TYPE_12__ {int count; int succs; } ;
struct TYPE_11__ {int count; int probability; } ;
struct TYPE_10__ {int last_region_number; int exc_ptr; int region_array; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 struct eh_region* FUNC_6 (int ,int ,int) ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,int ,int,int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_2__* FUNC_16 (TYPE_3__*,TYPE_3__*,int ) ;
 int VAR_6 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct eh_region*) ;
 int FUNC_19 () ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_20 (void)
{
  int VAR_8;

  for (VAR_8 = VAR_4->eh->last_region_number; VAR_8 > 0; --VAR_8)
    {
      struct eh_region *VAR_9;
      struct eh_region *VAR_10;
      rtx VAR_11;
      rtx VAR_12;

      VAR_9 = FUNC_6 (VAR_5, VAR_4->eh->region_array, VAR_8);

      if (!VAR_9 || VAR_9->region_number != VAR_8)
 continue;



      if (! VAR_9->resume || FUNC_4 (VAR_9->resume))
 continue;


      for (VAR_10 = VAR_9->outer; VAR_10 ; VAR_10 = VAR_10->outer)
 if (VAR_10->post_landing_pad)
   break;

      FUNC_19 ();

      if (VAR_10)
 {
   edge VAR_13;
   basic_block VAR_14, VAR_15;

   FUNC_10 (VAR_10->post_landing_pad);
   VAR_14 = FUNC_1 (VAR_9->resume);
   VAR_15 = FUNC_1 (VAR_10->post_landing_pad);
   while (FUNC_2 (VAR_14->succs) > 0)
     FUNC_17 (FUNC_3 (VAR_14, 0));
   VAR_13 = FUNC_16 (VAR_14, VAR_15, 0);
   VAR_13->probability = VAR_2;
   VAR_13->count = VAR_14->count;
 }
      else
 {
   FUNC_11 (VAR_7, VAR_1,
        VAR_3, 1, VAR_4->eh->exc_ptr, VAR_6);
   FUNC_8 (FUNC_5 (FUNC_15 ()));
 }

      VAR_11 = FUNC_14 ();
      FUNC_12 ();
      VAR_12 = FUNC_9 (VAR_11, VAR_9->resume);

      FUNC_13 (FUNC_0 (VAR_12));
      FUNC_7 (VAR_12);
      FUNC_7 (VAR_9->resume);




      if (VAR_9->label == ((void*)0) && VAR_9->type == VAR_0)
 FUNC_18 (VAR_9);
    }
}
