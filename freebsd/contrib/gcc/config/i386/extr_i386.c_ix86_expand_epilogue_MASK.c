
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ix86_frame {int nregs; int to_allocate; } ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ force_align_arg_pointer; scalar_t__ use_fast_prologue_epilogue; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (struct ix86_frame*) ;
 int FUNC_18 (scalar_t__,int,int) ;
 scalar_t__ FUNC_19 (int,int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_20 (scalar_t__,int) ;
 int FUNC_21 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_18 ;

void
FUNC_22 (int VAR_19)
{
  int VAR_20;
  int VAR_21 = !VAR_15 || VAR_14;
  struct ix86_frame VAR_22;
  HOST_WIDE_INT VAR_23;

  FUNC_17 (&VAR_22);





  VAR_23 = VAR_22.nregs;
  if (VAR_12 && VAR_19 != 2)
    VAR_23 -= 2;
  VAR_23 *= -VAR_7;
  if ((!VAR_21 && VAR_22.nregs <= 1)
      || (VAR_5
   && VAR_9->machine->use_fast_prologue_epilogue
   && (VAR_22.nregs > 1 || VAR_22.to_allocate))
      || (VAR_15 && !VAR_22.nregs && VAR_22.to_allocate)
      || (VAR_15 && VAR_6
   && VAR_9->machine->use_fast_prologue_epilogue
   && VAR_22.nregs == 1)
      || VAR_12)
    {






      if (!VAR_15 || (VAR_21 && !VAR_22.to_allocate))
 FUNC_18 (VAR_18,
       VAR_22.to_allocate, VAR_19 == 2);
      else
 FUNC_18 (VAR_16,
       VAR_23, VAR_19 == 2);


      if (VAR_19 == 2)
 {
   rtx VAR_24, VAR_25 = VAR_0;

   if (VAR_15)
     {
       VAR_24 = FUNC_14 (VAR_2, VAR_16, VAR_25);
       VAR_24 = FUNC_20 (VAR_24, VAR_7);
       FUNC_1 (FUNC_16 (VAR_8, VAR_25, VAR_24));

       VAR_24 = FUNC_13 (VAR_2, VAR_16);
       FUNC_3 (VAR_16, VAR_24);

       FUNC_21 (VAR_18, VAR_25,
      VAR_10, VAR_19);
     }
   else
     {
       VAR_24 = FUNC_14 (VAR_2, VAR_18, VAR_25);
       VAR_24 = FUNC_20 (VAR_24, (VAR_22.to_allocate
                                         + VAR_22.nregs * VAR_7));
       FUNC_1 (FUNC_16 (VAR_8, VAR_18, VAR_24));
     }
 }
      else if (!VAR_15)
 FUNC_21 (VAR_18, VAR_18,
       FUNC_0 (VAR_22.to_allocate
         + VAR_22.nregs * VAR_7),
       VAR_19);

      else if (VAR_6 || VAR_17
        || !VAR_9->machine->use_fast_prologue_epilogue)
 FUNC_1 (VAR_4 ? FUNC_7 () : FUNC_6 ());
      else
 {
   FUNC_21 (VAR_18,
         VAR_16,
         VAR_10, VAR_19);
   if (VAR_4)
     FUNC_1 (FUNC_8 (VAR_16));
   else
     FUNC_1 (FUNC_9 (VAR_16));
 }
    }
  else
    {


      if (!VAR_21)
 {
   FUNC_4 (VAR_15);
   FUNC_21 (VAR_18,
         VAR_16,
         FUNC_0 (VAR_23), VAR_19);
 }
      else if (VAR_22.to_allocate)
 FUNC_21 (VAR_18, VAR_18,
       FUNC_0 (VAR_22.to_allocate), VAR_19);

      for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++)
 if (FUNC_19 (VAR_20, 0))
   {
     if (VAR_4)
       FUNC_1 (FUNC_8 (FUNC_15 (VAR_2, VAR_20)));
     else
       FUNC_1 (FUNC_9 (FUNC_15 (VAR_2, VAR_20)));
   }
      if (VAR_15)
 {


   if (VAR_6)
     FUNC_1 (VAR_4 ? FUNC_7 () : FUNC_6 ());
   else if (VAR_4)
     FUNC_1 (FUNC_8 (VAR_16));
   else
     FUNC_1 (FUNC_9 (VAR_16));
 }
    }

  if (VAR_9->machine->force_align_arg_pointer)
    {
      FUNC_1 (FUNC_5 (VAR_18,
        VAR_9->machine->force_align_arg_pointer,
        FUNC_0 (-4)));
    }


  if (VAR_19 == 0)
    return;

  if (VAR_13 && VAR_11)
    {
      rtx VAR_26 = FUNC_0 (VAR_13);





      if (VAR_13 >= 65536)
 {
   rtx VAR_27 = FUNC_15 (VAR_3, 2);


   FUNC_4 (!VAR_4);

   FUNC_1 (FUNC_9 (VAR_27));
   FUNC_1 (FUNC_5 (VAR_18, VAR_18, VAR_26));
   FUNC_2 (FUNC_10 (VAR_27));
 }
      else
 FUNC_2 (FUNC_12 (VAR_26));
    }
  else
    FUNC_2 (FUNC_11 ());
}
