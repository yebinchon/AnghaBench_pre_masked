
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*,int *,int ) ;
 int FUNC_4 (int,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7 (enum rtx_code VAR_2, bool *VAR_3,
     rtx VAR_4, rtx VAR_5, rtx VAR_6)
{





  if (FUNC_5 (VAR_2, VAR_6))
    FUNC_4 (VAR_2, VAR_4, VAR_5, VAR_6);
  else if (FUNC_3 (&VAR_2, &VAR_6, FUNC_0 (VAR_4)))
    FUNC_4 (VAR_2, VAR_4, VAR_5, VAR_6);
  else
    {
      enum rtx_code VAR_7 = FUNC_6 (VAR_2);
      if (!FUNC_5 (VAR_7, VAR_6))
 {
   VAR_6 = FUNC_1 (FUNC_0 (VAR_5), VAR_6);
   FUNC_7 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
      else if (VAR_3 == 0)
 {
   rtx VAR_8 = FUNC_2 (FUNC_0 (VAR_4));
   FUNC_4 (VAR_7, VAR_8, VAR_5, VAR_6);
   FUNC_4 (VAR_0, VAR_4, VAR_8, VAR_1);
 }
      else
 {
   *VAR_3 = !*VAR_3;
   FUNC_4 (VAR_7, VAR_4, VAR_5, VAR_6);
 }
    }
}
