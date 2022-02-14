
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,long*) ;
 int FUNC_8 (int ,long*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int * FUNC_11 (int *,int,int) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int * FUNC_15 (long,int) ;
 int * FUNC_16 (int,scalar_t__) ;
 int * FUNC_17 (long,long,int) ;
 int FUNC_18 (int) ;
 int * FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (long*,int *,int) ;
 int VAR_12 ;
 int * FUNC_23 (int,int *,int ,int ) ;
 int FUNC_24 (int **,int,int **,int **) ;
 int FUNC_25 (int **,int,int **,int **) ;

__attribute__((used)) static int
FUNC_26 (rtx VAR_13, rtx *VAR_14, enum machine_mode VAR_15)
{
  int VAR_16;

  if (!VAR_8)
    VAR_16 = VAR_15==128 ? 3 : FUNC_2 (VAR_15) / 4;
  else
    VAR_16 = (FUNC_2 (VAR_15) + 4) / 8;

  FUNC_13 (FUNC_0 (VAR_13) != VAR_6 || !FUNC_4 (FUNC_9 (VAR_13)));
  FUNC_13 (VAR_16 >= 2 && VAR_16 <= 3);



  if (FUNC_0 (VAR_13) == VAR_4 && FUNC_3 (VAR_13))
    {
      rtx VAR_17 = FUNC_19 (VAR_13);
      if (VAR_17)
 VAR_13 = VAR_17;
    }

  if (FUNC_0 (VAR_13) == VAR_4 && !FUNC_20 (VAR_13))
    {

      int VAR_18 = FUNC_21 (VAR_13, VAR_11);

      FUNC_13 (VAR_18);

      VAR_13 = FUNC_12 (VAR_13);
      FUNC_5 (VAR_13, VAR_5);
      VAR_14[0] = VAR_14[1] = VAR_14[2] = VAR_13;
      return VAR_16;
    }

  if (FUNC_0 (VAR_13) == VAR_1)
    {
      enum machine_mode VAR_19 = FUNC_18 (VAR_15);



      VAR_13 = FUNC_23 (VAR_19, VAR_13, FUNC_1 (VAR_13), 0);
      FUNC_13 (VAR_13 != ((void*)0));
      VAR_15 = VAR_19;
    }

  if (!VAR_8)
    {
      if (VAR_15 == VAR_2)
 FUNC_24 (&VAR_13, 1, &VAR_14[0], &VAR_14[1]);
      else
 {
   if (FUNC_10 (VAR_13))
     {
       FUNC_13 (VAR_12);
       VAR_14[0] = FUNC_16 (VAR_7, FUNC_9 (VAR_13) + 0);
       VAR_14[1] = FUNC_16 (VAR_7, FUNC_9 (VAR_13) + 1);
       if (VAR_16 == 3)
  VAR_14[2] = FUNC_16 (VAR_7, FUNC_9 (VAR_13) + 2);
     }
   else if (FUNC_20 (VAR_13))
     {
       VAR_13 = FUNC_11 (VAR_13, VAR_7, 0);
       VAR_14[0] = VAR_13;
       VAR_14[1] = FUNC_11 (VAR_13, VAR_7, 4);
       if (VAR_16 == 3)
  VAR_14[2] = FUNC_11 (VAR_13, VAR_7, 8);
     }
   else if (FUNC_0 (VAR_13) == VAR_0)
     {
       REAL_VALUE_TYPE VAR_20;
       long VAR_21[4];

       FUNC_6 (VAR_20, VAR_13);
       switch (VAR_15)
  {
  case 128:
    FUNC_8 (VAR_20, VAR_21);
    VAR_14[2] = FUNC_15 (VAR_21[2], VAR_7);
    break;
  case 129:
    FUNC_7 (VAR_20, VAR_21);
    break;
  default:
    FUNC_14 ();
  }
       VAR_14[1] = FUNC_15 (VAR_21[1], VAR_7);
       VAR_14[0] = FUNC_15 (VAR_21[0], VAR_7);
     }
   else
     FUNC_14 ();
 }
    }
  else
    {
      if (VAR_15 == VAR_10)
 FUNC_25 (&VAR_13, 1, &VAR_14[0], &VAR_14[1]);
      if (VAR_15 == 128 || VAR_15 == VAR_9)
 {
   enum machine_mode VAR_22 = VAR_15==128 ? VAR_7 : VAR_2;
   if (FUNC_10 (VAR_13))
     {
       FUNC_13 (VAR_12);
       VAR_14[0] = FUNC_16 (VAR_2, FUNC_9 (VAR_13) + 0);
       VAR_14[1] = FUNC_16 (VAR_22, FUNC_9 (VAR_13) + 1);
     }
   else if (FUNC_20 (VAR_13))
     {
       VAR_13 = FUNC_11 (VAR_13, VAR_2, 0);
       VAR_14[0] = VAR_13;
       VAR_14[1] = FUNC_11 (VAR_13, VAR_22, 8);
     }
   else if (FUNC_0 (VAR_13) == VAR_0)
     {
       REAL_VALUE_TYPE VAR_23;
       long VAR_24[4];

       FUNC_6 (VAR_23, VAR_13);
       FUNC_22 (VAR_24, &VAR_23, VAR_15);


       if (VAR_3 >= 64)
         VAR_14[0]
    = FUNC_15
        ((VAR_24[0] & (((HOST_WIDE_INT) 2 << 31) - 1))
         + ((((HOST_WIDE_INT) VAR_24[1]) << 31) << 1),
         VAR_2);
       else
         VAR_14[0] = FUNC_17 (VAR_24[0], VAR_24[1], VAR_2);

       if (VAR_22 == VAR_7)
         VAR_14[1] = FUNC_15 (VAR_24[2], VAR_7);
       else if (VAR_3 >= 64)
         VAR_14[1]
    = FUNC_15
        ((VAR_24[2] & (((HOST_WIDE_INT) 2 << 31) - 1))
         + ((((HOST_WIDE_INT) VAR_24[3]) << 31) << 1),
         VAR_2);
       else
         VAR_14[1] = FUNC_17 (VAR_24[2], VAR_24[3], VAR_2);
     }
   else
     FUNC_14 ();
 }
    }

  return VAR_16;
}
