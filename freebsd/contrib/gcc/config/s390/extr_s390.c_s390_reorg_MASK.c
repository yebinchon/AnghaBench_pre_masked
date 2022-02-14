
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct constant_pool {int dummy; } ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int decomposed_literal_pool_addresses_ok_p; int split_branches_pending_p; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct constant_pool*) ;
 int FUNC_8 (struct constant_pool*) ;
 struct constant_pool* FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct constant_pool*) ;
 int FUNC_13 (struct constant_pool*) ;
 struct constant_pool* FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18 (void)
{
  bool VAR_3 = 0;



  FUNC_17 ();


  VAR_1->machine->decomposed_literal_pool_addresses_ok_p = 1;
  for (;;)
    {
      struct constant_pool *VAR_4 = ((void*)0);


      if (!VAR_3)
 {
   VAR_4 = FUNC_14 ();
   if (!VAR_4)
     VAR_3 = 1;
 }


      if (VAR_3)
        VAR_4 = FUNC_9 ();





      if (!VAR_0 && FUNC_16 ())
        {
          if (VAR_3)
            FUNC_7 (VAR_4);
   else
            FUNC_12 (VAR_4);

          continue;
        }



      if (VAR_3)
 FUNC_8 (VAR_4);
      else
 FUNC_13 (VAR_4);


      VAR_1->machine->split_branches_pending_p = 0;
      break;
    }


  if (VAR_0)
    {
      rtx VAR_5, VAR_6, VAR_7;

      for (VAR_5 = FUNC_6 (); VAR_5; VAR_5 = FUNC_1 (VAR_5))
 {
   VAR_6 = FUNC_10 (VAR_5);
   if (!VAR_6)
     continue;

   FUNC_5 (VAR_6 != VAR_2);

   VAR_7 = FUNC_4 (FUNC_2 (VAR_6, 0));
   FUNC_0 (VAR_7, -1);

   VAR_7 = FUNC_3 (FUNC_11 (VAR_5));
   FUNC_0 (VAR_7, -1);
 }
    }


  FUNC_15 ();
}
