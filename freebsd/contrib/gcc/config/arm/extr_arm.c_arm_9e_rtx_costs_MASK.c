
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_5, int VAR_6, int VAR_7, int *VAR_8)
{
  enum machine_mode VAR_9 = FUNC_2 (VAR_5);
  int VAR_10;
  int VAR_11;

  if (VAR_3)
    {
      switch (VAR_6)
 {
 case 128:
   *VAR_8 = FUNC_0 (3);
   return 1;

 default:
   *VAR_8 = FUNC_7 (VAR_5, VAR_6, VAR_7);
   return 1;
 }
    }

  switch (VAR_6)
    {
    case 128:


      if (VAR_9 == VAR_0
   && (FUNC_1 (FUNC_5 (VAR_5, 0)) == FUNC_1 (FUNC_5 (VAR_5, 1)))
   && (FUNC_1 (FUNC_5 (VAR_5, 0)) == VAR_4
       || FUNC_1 (FUNC_5 (VAR_5, 0)) == VAR_2))
 {
   *VAR_8 = 3;
   return 1;
 }


      if (FUNC_3 (VAR_9) == VAR_1)
 {
   *VAR_8 = 30;
   return 1;
 }
      if (VAR_9 == VAR_0)
 {
   VAR_11 = 7;
   VAR_10 = 8;
 }
      else
 {
   VAR_11 = 2;
   VAR_10 = 4;
 }


      *VAR_8 = VAR_11 + (FUNC_4 (FUNC_5 (VAR_5, 0)) ? 0 : VAR_10)
      + (FUNC_4 (FUNC_5 (VAR_5, 1)) ? 0 : VAR_10);
      return 1;

    default:
      *VAR_8 = FUNC_6 (VAR_5, VAR_6, VAR_7);
      return 1;
    }
}
