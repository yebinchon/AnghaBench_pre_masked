
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;

void
FUNC_4 (rtx VAR_4[], int VAR_5, rtx VAR_6[], rtx VAR_7[])
{
  while (VAR_5--)
    {
      rtx VAR_8 = VAR_4[VAR_5];



      if (FUNC_0 (VAR_8) == VAR_1)
 {
   VAR_6[VAR_5] = FUNC_2 (VAR_8, VAR_2, 0);
   VAR_7[VAR_5] = FUNC_2 (VAR_8, VAR_2, 4);
 }
      else
 {
   VAR_6[VAR_5] = FUNC_3 (VAR_2, VAR_8,
           FUNC_1 (VAR_8) == VAR_3
           ? VAR_0 : FUNC_1 (VAR_8), 0);
   VAR_7[VAR_5] = FUNC_3 (VAR_2, VAR_8,
           FUNC_1 (VAR_8) == VAR_3
           ? VAR_0 : FUNC_1 (VAR_8), 4);
 }
    }
}
