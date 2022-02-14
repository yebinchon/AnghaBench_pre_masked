
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_mentioned_reg_data {int mentioned; int reg; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum extension_type { ____Placeholder_extension_type } extension_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,struct see_mentioned_reg_data*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_11 (rtx VAR_6, rtx VAR_7,
             enum extension_type VAR_8)
{
  rtx VAR_9;
  rtx VAR_10 = FUNC_10 (VAR_7, 1);
  rtx VAR_11 = FUNC_10 (VAR_7, 0);
  enum rtx_code VAR_12;
  struct see_mentioned_reg_data VAR_13;
  int VAR_14;

  VAR_9 = FUNC_1 (VAR_6);
  VAR_12 = FUNC_0 (VAR_9);

  if (VAR_12 == VAR_1)
    {
      for (VAR_14 = 0; VAR_14 < FUNC_7 (VAR_9, 0); VAR_14++)
 {
   rtx VAR_15 = FUNC_6 (VAR_9, 0, VAR_14);

   if (FUNC_0 (VAR_15) == VAR_2
       && (FUNC_2 (FUNC_3 (VAR_15))
    || (FUNC_0 (FUNC_3 (VAR_15)) == VAR_3
        && FUNC_2 (FUNC_5 (FUNC_3 (VAR_15)))))
       && (FUNC_2 (FUNC_4 (VAR_15))
    || (FUNC_0 (FUNC_4 (VAR_15)) == VAR_3
        && FUNC_2 (FUNC_5 (FUNC_4 (VAR_15))))))
     {

       if (VAR_8 == VAR_0
    && FUNC_9 (VAR_11, FUNC_3 (VAR_15)))
  return 0;
     }
   else
     {


       if (VAR_8 == VAR_4)
  {
      VAR_13.reg = VAR_10;
    VAR_13.mentioned = 0;
    FUNC_8 (&VAR_15, VAR_5, &VAR_13);
    if (VAR_13.mentioned)
      return 1;
  }
     }
 }
      if (VAR_8 == VAR_4)
 return 0;
    }
  else
    {
      if (VAR_12 == VAR_2
   && (FUNC_2 (FUNC_3 (VAR_9))
       || (FUNC_0 (FUNC_3 (VAR_9)) == VAR_3
    && FUNC_2 (FUNC_5 (FUNC_3 (VAR_9)))))
   && (FUNC_2 (FUNC_4 (VAR_9))
       || (FUNC_0 (FUNC_4 (VAR_9)) == VAR_3
    && FUNC_2 (FUNC_5 (FUNC_4 (VAR_9))))))

 return 0;
     }

  return 1;
}
