
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct frame_info {int dummy; } ;
struct breakpoint {scalar_t__ type; scalar_t__ enable_state; int disposition; int number; int val; int exp; int watchpoint_frame; int * exp_valid_block; scalar_t__ pending; } ;
typedef enum bpdisp { ____Placeholder_bpdisp } bpdisp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct breakpoint*) ;
 int FUNC_6 (struct breakpoint*) ;
 struct frame_info* VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 struct frame_info* VAR_10 ;
 struct frame_info* FUNC_9 (int ) ;
 int FUNC_10 (struct frame_info*) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__,int*) ;
 int FUNC_13 (struct breakpoint*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct breakpoint*) ;
 int FUNC_17 (struct frame_info*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct value*) ;
 struct value* FUNC_21 () ;

__attribute__((used)) static void
FUNC_22 (struct breakpoint *VAR_11, enum bpdisp VAR_12)
{
  struct frame_info *VAR_13 = ((void*)0);
  int VAR_14 = -1;
  int VAR_15, VAR_16;
  struct value *VAR_17;

  if (VAR_11->type == VAR_4)
    {
      int VAR_18;
      VAR_18 = FUNC_11 ();
      VAR_15 =
 FUNC_0 (VAR_4,
         VAR_18 + 1, 0);
      if (VAR_15 == 0)
 FUNC_7 ("No hardware breakpoint support in the target.");
      else if (VAR_15 < 0)
 FUNC_7 ("Hardware breakpoints used exceeds limit.");
    }

  if (VAR_11->pending)
    {
      if (VAR_11->enable_state != VAR_3)
 {



   FUNC_3 ();
    if (FUNC_16 (VAR_11) == VAR_0)
     {
       FUNC_6 (VAR_11);
       return;
     }
   VAR_11->enable_state = VAR_3;
   VAR_11->disposition = VAR_12;
 }
    }
  else
    {
      if (VAR_11->enable_state != VAR_6)
 VAR_11->enable_state = VAR_3;
      VAR_11->disposition = VAR_12;
      FUNC_5 (VAR_11);
      FUNC_3 ();

      if (VAR_11->type == VAR_8 ||
   VAR_11->type == VAR_5 ||
   VAR_11->type == VAR_7 ||
   VAR_11->type == VAR_1)
 {
   if (VAR_11->exp_valid_block != ((void*)0))
     {
       struct frame_info *VAR_19 =
  VAR_19 = FUNC_9 (VAR_11->watchpoint_frame);
       if (VAR_19 == ((void*)0))
  {
    FUNC_14 ("Cannot enable watchpoint %d because the block in which its expression\nis valid is not currently in scope.\n", VAR_11->number);


    VAR_11->enable_state = VAR_2;
    return;
  }

       VAR_13 = VAR_9;
       VAR_14 = FUNC_10 (VAR_9);
       FUNC_17 (VAR_19);
     }

   FUNC_19 (VAR_11->val);
   VAR_17 = FUNC_21 ();
   VAR_11->val = FUNC_8 (VAR_11->exp);
   FUNC_15 (VAR_11->val);
   if (FUNC_1 (VAR_11->val))
     FUNC_18 (VAR_11->val);

   if (VAR_11->type == VAR_5 ||
       VAR_11->type == VAR_7 ||
       VAR_11->type == VAR_1)
     {
       int VAR_20 = FUNC_12 (VAR_11->type, &VAR_16);
       int VAR_21 = FUNC_4 (VAR_11->val);


       (void) VAR_21, VAR_20;
       VAR_15 = FUNC_0 (
         VAR_11->type, VAR_20 + VAR_21, VAR_16);


       if (VAR_15 < 0)
  {
    FUNC_14 ("Cannot enable watchpoint %d because target watch resources\nhave been allocated for other watchpoints.\n", VAR_11->number);


    VAR_11->enable_state = VAR_2;
    FUNC_20 (VAR_17);
    return;
  }
     }

   if (VAR_14 >= 0)
     FUNC_17 (VAR_13);
   FUNC_20 (VAR_17);
 }
    }

  if (&FUNC_13)
    FUNC_13 (VAR_11);
  FUNC_2 (VAR_11->number);
}
