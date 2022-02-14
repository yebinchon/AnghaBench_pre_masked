
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 unsigned int FUNC_2 (scalar_t__,int,scalar_t__,int,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_3 (rtx VAR_0, enum machine_mode VAR_1, rtx VAR_2,
       enum machine_mode VAR_3,
       unsigned int VAR_4)
{
  if (VAR_0 == VAR_2 && VAR_1 == VAR_3)
    return VAR_4;





  if (FUNC_0 (VAR_0))
    {
      rtx VAR_5 = FUNC_1 (VAR_0, 0);
      rtx VAR_6 = FUNC_1 (VAR_0, 1);


      if (VAR_5 == VAR_6)
 return
   FUNC_2 (VAR_0, VAR_1, VAR_5, VAR_1,
    FUNC_3 (VAR_5, VAR_1, VAR_2,
           VAR_3,
           VAR_4));


      if (FUNC_0 (VAR_5)
   && (VAR_6 == FUNC_1 (VAR_5, 0) || VAR_6 == FUNC_1 (VAR_5, 1)))
 return
   FUNC_2 (VAR_0, VAR_1, VAR_6, VAR_1,
    FUNC_3 (VAR_6, VAR_1, VAR_2,
           VAR_3,
           VAR_4));

      if (FUNC_0 (VAR_6)
   && (VAR_5 == FUNC_1 (VAR_6, 0) || VAR_5 == FUNC_1 (VAR_6, 1)))
 return
   FUNC_2 (VAR_0, VAR_1, VAR_5, VAR_1,
    FUNC_3 (VAR_5, VAR_1, VAR_2,
           VAR_3,
           VAR_4));
    }

  return FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
