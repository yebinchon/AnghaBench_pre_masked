
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int var_map ;
typedef TYPE_1__* var_ann_t ;
typedef scalar_t__ tree ;
typedef int root_var_p ;
struct TYPE_3__ {int out_of_ssa_tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__,char*,scalar_t__,char*,scalar_t__,char*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_16 (var_map VAR_6)
{
  int VAR_7, VAR_8, VAR_9, VAR_10;
  tree VAR_11, VAR_12;
  var_ann_t VAR_13;
  root_var_p VAR_14;

  VAR_14 = FUNC_11 (VAR_6);
  if (!VAR_14)
    return;




  VAR_9 = FUNC_4 (VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
      VAR_12 = FUNC_5 (VAR_6, VAR_7);
      if (FUNC_0 (VAR_12) != VAR_1)
 {



   VAR_13 = FUNC_14 (VAR_12);
   VAR_13->out_of_ssa_tag = 1;
   if (VAR_4 && (VAR_5 & VAR_2))
     {
       FUNC_3 (VAR_4, "partition %d has variable ", VAR_7);
       FUNC_7 (VAR_4, VAR_12, VAR_3);
       FUNC_3 (VAR_4, " assigned to it.\n");
     }

 }
    }

  VAR_9 = FUNC_13 (VAR_14);
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
      VAR_12 = FUNC_8 (VAR_14, VAR_7);
      VAR_13 = FUNC_14 (VAR_12);
      for (VAR_8 = FUNC_10 (VAR_14, VAR_7);
    VAR_8 != VAR_0;
    VAR_8 = FUNC_12 (VAR_14, VAR_8))
 {
   VAR_11 = FUNC_5 (VAR_6, VAR_8);

   if (VAR_11 == VAR_12 || FUNC_0 (VAR_11) != VAR_1)
     continue;

   VAR_10 = FUNC_15 (VAR_6, VAR_11);

   if (!VAR_13->out_of_ssa_tag)
     {
       if (VAR_4 && (VAR_5 & VAR_2))
  FUNC_6 (VAR_4, "", VAR_11, "  --> ", VAR_12, "\n");
       FUNC_1 (VAR_6, VAR_12, VAR_10);
       continue;
     }

   if (VAR_4 && (VAR_5 & VAR_2))
     FUNC_6 (VAR_4, "", VAR_11, " not coalesced with ", VAR_12,
    "");

   VAR_12 = FUNC_2 (VAR_11);
   FUNC_1 (VAR_6, VAR_12, VAR_10);
   VAR_13 = FUNC_14 (VAR_12);

   if (VAR_4 && (VAR_5 & VAR_2))
     {
       FUNC_3 (VAR_4, " -->  New temp:  '");
       FUNC_7 (VAR_4, VAR_12, VAR_3);
       FUNC_3 (VAR_4, "'\n");
     }
 }
    }

  FUNC_9 (VAR_14);
}
