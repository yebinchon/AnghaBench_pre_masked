
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;

 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_7 ;

 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_12 (int,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int) ;
 scalar_t__ FUNC_21 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__,int) ;
 scalar_t__ FUNC_29 (scalar_t__) ;

bool
FUNC_30 (enum machine_mode VAR_16, rtx *VAR_17)
{

  if (FUNC_2 (VAR_17[0]) == VAR_4)
    {

      if (FUNC_24 (VAR_17[1], VAR_16))
 return 0;

      if (!VAR_15)
 {
   VAR_17[0] = FUNC_29 (VAR_17[0]);
   VAR_17[1] = FUNC_14 (VAR_16, VAR_17[1]);
 }
    }


  if (VAR_10
      && FUNC_1 (VAR_17[1])
      && FUNC_2 (VAR_17[1]) != VAR_2
      && FUNC_27 (VAR_17 [1]))
    {
      rtx VAR_18 = VAR_17[1];
      rtx VAR_19 = ((void*)0);

      if (FUNC_2 (VAR_18) == VAR_0 && FUNC_2 (FUNC_9 (VAR_18, 0)) == VAR_6)
 {
   VAR_19 = FUNC_9 (FUNC_9 (VAR_18, 0), 1);
   VAR_18 = FUNC_9 (FUNC_9 (VAR_18, 0), 0);
 }

      FUNC_15 (FUNC_7 (VAR_18));

      VAR_18 = FUNC_22 (VAR_18);
      if (VAR_19)
 {
   VAR_18 = FUNC_19 (VAR_16, VAR_18, VAR_19);
   VAR_18 = FUNC_13 (VAR_18, VAR_17[0]);
 }
      VAR_17[1] = VAR_18;
    }


  if (VAR_13 && FUNC_1 (VAR_17[1]))
    {
      if (FUNC_23 (VAR_17[1]))
 VAR_17[1] = FUNC_21 (VAR_17[1], VAR_16, 0);

      if (FUNC_2 (VAR_17[1]) == VAR_3 && VAR_16 == 128)
 {
   FUNC_11 (FUNC_18 (VAR_17[0], VAR_17[1]));
   return 1;
 }

      if (FUNC_2 (VAR_17[1]) == VAR_3 && VAR_16 == 131)
 {
   FUNC_15 (VAR_9);
   FUNC_11 (FUNC_17 (VAR_17[0], VAR_17[1]));
   return 1;
 }

      if (FUNC_28 (VAR_17[1], VAR_16))
 {
   VAR_17[1] = FUNC_21 (VAR_17[1],
      VAR_16,
      (VAR_15 ?
       VAR_17[0] :
       VAR_5));
   return 0;
 }
    }



  if (FUNC_1 (VAR_17[1])
      && FUNC_4 (VAR_17[0])
      && (FUNC_6 (FUNC_3 (VAR_17[0]))
   || FUNC_5 (VAR_16)
   || FUNC_8 (VAR_16)))
    {



      if (VAR_17 [1] == VAR_12)
 VAR_17[1] = FUNC_0 (VAR_16);


      if ((VAR_11 || FUNC_3 (VAR_17[0]) < VAR_8)
   && FUNC_10 (VAR_17[1], VAR_16))
 return 0;

      if (FUNC_3 (VAR_17[0]) < VAR_8


   && (VAR_16 == VAR_7

       || (VAR_16 == VAR_1
    && (VAR_14 || VAR_15))))
 return 0;

      VAR_17[1] = FUNC_12 (VAR_16, VAR_17[1]);
      if (!VAR_15)
 VAR_17[1] = FUNC_29 (VAR_17[1]);
      return 0;
    }


  if (!FUNC_1 (VAR_17[1])
      || FUNC_2 (VAR_17[1]) == VAR_2
      || FUNC_20 (VAR_17[1], VAR_16))
    return 0;

  switch (VAR_16)
    {
    case 129:

      break;

    case 130:
    case 128:
      FUNC_25 (VAR_17[0], VAR_17[1]);
      return 1;

    case 131:

      FUNC_26 (VAR_17[0], VAR_17[1]);
      return 1;

    default:
      FUNC_16 ();
    }

  return 0;
}
