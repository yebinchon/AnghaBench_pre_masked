
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int,int*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (enum rtx_code *VAR_8, rtx *VAR_9, rtx *VAR_10, bool VAR_11)
{
  if (FUNC_1 (FUNC_0 (VAR_6[0])) == VAR_4)
    {
      if (!VAR_11 && VAR_6[1] == VAR_7)
 {
   *VAR_9 = VAR_6[0];
   *VAR_10 = VAR_6[1];
 }
      else if (*VAR_8 == VAR_1 || *VAR_8 == VAR_5)
 {
   if (VAR_11)
     {
       *VAR_9 = FUNC_8 (VAR_6[0], VAR_6[1]);
       *VAR_10 = VAR_7;
     }
   else
     {
       *VAR_9 = VAR_6[0];
       *VAR_10 = FUNC_2 (FUNC_0 (*VAR_9), VAR_6[1]);
     }
 }
      else
 {


   bool VAR_12 = 0;
   *VAR_9 = FUNC_3 (FUNC_0 (VAR_6[0]));
   *VAR_10 = VAR_7;
   FUNC_6 (*VAR_8, &VAR_12, *VAR_9,
        VAR_6[0], VAR_6[1]);
   *VAR_8 = (VAR_12 ? VAR_1 : VAR_5);
 }
    }
  else
    {
      enum rtx_code VAR_13;







      VAR_13 = *VAR_8;
      *VAR_8 = FUNC_7 (&VAR_13) ? VAR_1 : VAR_5;
      *VAR_9 = (VAR_3
       ? FUNC_3 (VAR_0)
       : FUNC_4 (VAR_0, VAR_2));
      *VAR_10 = VAR_7;
      FUNC_5 (VAR_13, *VAR_9, VAR_6[0], VAR_6[1]);
    }
}
