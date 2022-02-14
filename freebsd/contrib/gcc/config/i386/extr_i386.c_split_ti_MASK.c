
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

void
FUNC_3 (rtx VAR_3[], int VAR_4, rtx VAR_5[], rtx VAR_6[])
{
  while (VAR_4--)
    {
      rtx VAR_7 = VAR_3[VAR_4];



      if (FUNC_0 (VAR_7) == VAR_1)
 {
   VAR_5[VAR_4] = FUNC_1 (VAR_7, VAR_0, 0);
   VAR_6[VAR_4] = FUNC_1 (VAR_7, VAR_0, 8);
 }
      else
 {
   VAR_5[VAR_4] = FUNC_2 (VAR_0, VAR_7, VAR_2, 0);
   VAR_6[VAR_4] = FUNC_2 (VAR_0, VAR_7, VAR_2, 8);
 }
    }
}
