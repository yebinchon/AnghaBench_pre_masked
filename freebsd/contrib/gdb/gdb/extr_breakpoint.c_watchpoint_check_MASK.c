
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct value {int dummy; } ;
struct frame_info {int dummy; } ;
struct breakpoint {void* disposition; TYPE_1__* related_breakpoint; int number; struct value* val; int exp; int watchpoint_frame; int * exp_valid_block; } ;
typedef TYPE_2__* bpstat ;
struct TYPE_4__ {struct breakpoint* breakpoint_at; struct value* old_val; } ;
struct TYPE_3__ {void* disposition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct value* FUNC_0 (int ) ;
 struct frame_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct frame_info* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (struct frame_info*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int VAR_5 ;
 int FUNC_12 (struct value*,struct value*) ;
 int FUNC_13 (struct value*) ;
 struct value* FUNC_14 () ;

__attribute__((used)) static int
FUNC_15 (void *VAR_6)
{
  bpstat VAR_7 = (bpstat) VAR_6;
  struct breakpoint *VAR_8;
  struct frame_info *VAR_9;
  int VAR_10;

  VAR_8 = VAR_7->breakpoint_at;

  if (VAR_8->exp_valid_block == ((void*)0))
    VAR_10 = 1;
  else
    {



      FUNC_5 ();
      VAR_9 = FUNC_1 (VAR_8->watchpoint_frame);
      VAR_10 = (VAR_9 != ((void*)0));
      if ((!VAR_10 || VAR_9 == FUNC_3 ())
          && FUNC_2 (VAR_3, FUNC_4 ()))
 return VAR_2;
      if (VAR_9 && VAR_10)



 FUNC_7 (VAR_9);
    }

  if (VAR_10)
    {





      struct value *VAR_11 = FUNC_14 ();
      struct value *VAR_12 = FUNC_0 (VAR_7->breakpoint_at->exp);
      if (!FUNC_12 (VAR_8->val, VAR_12))
 {
   FUNC_6 (VAR_12);
   FUNC_13 (VAR_11);
   VAR_7->old_val = VAR_8->val;
   VAR_8->val = VAR_12;

   return VAR_1;
 }
      else
 {

   FUNC_13 (VAR_11);

   return VAR_2;
 }
    }
  else
    {
      if (FUNC_10 (VAR_5))
 FUNC_9 (VAR_5, "reason", "watchpoint-scope");
      FUNC_11 (VAR_5, "\nWatchpoint ");
      FUNC_8 (VAR_5, "wpnum", VAR_7->breakpoint_at->number);
      FUNC_11 (VAR_5, " deleted because the program has left the block in\nwhich its expression is valid.\n");


      if (VAR_8->related_breakpoint)
 VAR_8->related_breakpoint->disposition = VAR_4;
      VAR_8->disposition = VAR_4;

      return VAR_0;
    }
}
