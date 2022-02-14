
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ,int ,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void
FUNC_9 (int VAR_6, rtx VAR_7, int VAR_8)
{
  int VAR_9;
  enum machine_mode VAR_10 = VAR_4 ? VAR_3 : VAR_1;

  if (VAR_8 == 0)
    return;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      rtx VAR_11 = FUNC_2 (VAR_7, VAR_10, VAR_9 * FUNC_0 (VAR_10));
      if (VAR_5)
 {
   if (! FUNC_8 (VAR_10, FUNC_1 (VAR_11, 0)))
     VAR_11 = VAR_2;
   else
     VAR_11 = FUNC_7 (VAR_10, VAR_7, VAR_0,
           VAR_9 * FUNC_0 (VAR_10));
 }
      else
 VAR_11 = FUNC_6 (VAR_11, FUNC_1 (VAR_11, 0));

      FUNC_4 (VAR_11);

      FUNC_3 (VAR_11, FUNC_5 (VAR_10, VAR_6 + VAR_9));
    }
}
