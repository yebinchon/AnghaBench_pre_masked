
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int VAR_10 ;

rtx
FUNC_17 (enum machine_mode VAR_11, rtx VAR_12)
{
  rtx VAR_13 = VAR_12;

  VAR_12 = FUNC_8 (VAR_6, VAR_12);



  if (! VAR_8 && FUNC_1 (VAR_12) && FUNC_0 (VAR_12))
    VAR_12 = FUNC_12 (VAR_6, VAR_12);





  else
    {
      if (! VAR_8 && !FUNC_5 (VAR_12))
 VAR_12 = FUNC_7 (VAR_12);


      if (FUNC_15 (VAR_11, VAR_12))
 goto win;



      if (FUNC_15 (VAR_11, VAR_13))
 goto win2;





      FUNC_4 (VAR_12, VAR_13, VAR_11, VAR_10);
      if (FUNC_2 (VAR_12) == VAR_5)
 {
   rtx VAR_14 = VAR_7;
   rtx VAR_15 = FUNC_10 (VAR_12, &VAR_14);
   if (VAR_14 == VAR_7
       || ! FUNC_15 (VAR_11, VAR_15))
     VAR_12 = FUNC_11 (VAR_12, VAR_4);
   else
     {
       VAR_15 = FUNC_13 (FUNC_3 (VAR_12), FUNC_9 (VAR_15), VAR_14);
       if (! FUNC_15 (VAR_11, VAR_15))
  VAR_12 = FUNC_11 (VAR_12, VAR_4);
       else
  VAR_12 = VAR_15;
     }
 }

      else if (FUNC_2 (VAR_12) == VAR_3 || FUNC_2 (VAR_12) == VAR_2)
 VAR_12 = FUNC_11 (VAR_12, VAR_4);



      else if (FUNC_5 (VAR_12))
 VAR_12 = FUNC_9 (VAR_12);



      else
 VAR_12 = FUNC_12 (VAR_6, VAR_12);

      goto done;

    win2:
      VAR_12 = VAR_13;
    win:
      if (VAR_9 && ! VAR_8 && !FUNC_5 (VAR_12))
 {
   VAR_12 = FUNC_11 (VAR_12, VAR_4);
   VAR_12 = FUNC_12 (VAR_6, VAR_12);
 }
    }

 done:



  if (VAR_13 == VAR_12)
    return VAR_12;
  else if (FUNC_5 (VAR_12))
    FUNC_14 (VAR_12, VAR_0);
  else if (FUNC_2 (VAR_12) == VAR_5
    && FUNC_5 (FUNC_6 (VAR_12, 0))
    && FUNC_2 (FUNC_6 (VAR_12, 1)) == VAR_1)
    FUNC_14 (FUNC_6 (VAR_12, 0), VAR_0);



  FUNC_16 (VAR_13, VAR_12);

  return VAR_12;
}
