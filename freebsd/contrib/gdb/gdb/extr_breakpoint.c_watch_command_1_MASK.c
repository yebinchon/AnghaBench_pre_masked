
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct symtab_and_line {int dummy; } ;
struct frame_info {int dummy; } ;
struct expression {int dummy; } ;
struct breakpoint {struct breakpoint* related_breakpoint; TYPE_1__* loc; void* frame_id; int disposition; int enable_state; void* watchpoint_frame; void* cond_string; struct expression* cond; struct value* val; void* exp_string; struct block* exp_valid_block; struct expression* exp; scalar_t__ number; } ;
struct block {int dummy; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;
struct TYPE_2__ {int requested_address; int address; } ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (struct value*) ;
 int FUNC_2 (int ) ;
 struct frame_info* FUNC_3 (struct block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct value*) ;
 struct breakpoint* FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 struct value* FUNC_7 (struct expression*) ;
 void* FUNC_8 (struct frame_info*) ;
 int FUNC_9 (struct frame_info*) ;
 struct frame_info* FUNC_10 (struct frame_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int,int*) ;
 int FUNC_12 (struct symtab_and_line*) ;
 struct block* VAR_11 ;
 int FUNC_13 (void**,int ,int) ;
 int FUNC_14 (struct breakpoint*) ;
 struct expression* FUNC_15 (char**,int ,int ) ;
 int FUNC_16 (struct value*) ;
 void* FUNC_17 (char*,int) ;
 int FUNC_18 (scalar_t__) ;
 struct breakpoint* FUNC_19 (struct symtab_and_line,int) ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 int VAR_12 ;
 int FUNC_21 (struct value*) ;
 int FUNC_22 (struct value*) ;
 struct value* FUNC_23 () ;
 int FUNC_24 (char*) ;

__attribute__((used)) static void
FUNC_25 (char *VAR_13, int VAR_14, int VAR_15)
{
  struct breakpoint *VAR_16;
  struct symtab_and_line VAR_17;
  struct expression *VAR_18;
  struct block *VAR_19;
  struct value *VAR_20, *VAR_21;
  struct frame_info *VAR_22;
  struct frame_info *VAR_23 = ((void*)0);
  char *VAR_24 = ((void*)0);
  char *VAR_25 = ((void*)0);
  char *VAR_26, *VAR_27;
  int VAR_28;
  char *VAR_29 = ((void*)0);
  char *VAR_30 = ((void*)0);
  struct expression *VAR_31 = ((void*)0);
  int VAR_32, VAR_33, VAR_34 = 0;
  enum bptype VAR_35;
  int VAR_36 = 0;

  FUNC_12 (&VAR_17);


  VAR_11 = ((void*)0);
  VAR_24 = VAR_13;
  VAR_18 = FUNC_15 (&VAR_13, 0, 0);
  VAR_25 = VAR_13;
  VAR_19 = VAR_11;
  VAR_21 = FUNC_23 ();
  VAR_20 = FUNC_7 (VAR_18);
  FUNC_16 (VAR_20);
  if (FUNC_1 (VAR_20))
    FUNC_21 (VAR_20);

  VAR_26 = VAR_13;
  while (*VAR_26 == ' ' || *VAR_26 == '\t')
    VAR_26++;
  VAR_27 = VAR_26;

  while (*VAR_27 != ' ' && *VAR_27 != '\t' && *VAR_27 != '\000')
    VAR_27++;

  VAR_28 = VAR_27 - VAR_26;
  if (VAR_28 >= 1 && FUNC_20 (VAR_26, "if", VAR_28) == 0)
    {
      VAR_26 = VAR_29 = VAR_27 + 1;
      VAR_31 = FUNC_15 (&VAR_26, 0, 0);
      VAR_30 = VAR_26;
    }
  if (*VAR_26)
    FUNC_6 ("Junk at end of command.");

  if (VAR_14 == VAR_10)
    VAR_35 = VAR_3;
  else if (VAR_14 == VAR_9)
    VAR_35 = VAR_0;
  else
    VAR_35 = VAR_2;

  VAR_36 = FUNC_4 (VAR_20);
  if (VAR_36 == 0 && VAR_35 != VAR_2)
    FUNC_6 ("Expression cannot be implemented with read/access watchpoint.");
  if (VAR_36 != 0)
    {
      VAR_32 = FUNC_11 (VAR_35, &VAR_33);
      VAR_34 =
 FUNC_0 (VAR_35, VAR_32 + VAR_36,
         VAR_33);
      if (VAR_34 == 0 && VAR_35 != VAR_2)
 FUNC_6 ("Target does not support this type of hardware watchpoint.");

      if (VAR_34 < 0 && VAR_35 != VAR_2)
 FUNC_6 ("Target can only support one kind of HW watchpoint at a time.");
    }
  if (!VAR_36 || VAR_34 <= 0)
    VAR_35 = VAR_4;


  VAR_16 = FUNC_19 (VAR_17, VAR_35);
  FUNC_18 (VAR_6 + 1);
  VAR_16->number = VAR_6;
  VAR_16->disposition = VAR_8;
  VAR_16->exp = VAR_18;
  VAR_16->exp_valid_block = VAR_19;
  VAR_16->exp_string = FUNC_17 (VAR_24, VAR_25 - VAR_24);
  VAR_16->val = VAR_20;
  VAR_16->cond = VAR_31;
  if (VAR_29)
    VAR_16->cond_string = FUNC_17 (VAR_29, VAR_30 - VAR_29);
  else
    VAR_16->cond_string = 0;

  VAR_22 = FUNC_3 (VAR_19);
  if (VAR_22)
    {
      VAR_23 = FUNC_10 (VAR_22);
      VAR_16->watchpoint_frame = FUNC_8 (VAR_22);
    }
  else
    {
      FUNC_13 (&VAR_16->watchpoint_frame, 0, sizeof (VAR_16->watchpoint_frame));
    }




  if (VAR_11)
    {
      if (VAR_23)
 {
   struct breakpoint *VAR_37;
   VAR_37 = FUNC_5 (FUNC_9 (VAR_23),
        VAR_5);

   VAR_37->enable_state = VAR_1;


   VAR_37->disposition = VAR_7;


   VAR_37->frame_id = FUNC_8 (VAR_23);


   VAR_37->loc->requested_address
     = FUNC_9 (VAR_23);
   VAR_37->loc->address
     = FUNC_2 (VAR_37->loc->requested_address);



   VAR_16->related_breakpoint = VAR_37;
 }
    }
  FUNC_22 (VAR_21);
  FUNC_14 (VAR_16);
}
