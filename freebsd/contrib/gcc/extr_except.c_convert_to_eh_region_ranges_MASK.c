
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_region {scalar_t__ landing_pad; struct eh_region* outer; } ;
typedef scalar_t__ rtx ;
typedef int htab_t ;
struct TYPE_4__ {int uses_eh_lsda; TYPE_1__* eh; } ;
struct TYPE_3__ {int region_array; int action_record_data; int * region_tree; } ;
typedef int NOTE_EH_HANDLER ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,int,char*) ;
 struct eh_region* FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__,int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_12 (int ,struct eh_region*) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int,int ,int ,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;

unsigned int
FUNC_20 (void)
{
  rtx VAR_12, VAR_13, VAR_14;
  htab_t VAR_15;
  int VAR_16 = -3;
  rtx VAR_17 = VAR_2;
  rtx VAR_18 = VAR_2;
  rtx VAR_19 = VAR_2;
  int VAR_20 = 0;

  if (VAR_5 || VAR_8->eh->region_tree == ((void*)0))
    return 0;

  FUNC_7 (VAR_8->eh->action_record_data, 64, "action_record_data");

  VAR_15 = FUNC_17 (31, VAR_7, VAR_6, VAR_11);

  for (VAR_13 = FUNC_16 (); VAR_13 ; VAR_13 = FUNC_4 (VAR_13))
    if (FUNC_2 (VAR_13))
      {
 struct eh_region *VAR_21;
 int VAR_22;
 rtx VAR_23;

 VAR_12 = VAR_13;
 if (FUNC_5 (VAR_12)
     && FUNC_1 (FUNC_6 (VAR_12)) == VAR_4)
   VAR_12 = FUNC_10 (FUNC_6 (VAR_12), 0, 0);

 VAR_14 = FUNC_15 (VAR_12, VAR_3, VAR_2);
 if (!VAR_14)
   {
     if (! (FUNC_0 (VAR_12)
     || (VAR_10
         && FUNC_19 (FUNC_6 (VAR_12)))))
       continue;
     VAR_22 = -1;
     VAR_21 = ((void*)0);
   }
 else
   {
     if (FUNC_3 (FUNC_9 (VAR_14, 0)) <= 0)
       continue;
     VAR_21 = FUNC_8 (VAR_9, VAR_8->eh->region_array, FUNC_3 (FUNC_9 (VAR_14, 0)));
     VAR_22 = FUNC_12 (VAR_15, VAR_21);
   }



 if (VAR_22 != -1)
   VAR_8->uses_eh_lsda = 1;



 else if (VAR_16 == -3)
   {
     VAR_19 = VAR_13;
     VAR_16 = -1;
   }



 if (VAR_22 >= 0)
   {
     struct eh_region *VAR_24;
     for (VAR_24 = VAR_21; ! VAR_24->landing_pad ; VAR_24 = VAR_24->outer)
       continue;
     VAR_23 = VAR_24->landing_pad;
   }
 else
   VAR_23 = VAR_2;



 if (VAR_16 != VAR_22
     || VAR_18 != VAR_23)
   {



     if (VAR_16 >= -1)
       {

  if (VAR_19)
    {
      VAR_20 = FUNC_11 (VAR_2, 0);
      VAR_14 = FUNC_14 (VAR_0,
          VAR_19);
      NOTE_EH_HANDLER (VAR_25) = VAR_20;
      VAR_19 = VAR_2;
    }

  VAR_14 = FUNC_13 (VAR_1,
     VAR_17);
  NOTE_EH_HANDLER (VAR_26) = VAR_20;
       }



     if (VAR_22 >= -1)
       {
  VAR_20 = FUNC_11 (VAR_23,
        VAR_22 < 0 ? 0 : VAR_22);
  VAR_14 = FUNC_14 (VAR_0, VAR_13);
  NOTE_EH_HANDLER (VAR_27) = VAR_20;
       }

     VAR_16 = VAR_22;
     VAR_18 = VAR_23;
   }
 VAR_17 = VAR_13;
      }

  if (VAR_16 >= -1 && ! VAR_19)
    {
      VAR_14 = FUNC_13 (VAR_1, VAR_17);
      NOTE_EH_HANDLER (VAR_28) = VAR_20;
    }

  FUNC_18 (VAR_15);
  return 0;
}
