
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {int max_reg; int last_function_call; int sched_before_next_call; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct deps*,int ,int ) ;

__attribute__((used)) static void
FUNC_12 (struct deps *VAR_10, int VAR_11, enum machine_mode VAR_12,
     enum rtx_code VAR_13, rtx VAR_14)
{


  if (VAR_11 < VAR_1)
    {
      int VAR_15 = VAR_5[VAR_11][VAR_12];
      if (VAR_13 == VAR_3)
 {
   while (--VAR_15 >= 0)
     FUNC_4 (VAR_7, VAR_11 + VAR_15);
 }
      else if (VAR_13 == VAR_4)
 {
   while (--VAR_15 >= 0)
     FUNC_4 (VAR_8, VAR_11 + VAR_15);
 }
      else
 {
   while (--VAR_15 >= 0)
     FUNC_4 (VAR_6, VAR_11 + VAR_15);
 }
    }




  else if (VAR_11 >= VAR_10->max_reg)
    {
      enum rtx_code VAR_16 = FUNC_0 (FUNC_2 (VAR_14));
      FUNC_8 (VAR_16 == VAR_4 || VAR_16 == VAR_0);
    }

  else
    {
      if (VAR_13 == VAR_3)
 FUNC_4 (VAR_7, VAR_11);
      else if (VAR_13 == VAR_4)
 FUNC_4 (VAR_8, VAR_11);
      else
 FUNC_4 (VAR_6, VAR_11);




      if (!VAR_9 && FUNC_9 (VAR_11))
 {
   rtx VAR_17 = FUNC_10 (VAR_11);
   if (FUNC_1 (VAR_17))
     FUNC_11 (VAR_10, FUNC_5 (VAR_17, 0), VAR_14);
 }



      if (FUNC_3 (VAR_11) == 0)
 {
   if (VAR_13 == VAR_4)
     VAR_10->sched_before_next_call
       = FUNC_7 (VAR_14, VAR_10->sched_before_next_call);
   else
     FUNC_6 (VAR_14, VAR_10->last_function_call, 1,
     VAR_2);
 }
    }
}
