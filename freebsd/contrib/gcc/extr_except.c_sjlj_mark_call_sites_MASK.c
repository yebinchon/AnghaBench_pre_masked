
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sjlj_lp_info {int call_site_index; } ;
struct eh_region {size_t region_number; } ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int sjlj_fc; int region_array; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 struct eh_region* FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_16 () ;
 int VAR_5 ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_6 ;
 int FUNC_18 () ;

__attribute__((used)) static void
FUNC_19 (struct sjlj_lp_info *VAR_7)
{
  int VAR_8 = -2;
  rtx VAR_9, VAR_10;

  for (VAR_9 = FUNC_16 (); VAR_9 ; VAR_9 = FUNC_5 (VAR_9))
    {
      struct eh_region *VAR_11;
      int VAR_12;
      rtx VAR_13, VAR_14, VAR_15;


      if (FUNC_4 (VAR_9))
 VAR_8 = -2;

      if (! FUNC_2 (VAR_9))
 continue;

      VAR_13 = FUNC_15 (VAR_9, VAR_1, VAR_0);
      if (!VAR_13)
 {



   if (FUNC_0 (VAR_9)
       || (VAR_4
    && FUNC_17 (FUNC_6 (VAR_9))))
     VAR_12 = -1;
   else
     continue;
 }
      else
 {

   if (FUNC_3 (FUNC_9 (VAR_13, 0)) <= 0)
     continue;

   VAR_11 = FUNC_8 (VAR_3, VAR_2->eh->region_array, FUNC_3 (FUNC_9 (VAR_13, 0)));
   VAR_12 = VAR_7[VAR_11->region_number].call_site_index;
 }

      if (VAR_12 == VAR_8)
 continue;


      VAR_14 = VAR_9;
      if (FUNC_0 (VAR_9))
 VAR_14 = FUNC_14 (VAR_9, VAR_0);

      FUNC_18 ();
      VAR_10 = FUNC_10 (VAR_2->eh->sjlj_fc, FUNC_7 (VAR_5),
       VAR_6);
      FUNC_12 (VAR_10, FUNC_1 (VAR_12));
      VAR_15 = FUNC_16 ();
      FUNC_13 ();

      FUNC_11 (VAR_15, VAR_14);
      VAR_8 = VAR_12;
    }
}
