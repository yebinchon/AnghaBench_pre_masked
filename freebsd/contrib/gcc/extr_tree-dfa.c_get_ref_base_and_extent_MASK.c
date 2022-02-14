
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;





 int VAR_0 ;

 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__) ;
 int VAR_9 ;

tree
FUNC_20 (tree VAR_10, HOST_WIDE_INT *VAR_11,
    HOST_WIDE_INT *VAR_12,
    HOST_WIDE_INT *VAR_13)
{
  HOST_WIDE_INT VAR_14 = -1;
  HOST_WIDE_INT VAR_15 = -1;
  tree VAR_16 = VAR_4;
  tree VAR_17 = VAR_7;
  bool VAR_18 = 0;

  FUNC_16 (!FUNC_3 (VAR_10));


  if (FUNC_4 (VAR_10) == 131)
    VAR_16 = FUNC_1 (FUNC_6 (VAR_10, 1));
  else if (FUNC_4 (VAR_10) == 132)
    VAR_16 = FUNC_6 (VAR_10, 1);
  else
    {
      enum machine_mode VAR_19 = FUNC_8 (FUNC_7 (VAR_10));
      if (VAR_19 == VAR_0)
 VAR_16 = FUNC_9 (FUNC_7 (VAR_10));
      else
 VAR_14 = FUNC_2 (VAR_19);
    }
  if (VAR_16 != VAR_4)
    {
      if (! FUNC_17 (VAR_16, 1))
 VAR_14 = -1;
      else
 VAR_14 = FUNC_5 (VAR_16);
    }



  VAR_15 = VAR_14;



  while (1)
    {
      switch (FUNC_4 (VAR_10))
 {
 case 132:
   VAR_17 = FUNC_19 (VAR_5, VAR_17,
       FUNC_6 (VAR_10, 2));
   break;

 case 131:
   {
     tree VAR_20 = FUNC_6 (VAR_10, 1);
     tree VAR_21 = FUNC_13 (VAR_10);

     if (VAR_21 && FUNC_4 (VAR_21) == VAR_1)
       {
  VAR_21 = FUNC_19 (VAR_3,
       FUNC_15 (VAR_8,
       VAR_21),
       VAR_6);
  VAR_17 = FUNC_19 (VAR_5,
             VAR_17, VAR_21);
  VAR_17 = FUNC_19 (VAR_5, VAR_17,
      FUNC_0 (VAR_20));
       }
     else
       {
  tree VAR_22 = FUNC_9 (FUNC_7 (FUNC_6 (VAR_10, 0)));



  if (VAR_15 != -1
      && VAR_22 && FUNC_17 (VAR_22, 1))
    {
      VAR_15 = (FUNC_5 (VAR_22)
          - FUNC_5 (VAR_17));
    }
  else
    VAR_15 = -1;
       }
   }
   break;

 case 133:
 case 134:
   {
     tree VAR_23 = FUNC_6 (VAR_10, 1);
     tree VAR_24 = FUNC_11 (VAR_10);
     tree VAR_25 = FUNC_10 (VAR_10);

     if (! FUNC_18 (VAR_24))
       VAR_23 = FUNC_14 (VAR_2, FUNC_7 (VAR_23),
       VAR_23, VAR_24);
     VAR_23 = FUNC_19 (VAR_3,
    FUNC_15 (VAR_9, VAR_23), VAR_25);
     if (FUNC_4 (VAR_23) == VAR_1)
       {
  VAR_23 = FUNC_19 (VAR_3,
        FUNC_15 (VAR_8, VAR_23),
        VAR_6);
  VAR_17 = FUNC_19 (VAR_5, VAR_17, VAR_23);




  VAR_18 = 0;
       }
     else
       {
  tree VAR_26 = FUNC_9 (FUNC_7 (FUNC_6 (VAR_10, 0)));



  if (VAR_15 != -1
      && VAR_26 && FUNC_17 (VAR_26, 1))
    {
      VAR_15 = (FUNC_5 (VAR_26)
          - FUNC_5 (VAR_17));
    }
  else
    VAR_15 = -1;



  VAR_18 = 1;
       }
   }
   break;

 case 129:
   break;

 case 130:
   VAR_17 = FUNC_19 (VAR_5, VAR_17,
       FUNC_12 (VAR_14));
   break;

 case 128:

   break;

 default:
   goto done;
 }

      VAR_10 = FUNC_6 (VAR_10, 0);
    }
 done:
  if (VAR_18
      && VAR_15 != -1
      && FUNC_17 (FUNC_9 (FUNC_7 (VAR_10)), 1)
      && FUNC_5 (VAR_17) + VAR_15
  == FUNC_5 (FUNC_9 (FUNC_7 (VAR_10))))
    VAR_15 = -1;




  *VAR_11 = FUNC_5 (VAR_17);
  *VAR_12 = VAR_14;
  *VAR_13 = VAR_15;

  return VAR_10;
}
