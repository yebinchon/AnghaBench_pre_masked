
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int const,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int ,int ,int ) ;
 int FUNC_18 (int,int ,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int,int ,int ,int) ;

void
FUNC_23 (bool VAR_8, rtx VAR_9, rtx VAR_10, int VAR_11)
{
  enum machine_mode VAR_12 = FUNC_1 (VAR_9);
  enum machine_mode VAR_13 = FUNC_2 (VAR_12);
  bool VAR_14 = 0;
  rtx VAR_15;

  switch (VAR_12)
    {
    case 134:
    case 133:
      if (VAR_8)
 {
   VAR_15 = FUNC_11 (FUNC_2 (VAR_12));
   FUNC_22 (1, VAR_15, VAR_9, 1 - VAR_11);
   if (VAR_11 == 0)
     VAR_15 = FUNC_15 (VAR_12, VAR_15, VAR_10);
   else
     VAR_15 = FUNC_15 (VAR_12, VAR_10, VAR_15);
   FUNC_7 (FUNC_14 (VAR_4, VAR_9, VAR_15));
   return;
 }
      break;

    case 136:
    case 135:
      {
 rtx VAR_16, VAR_17;




 VAR_15 = FUNC_13 (VAR_4, FUNC_12 (1, FUNC_0 (1 - VAR_11)));
 VAR_15 = FUNC_18 (VAR_13, VAR_9, VAR_15);

 if (VAR_11 == 0)
   VAR_16 = VAR_10, VAR_17 = VAR_15;
 else
   VAR_16 = VAR_15, VAR_17 = VAR_10;

 VAR_15 = FUNC_15 (VAR_12, VAR_16, VAR_17);
 FUNC_7 (FUNC_14 (VAR_4, VAR_9, VAR_15));
      }
      return;

    case 131:
      switch (VAR_11)
 {
 case 0:
   VAR_14 = 1;
   break;

 case 1:

   VAR_15 = FUNC_6 (VAR_9);

   FUNC_7 (FUNC_21 (VAR_9, VAR_9, VAR_9));

   FUNC_23 (0, VAR_9, VAR_10, 0);

   FUNC_7 (FUNC_20 (VAR_9, VAR_9, VAR_15,
           FUNC_0 (1), FUNC_0 (0),
           FUNC_0 (2+4), FUNC_0 (3+4)));
   return;

 case 2:

   VAR_15 = FUNC_6 (VAR_9);

   FUNC_23 (0, VAR_15, VAR_10, 0);

   FUNC_7 (FUNC_20 (VAR_9, VAR_9, VAR_15,
           FUNC_0 (0), FUNC_0 (1),
           FUNC_0 (0+4), FUNC_0 (3+4)));
   return;

 case 3:

   VAR_15 = FUNC_6 (VAR_9);

   FUNC_23 (0, VAR_15, VAR_10, 0);

   FUNC_7 (FUNC_20 (VAR_9, VAR_9, VAR_15,
           FUNC_0 (0), FUNC_0 (1),
           FUNC_0 (2+4), FUNC_0 (0+4)));
   return;

 default:
   FUNC_9 ();
 }
      break;

    case 130:

      if (VAR_11 == 0)
 {
   VAR_14 = 1;
   break;
 }

      if (VAR_3)
 {



   rtx VAR_18[4];

   VAR_18[0] = FUNC_0 (VAR_11);
   VAR_18[1] = VAR_6;
   VAR_18[2] = VAR_7;
   VAR_18[3] = FUNC_0 (3);
   VAR_18[VAR_11] = VAR_5;

   FUNC_7 (FUNC_19 (VAR_9, VAR_9, VAR_18[0],
     VAR_18[1], VAR_18[2], VAR_18[3]));

   FUNC_23 (0, VAR_9, VAR_10, 0);

   FUNC_7 (FUNC_19 (VAR_9, VAR_9, VAR_18[0],
     VAR_18[1], VAR_18[2], VAR_18[3]));
 }
      else
 {

   FUNC_23 (0, FUNC_10 (131, VAR_9),
      FUNC_10 (VAR_0, VAR_10), VAR_11);
 }
      return;

    case 129:
      VAR_14 = VAR_3;
      break;
    case 132:
      VAR_14 = VAR_8 && (VAR_2 || VAR_1);
      break;

    case 137:
    case 128:
    default:
      break;
    }

  if (VAR_14)
    {
      VAR_15 = FUNC_16 (VAR_12, VAR_10);
      VAR_15 = FUNC_17 (VAR_12, VAR_15, VAR_9, FUNC_0 (1 << VAR_11));
      FUNC_7 (FUNC_14 (VAR_4, VAR_9, VAR_15));
    }
  else
    {
      rtx VAR_19 = FUNC_5 (VAR_12, FUNC_3 (VAR_12), 0);

      FUNC_8 (VAR_19, VAR_9);

      VAR_15 = FUNC_4 (VAR_19, VAR_13, VAR_11*FUNC_3 (VAR_13));
      FUNC_8 (VAR_15, VAR_10);

      FUNC_8 (VAR_9, VAR_19);
    }
}
