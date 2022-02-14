
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 int** VAR_3 ;
 scalar_t__ FUNC_12 (int,scalar_t__,int,int ) ;
 int FUNC_13 (scalar_t__,unsigned int,unsigned int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_4, rtx VAR_5, bool VAR_6)
{
  enum machine_mode VAR_7;
  enum machine_mode VAR_8;
  unsigned VAR_9;

  if (FUNC_0 (VAR_4) == VAR_1)
    {
      FUNC_10 (FUNC_8 (VAR_4, VAR_6), VAR_5);
      return;
    }

  VAR_7 = FUNC_1 (VAR_4);
  VAR_8 = FUNC_3 (VAR_7);
  VAR_9 = FUNC_2 (VAR_8);






  if (FUNC_5 (VAR_4))
    {
      FUNC_10 (FUNC_9 (VAR_4, VAR_8,
      VAR_6 ? FUNC_4 (VAR_8) : 0),
        VAR_5);
      return;
    }





  if (VAR_9 >= VAR_0




      || (FUNC_7 (VAR_4)
   && FUNC_6 (VAR_4) < VAR_2
   && VAR_3[FUNC_6 (VAR_4)][VAR_7] % 2 == 0))
    {
      rtx VAR_10 = FUNC_12 (VAR_8, VAR_4, VAR_7,
          VAR_6 ? FUNC_4 (VAR_8) : 0);
      if (VAR_10)
        {
   FUNC_10 (VAR_10, VAR_5);
   return;
 }
      else

 FUNC_11 (FUNC_5 (VAR_4) && VAR_9 < VAR_0);
    }

  FUNC_13 (VAR_4, VAR_9, VAR_6 ? VAR_9 : 0, VAR_8, VAR_5);
}
