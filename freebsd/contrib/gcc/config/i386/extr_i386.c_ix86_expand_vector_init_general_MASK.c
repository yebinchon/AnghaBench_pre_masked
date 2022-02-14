
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef int rtvec ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int *,int ,int) ;
 int * FUNC_6 (int,int,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int,int ,int *,int *,int *,int,int ) ;
 int * FUNC_10 (int,int *) ;
 int FUNC_11 () ;
 int * FUNC_12 (int,int *) ;
 int * FUNC_13 (int,int *) ;
 int * FUNC_14 (int const) ;
 int FUNC_15 (int,int *,int *) ;
 int FUNC_16 (int,int **) ;
 int FUNC_17 (int ,int *) ;
 int * FUNC_18 (int const,int ) ;
 int FUNC_19 (int ,int *,int ) ;
 int FUNC_20 (int,int *,int *) ;
 int FUNC_21 (int,int *,int *) ;
 int FUNC_22 (int *,int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_23 (bool VAR_8, enum machine_mode VAR_9,
     rtx VAR_10, rtx VAR_11)
{
  enum machine_mode VAR_12 = FUNC_2 (VAR_9);
  rtx VAR_13 = ((void*)0), VAR_14 = ((void*)0);
  bool VAR_15 = 0;

  switch (VAR_9)
    {
    case 134:
    case 133:
      if (!VAR_8 && !VAR_4)
 break;


    case 136:
    case 135:

      VAR_13 = FUNC_5 (VAR_11, 0, 0);
      VAR_14 = FUNC_5 (VAR_11, 0, 1);
      VAR_15 = 1;
      break;

    case 131:
      VAR_12 = 134;
      goto half;
    case 130:
      VAR_12 = 133;
      goto half;
    half:
      {
 rtvec VAR_16;




 VAR_13 = FUNC_14 (VAR_12);
 VAR_16 = FUNC_15 (2, FUNC_5 (VAR_11, 0, 0), FUNC_5 (VAR_11, 0, 1));
 FUNC_21 (0, VAR_13, FUNC_18 (VAR_12, VAR_16));

 VAR_14 = FUNC_14 (VAR_12);
 VAR_16 = FUNC_15 (2, FUNC_5 (VAR_11, 0, 2), FUNC_5 (VAR_11, 0, 3));
 FUNC_21 (0, VAR_14, FUNC_18 (VAR_12, VAR_16));

 VAR_15 = 1;
      }
      break;

    case 129:
    case 137:
    case 132:
    case 128:
      break;

    default:
      FUNC_11 ();
    }

  if (VAR_15)
    {
      if (!FUNC_22 (VAR_13, VAR_12))
 VAR_13 = FUNC_10 (VAR_12, VAR_13);
      if (!FUNC_22 (VAR_14, VAR_12))
 VAR_14 = FUNC_10 (VAR_12, VAR_14);

      FUNC_7 (FUNC_19 (VAR_6, VAR_10,
         FUNC_20 (VAR_9, VAR_13, VAR_14)));
    }
  else
    {
      int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
      enum machine_mode VAR_22;
      rtx VAR_23[4], VAR_24;

      VAR_22 = FUNC_2 (VAR_9);
      VAR_19 = FUNC_3 (VAR_9);
      VAR_20 = FUNC_4 (VAR_9) / VAR_5;
      VAR_21 = VAR_19 / VAR_20;
      VAR_24 = FUNC_0 (FUNC_1 (VAR_22));

      for (VAR_17 = 0; VAR_17 < VAR_20; ++VAR_17)
 {
   rtx VAR_25 = VAR_2;

   for (VAR_18 = 0; VAR_18 < VAR_21; ++VAR_18)
     {
       rtx VAR_26 = FUNC_5 (VAR_11, 0, (VAR_17+1)*VAR_21 - VAR_18 - 1);
       VAR_26 = FUNC_6 (VAR_7, VAR_22, VAR_26, 1);

       if (VAR_18 == 0)
  VAR_25 = VAR_26;
       else
  {
    VAR_25 = FUNC_9 (VAR_7, VAR_0, VAR_25, VAR_24,
           VAR_25, 1, VAR_3);
    VAR_25 = FUNC_9 (VAR_7, VAR_1, VAR_25, VAR_26,
           VAR_25, 1, VAR_3);
  }
     }

   VAR_23[VAR_17] = VAR_25;
 }

      if (VAR_20 == 1)
 FUNC_8 (VAR_10, FUNC_13 (VAR_9, VAR_23[0]));
      else if (VAR_20 == 2)
 {
   rtx VAR_27 = FUNC_14 (VAR_9);
   FUNC_7 (FUNC_17 (VAR_6, VAR_27));
   FUNC_8 (FUNC_13 (VAR_7, VAR_27), VAR_23[0]);
   FUNC_8 (FUNC_12 (VAR_7, VAR_27), VAR_23[1]);
   FUNC_8 (VAR_10, VAR_27);
 }
      else if (VAR_20 == 4)
 {
   rtx VAR_28 = FUNC_14 (130);
   VAR_11 = FUNC_18 (130, FUNC_16 (4, VAR_23));
   FUNC_23 (0, 130, VAR_28, VAR_11);
   FUNC_8 (VAR_10, FUNC_13 (VAR_9, VAR_28));
 }
      else
 FUNC_11 ();
    }
}
