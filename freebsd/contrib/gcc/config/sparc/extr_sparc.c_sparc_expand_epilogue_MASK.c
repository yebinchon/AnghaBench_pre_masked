
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_6 (void)
{
  if (VAR_3)
    FUNC_3 (VAR_1);

  if (VAR_2 == 0)
                       ;
  else if (VAR_4)
    {
      if (VAR_2 <= 4096)
 FUNC_1 (FUNC_5 (FUNC_0 (- VAR_2)));
      else if (VAR_2 <= 8192)
 {
   FUNC_1 (FUNC_5 (FUNC_0 (-4096)));
   FUNC_1 (FUNC_5 (FUNC_0 (4096 - VAR_2)));
 }
      else
 {
   rtx VAR_5 = FUNC_4 (VAR_0, 1);
   FUNC_2 (VAR_5, FUNC_0 (-VAR_2));
   FUNC_1 (FUNC_5 (VAR_5));
 }
    }
}
