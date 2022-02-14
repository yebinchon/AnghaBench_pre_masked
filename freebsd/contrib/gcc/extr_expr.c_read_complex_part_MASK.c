
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 size_t FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,unsigned int,unsigned int,int,int ,int,int) ;
 int FUNC_17 (int) ;
 int** VAR_7 ;
 scalar_t__ FUNC_18 (int,scalar_t__,int,int ) ;

__attribute__((used)) static rtx
FUNC_19 (rtx VAR_8, bool VAR_9)
{
  enum machine_mode VAR_10, VAR_11;
  unsigned VAR_12;

  if (FUNC_1 (VAR_8) == VAR_2)
    return FUNC_13 (VAR_8, VAR_9);

  VAR_10 = FUNC_2 (VAR_8);
  VAR_11 = FUNC_4 (VAR_10);
  VAR_12 = FUNC_3 (VAR_11);


  if (FUNC_6 (VAR_8) && FUNC_1 (FUNC_13 (VAR_8, 0)) == VAR_6)
    {
      tree VAR_13 = FUNC_9 (FUNC_13 (VAR_8, 0));
      if (VAR_13 && FUNC_10 (VAR_13) == VAR_1)
 {
   tree VAR_14 = VAR_9 ? FUNC_11 (VAR_13) : FUNC_12 (VAR_13);
   if (FUNC_0 (VAR_14))
     return FUNC_15 (VAR_14, VAR_5, VAR_11, VAR_3);
 }
    }






  if (FUNC_6 (VAR_8))
    return FUNC_14 (VAR_8, VAR_11,
         VAR_9 ? FUNC_5 (VAR_11) : 0);





  if (VAR_12 >= VAR_0




      || (FUNC_8 (VAR_8)
   && FUNC_7 (VAR_8) < VAR_4
   && VAR_7[FUNC_7 (VAR_8)][VAR_10] % 2 == 0))
    {
      rtx VAR_15 = FUNC_18 (VAR_11, VAR_8, VAR_10,
         VAR_9 ? FUNC_5 (VAR_11) : 0);
      if (VAR_15)
        return VAR_15;
      else

 FUNC_17 (FUNC_6 (VAR_8) && VAR_12 < VAR_0);
    }

  return FUNC_16 (VAR_8, VAR_12, VAR_9 ? VAR_12 : 0,
       1, VAR_5, VAR_11, VAR_11);
}
