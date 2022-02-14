
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,unsigned int,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int) ;
 unsigned int FUNC_9 (scalar_t__) ;

rtx
FUNC_10 (rtx *VAR_3)
{
  rtx VAR_4 = *VAR_3;
  rtx VAR_5 = FUNC_5 (VAR_4);



  if (FUNC_2 (VAR_5))
    {
      int VAR_6 = FUNC_4 (VAR_4);



      if (VAR_6 == 0
   && FUNC_1 (FUNC_0 (VAR_5)) < FUNC_1 (FUNC_0 (VAR_4)))
        {
          int VAR_7 = FUNC_1 (FUNC_0 (VAR_5))
      - FUNC_1 (FUNC_0 (VAR_4));
          if (VAR_2)
            VAR_6 += (VAR_7 / VAR_1) * VAR_1;
          if (VAR_0)
            VAR_6 += VAR_7 % VAR_1;
        }

      *VAR_3 = FUNC_6 (VAR_5, FUNC_0 (VAR_4), VAR_6);
    }
  else
    {
      rtx VAR_8 = FUNC_8 (FUNC_0 (VAR_4), VAR_5, FUNC_0 (VAR_5),
     FUNC_4 (VAR_4));

      if (VAR_8 != 0)
 *VAR_3 = VAR_8;
      else if (FUNC_3 (VAR_5))
 {

   unsigned int VAR_9 = FUNC_9 (VAR_4);
   *VAR_3 = FUNC_7 (VAR_5, FUNC_0 (VAR_4), VAR_9, FUNC_4 (VAR_4));
 }
    }

  return *VAR_3;
}
