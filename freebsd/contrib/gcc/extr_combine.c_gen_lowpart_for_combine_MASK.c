
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (unsigned int,unsigned int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (int,scalar_t__) ;
 scalar_t__ FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,int,int ,int ) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int,scalar_t__,int,int) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static rtx
FUNC_20 (enum machine_mode VAR_12, rtx VAR_13)
{
  enum machine_mode VAR_14 = FUNC_2 (VAR_13);
  unsigned int VAR_15 = FUNC_3 (VAR_12);
  unsigned int VAR_16 = FUNC_3 (VAR_14);
  rtx VAR_17;

  if (VAR_12 == VAR_14)
    return VAR_13;


  if (VAR_12 == VAR_5
      && (FUNC_1 (VAR_13) == VAR_1
   || FUNC_1 (VAR_13) == VAR_7
   || FUNC_1 (VAR_13) == VAR_4))
    return VAR_13;



  if (FUNC_3 (VAR_12) > VAR_8
      && ! ((VAR_14 == VAR_9
      && (FUNC_1 (VAR_13) == VAR_3
   || FUNC_1 (VAR_13) == VAR_2))
     || VAR_16 == VAR_15))
    goto fail;




  if (FUNC_1 (VAR_13) == VAR_6 && FUNC_5 (FUNC_8 (VAR_13)))
    {
      VAR_13 = FUNC_8 (VAR_13);




      VAR_14 = FUNC_2 (VAR_13);

      if (VAR_14 == VAR_12)
 return VAR_13;

      VAR_16 = FUNC_3 (VAR_14);
    }

  VAR_17 = FUNC_11 (VAR_12, VAR_13);






  if (VAR_17)
    return VAR_17;

  if (FUNC_5 (VAR_13))
    {
      int VAR_18 = 0;



      if (FUNC_6 (VAR_13) || FUNC_16 (FUNC_9 (VAR_13, 0)))
 goto fail;




      if (VAR_16 < VAR_15)
 return FUNC_13 (VAR_12, VAR_13, 0);

      if (VAR_10)
 VAR_18 = FUNC_4 (VAR_16, VAR_8) - FUNC_4 (VAR_15, VAR_8);



      if (VAR_0)
 VAR_18 -= FUNC_7 (VAR_8, VAR_15) - FUNC_7 (VAR_8, VAR_16);

      return FUNC_10 (VAR_13, VAR_12, VAR_18);
    }



  else if (FUNC_0 (VAR_13))
    return FUNC_14 (FUNC_1 (VAR_13), VAR_12, FUNC_9 (VAR_13, 0), FUNC_9 (VAR_13, 1));




  else
    {
      int VAR_19 = 0;
      rtx VAR_20;

      VAR_19 = FUNC_19 (VAR_12, VAR_14);
      if (VAR_14 == VAR_9)
 {
   VAR_14 = FUNC_15 (VAR_12);
   VAR_13 = FUNC_11 (VAR_14, VAR_13);
   if (VAR_13 == ((void*)0))
     goto fail;
 }
      VAR_20 = FUNC_18 (VAR_12, VAR_13, VAR_14, VAR_19);
      if (VAR_20)
 return VAR_20;
    }

 fail:
  return FUNC_12 (VAR_14, VAR_11);
}
