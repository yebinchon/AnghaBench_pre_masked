
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {int first_save_gpr; int last_save_gpr; int first_restore_gpr; int last_restore_gpr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 TYPE_1__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int,int,int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_19 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_20 (void)
{
  rtx VAR_14, VAR_15, VAR_16;



  FUNC_17 ();




  if (VAR_12.first_save_gpr <= VAR_0
      && VAR_12.last_save_gpr >= VAR_0
      && (VAR_9
          || (VAR_12.first_save_gpr <= VAR_6
              && VAR_12.last_save_gpr >= VAR_6)))
    return;



  for (VAR_14 = FUNC_13 (); VAR_14; VAR_14 = VAR_16)
    {
      int VAR_17, VAR_18, VAR_19;
      rtx VAR_20, VAR_21, VAR_22;

      VAR_16 = FUNC_3 (VAR_14);

      if (FUNC_0 (VAR_14) != VAR_2)
 continue;

      if (FUNC_0 (FUNC_4 (VAR_14)) == VAR_4
   && FUNC_19 (FUNC_4 (VAR_14), VAR_11))
 {
   VAR_20 = FUNC_9 (FUNC_4 (VAR_14), 0, 0);
   VAR_17 = FUNC_5 (FUNC_7 (VAR_20));
   VAR_18 = VAR_17 + FUNC_10 (FUNC_4 (VAR_14), 0) - 1;
   VAR_22 = VAR_13;
   VAR_21 = FUNC_11 (FUNC_8 (FUNC_6 (VAR_20), 0), &VAR_22);
   VAR_19 = FUNC_2 (VAR_22);

   if (FUNC_0 (VAR_21) != VAR_5 || VAR_19 < 0)
     continue;
   if (VAR_12.first_save_gpr != -1
       && (VAR_12.first_save_gpr < VAR_17
    || VAR_12.last_save_gpr > VAR_18))
     continue;
   if (FUNC_5 (VAR_21) != VAR_8
       && FUNC_5 (VAR_21) != VAR_1)
     continue;
   if (VAR_17 > VAR_0 || VAR_18 < VAR_0)
     continue;

   if (VAR_12.first_save_gpr != -1)
     {
       VAR_15 = FUNC_18 (VAR_21,
         VAR_19 + (VAR_12.first_save_gpr
         - VAR_17) * VAR_10,
         VAR_12.first_save_gpr,
         VAR_12.last_save_gpr);
       VAR_15 = FUNC_12 (VAR_15, VAR_14);
       FUNC_1 (VAR_15, -1);
     }

   FUNC_15 (VAR_14);
   continue;
 }

      if (VAR_12.first_save_gpr == -1
   && FUNC_0 (FUNC_4 (VAR_14)) == VAR_7
   && FUNC_0 (FUNC_7 (FUNC_4 (VAR_14))) == VAR_5
   && (FUNC_5 (FUNC_7 (FUNC_4 (VAR_14))) == VAR_0
       || (!VAR_9
    && FUNC_5 (FUNC_7 (FUNC_4 (VAR_14))) == VAR_6))
   && FUNC_0 (FUNC_6 (FUNC_4 (VAR_14))) == VAR_3)
 {
   VAR_20 = FUNC_4 (VAR_14);
   VAR_17 = FUNC_5 (FUNC_7 (VAR_20));
   VAR_22 = VAR_13;
   VAR_21 = FUNC_11 (FUNC_8 (FUNC_6 (VAR_20), 0), &VAR_22);
   VAR_19 = FUNC_2 (VAR_22);

   if (FUNC_0 (VAR_21) != VAR_5 || VAR_19 < 0)
     continue;
   if (FUNC_5 (VAR_21) != VAR_8
       && FUNC_5 (VAR_21) != VAR_1)
     continue;

   FUNC_15 (VAR_14);
   continue;
 }

      if (FUNC_0 (FUNC_4 (VAR_14)) == VAR_4
   && FUNC_14 (FUNC_4 (VAR_14), VAR_11))
 {
   VAR_20 = FUNC_9 (FUNC_4 (VAR_14), 0, 0);
   VAR_17 = FUNC_5 (FUNC_6 (VAR_20));
   VAR_18 = VAR_17 + FUNC_10 (FUNC_4 (VAR_14), 0) - 1;
   VAR_22 = VAR_13;
   VAR_21 = FUNC_11 (FUNC_8 (FUNC_7 (VAR_20), 0), &VAR_22);
   VAR_19 = FUNC_2 (VAR_22);

   if (FUNC_0 (VAR_21) != VAR_5 || VAR_19 < 0)
     continue;
   if (VAR_12.first_restore_gpr != -1
       && (VAR_12.first_restore_gpr < VAR_17
    || VAR_12.last_restore_gpr > VAR_18))
     continue;
   if (FUNC_5 (VAR_21) != VAR_8
       && FUNC_5 (VAR_21) != VAR_1)
     continue;
   if (VAR_17 > VAR_0 || VAR_18 < VAR_0)
     continue;

   if (VAR_12.first_restore_gpr != -1)
     {
       VAR_15 = FUNC_16 (VAR_21,
           VAR_19 + (VAR_12.first_restore_gpr
           - VAR_17) * VAR_10,
           VAR_12.first_restore_gpr,
           VAR_12.last_restore_gpr);
       VAR_15 = FUNC_12 (VAR_15, VAR_14);
       FUNC_1 (VAR_15, -1);
     }

   FUNC_15 (VAR_14);
   continue;
 }

      if (VAR_12.first_restore_gpr == -1
   && FUNC_0 (FUNC_4 (VAR_14)) == VAR_7
   && FUNC_0 (FUNC_6 (FUNC_4 (VAR_14))) == VAR_5
   && (FUNC_5 (FUNC_6 (FUNC_4 (VAR_14))) == VAR_0
       || (!VAR_9
    && FUNC_5 (FUNC_6 (FUNC_4 (VAR_14))) == VAR_6))
   && FUNC_0 (FUNC_7 (FUNC_4 (VAR_14))) == VAR_3)
 {
   VAR_20 = FUNC_4 (VAR_14);
   VAR_17 = FUNC_5 (FUNC_6 (VAR_20));
   VAR_22 = VAR_13;
   VAR_21 = FUNC_11 (FUNC_8 (FUNC_7 (VAR_20), 0), &VAR_22);
   VAR_19 = FUNC_2 (VAR_22);

   if (FUNC_0 (VAR_21) != VAR_5 || VAR_19 < 0)
     continue;
   if (FUNC_5 (VAR_21) != VAR_8
       && FUNC_5 (VAR_21) != VAR_1)
     continue;

   FUNC_15 (VAR_14);
   continue;
 }
    }
}
