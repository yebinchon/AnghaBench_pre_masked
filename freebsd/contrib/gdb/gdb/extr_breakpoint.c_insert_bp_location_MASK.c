
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct value {struct value* next; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;
struct bp_location {int inserted; scalar_t__ loc_type; TYPE_3__* owner; scalar_t__ address; int shadow_contents; int * section; scalar_t__ duplicate; } ;
struct TYPE_8__ {int enable_p; int kind; } ;
typedef TYPE_2__ args_for_catchpoint_enable ;
struct TYPE_9__ {scalar_t__ disposition; scalar_t__ type; void* enable_state; int number; TYPE_1__* related_breakpoint; struct value* val_chain; int exp; int watchpoint_frame; int * exp_valid_block; } ;
struct TYPE_7__ {scalar_t__ disposition; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (struct value*) ;
 scalar_t__ FUNC_7 (struct value*) ;
 int FUNC_8 (struct value*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_2__*,char*,int ) ;
 int FUNC_11 (int ,int ,TYPE_3__*,char*,int ) ;
 struct type* FUNC_12 (int ) ;
 int VAR_17 ;
 struct frame_info* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_13 (struct cleanup*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 struct value* FUNC_15 (int ) ;
 int FUNC_16 (struct ui_file*,char*,...) ;
 int FUNC_17 (struct ui_file*,char*,...) ;
 struct frame_info* FUNC_18 (int ) ;
 int FUNC_19 (struct frame_info*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 struct cleanup* FUNC_20 (int ,char*) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_21 (scalar_t__,int *) ;
 scalar_t__ VAR_28 ;
 int FUNC_22 (scalar_t__,int,struct ui_file*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (struct bp_location*,int ) ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct frame_info*) ;
 int FUNC_29 (scalar_t__,int ) ;
 int FUNC_30 (scalar_t__,int ) ;
 int FUNC_31 (scalar_t__,int,int) ;
 int VAR_29 ;
 struct value* FUNC_32 () ;
 int FUNC_33 (struct value*) ;
 int FUNC_34 (char*,int ) ;
 int VAR_30 ;
 char* FUNC_35 (char*,int ) ;

__attribute__((used)) static int
FUNC_36 (struct bp_location *VAR_31,
      struct ui_file *VAR_32,
      int *VAR_33, int *VAR_34,
      int *VAR_35)
{
  int VAR_36 = 0;



  if (!FUNC_9 (VAR_31->owner))
    return 0;

  if (VAR_31->inserted || VAR_31->duplicate)
    return 0;

  if (VAR_31->loc_type == VAR_14
      || VAR_31->loc_type == VAR_12)
    {

      if (VAR_26 == VAR_28
   || VAR_31->section == ((void*)0)
   || !(FUNC_27 (VAR_31->section)))
 {


   if (VAR_31->loc_type == VAR_12)
     VAR_36 = FUNC_30 (VAR_31->address,
            VAR_31->shadow_contents);
   else
     VAR_36 = FUNC_29 (VAR_31->address,
         VAR_31->shadow_contents);
 }
      else
 {


   if (!VAR_27)
     {



       if (VAR_31->loc_type == VAR_12)
  FUNC_34 ("hardware breakpoint %d not supported in overlay!\n",
    VAR_31->owner->number);
       else
  {
    CORE_ADDR VAR_37 = FUNC_21 (VAR_31->address,
            VAR_31->section);

    VAR_36 = FUNC_29 (VAR_37, VAR_31->shadow_contents);
    if (VAR_36 != 0)
      FUNC_17 (VAR_32,
     "Overlay breakpoint %d failed: in ROM?",
     VAR_31->owner->number);
  }
     }

   if (FUNC_26 (VAR_31->section))
     {

       if (VAR_31->loc_type == VAR_12)
  VAR_36 = FUNC_30 (VAR_31->address,
         VAR_31->shadow_contents);
       else
  VAR_36 = FUNC_29 (VAR_31->address,
      VAR_31->shadow_contents);
     }
   else
     {


       return 0;
     }
 }

      if (VAR_36)
 {
     {



       if (VAR_31->loc_type == VAR_12)
  {
    *VAR_35 = 1;
    FUNC_17 (VAR_32,
          "Cannot insert hardware breakpoint %d.\n",
          VAR_31->owner->number);
  }
       else
  {
    FUNC_17 (VAR_32,
          "Cannot insert breakpoint %d.\n",
          VAR_31->owner->number);
    FUNC_16 (VAR_32,
        "Error accessing memory address ");
    FUNC_22 (VAR_31->address, 1, VAR_32);
    FUNC_16 (VAR_32, ": %s.\n",
        FUNC_25 (VAR_36));
  }

     }
 }
      else
 VAR_31->inserted = 1;

      return VAR_36;
    }

  else if (VAR_31->loc_type == VAR_13


    && VAR_31->owner->disposition != VAR_19)
    {






      struct frame_info *VAR_38;
      int VAR_39, VAR_40;
      struct value *VAR_41 = FUNC_32 ();
      struct value *VAR_42;






      VAR_38 = VAR_18;
      VAR_39 = FUNC_19 (VAR_18);


      if (VAR_31->owner->exp_valid_block == ((void*)0))
 VAR_40 = 1;
      else
 {
   struct frame_info *VAR_43;
   VAR_43 = FUNC_18 (VAR_31->owner->watchpoint_frame);
   VAR_40 = (VAR_43 != ((void*)0));
   if (VAR_40)
     FUNC_28 (VAR_43);
 }

      if (VAR_40)
 {






   VAR_42 = FUNC_15 (VAR_31->owner->exp);
   FUNC_4 (VAR_42);
   FUNC_33 (VAR_41);

   VAR_31->owner->val_chain = VAR_42;
   VAR_31->inserted = 1;


   for (; VAR_42; VAR_42 = VAR_42->next)
     {



       if (FUNC_6 (VAR_42) == VAR_24
    && ! FUNC_5 (VAR_42))
  {
    struct type *VAR_44 = FUNC_12 (FUNC_8 (VAR_42));




    if (VAR_42 == VAR_31->owner->val_chain
        || (FUNC_1 (VAR_44) != VAR_5
     && FUNC_1 (VAR_44) != VAR_4))
      {
        CORE_ADDR VAR_45;
        int VAR_46, VAR_47;

        VAR_45 = FUNC_3 (VAR_42) + FUNC_7 (VAR_42);
        VAR_46 = FUNC_2 (FUNC_8 (VAR_42));
        VAR_47 = VAR_22;
        if (VAR_31->owner->type == VAR_15)
   VAR_47 = VAR_21;
        else if (VAR_31->owner->type == VAR_6)
   VAR_47 = VAR_20;

        VAR_36 = FUNC_31 (VAR_45, VAR_46, VAR_47);
        if (VAR_36 == -1)
   {






     VAR_31->inserted = 0;
   }
        VAR_36 = 0;
      }
  }
     }


   if (!VAR_31->inserted)
     {
       FUNC_24 (VAR_31, VAR_25);
       *VAR_35 = 1;
       FUNC_17 (VAR_32,
      "Could not insert hardware watchpoint %d.\n",
      VAR_31->owner->number);
       VAR_36 = -1;
     }
 }
      else
 {
   FUNC_23 ("Hardware watchpoint %d deleted ", VAR_31->owner->number);
   FUNC_23 ("because the program has left the block \n");
   FUNC_23 ("in which its expression is valid.\n");
   if (VAR_31->owner->related_breakpoint)
     VAR_31->owner->related_breakpoint->disposition = VAR_19;
   VAR_31->owner->disposition = VAR_19;
 }


      if (VAR_38 != VAR_18
   || VAR_39 != FUNC_19 (VAR_18))
 FUNC_28 (VAR_38);

      return VAR_36;
    }

  else if (FUNC_14 (VAR_31->owner))
    {







      VAR_36 = FUNC_29 (VAR_31->address, VAR_31->shadow_contents);
      if (VAR_36)
 {

   FUNC_17 (VAR_32,
         "Cannot insert catchpoint %d; disabling it.\n",
         VAR_31->owner->number);
   FUNC_16 (VAR_32,
       "Error accessing memory address ");
   FUNC_22 (VAR_31->address, 1, VAR_32);
   FUNC_16 (VAR_32, ": %s.\n",
       FUNC_25 (VAR_36));
   VAR_31->owner->enable_state = VAR_11;
 }
      else
 {


   char *VAR_48 = FUNC_35 ("Error inserting catchpoint %d:\n",
          VAR_31->owner->number);
   struct cleanup *VAR_49 = FUNC_20 (VAR_30, VAR_48);
   int VAR_50;
   args_for_catchpoint_enable VAR_51;
   VAR_51.kind = VAR_31->owner->type == VAR_7 ?
     VAR_0 : VAR_1;
   VAR_51.enable_p = 1;
   VAR_50 = FUNC_10 (VAR_17,
         &VAR_51, VAR_48, VAR_2);
   FUNC_13 (VAR_49);
   if (VAR_50 != 0 && VAR_50 != -1)
     VAR_31->inserted = 1;


   if (VAR_50 == -1)
     {

       FUNC_17 (VAR_32,
      "Cannot insert catchpoint %d; disabling it.\n",
      VAR_31->owner->number);
       VAR_31->owner->enable_state = VAR_11;
     }
 }

      return VAR_36;
    }

  else if (VAR_31->owner->type == VAR_9
    || VAR_31->owner->type == VAR_10
    || VAR_31->owner->type == VAR_8)
    {
      char *VAR_52 = FUNC_35 ("warning: inserting catchpoint %d: ",
     VAR_31->owner->number);
      struct cleanup *VAR_53 = FUNC_20 (VAR_30, VAR_52);
      VAR_36 = FUNC_11 (VAR_29, VAR_23, VAR_31->owner, VAR_52,
         VAR_3);
      FUNC_13 (VAR_53);
      if (VAR_36 < 0)
 VAR_31->owner->enable_state = VAR_11;
      else
 VAR_31->inserted = 1;




      return 0;
    }

  return 0;
}
