
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
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int const,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int,int ,int ) ;
 int FUNC_15 (int const,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;

void
FUNC_20 (bool VAR_7, rtx VAR_8, rtx VAR_9, int VAR_10)
{
  enum machine_mode VAR_11 = FUNC_1 (VAR_9);
  enum machine_mode VAR_12 = FUNC_2 (VAR_11);
  bool VAR_13 = 0;
  rtx VAR_14;

  switch (VAR_11)
    {
    case 133:
    case 134:
      if (!VAR_7)
 break;


    case 136:
    case 135:
      VAR_13 = 1;
      break;

    case 131:
      switch (VAR_10)
 {
 case 0:
   VAR_14 = VAR_9;
   break;

 case 1:
 case 3:
   VAR_14 = FUNC_10 (VAR_11);
   FUNC_6 (FUNC_18 (VAR_14, VAR_9, VAR_9,
           FUNC_0 (VAR_10), FUNC_0 (VAR_10),
           FUNC_0 (VAR_10+4), FUNC_0 (VAR_10+4)));
   break;

 case 2:
   VAR_14 = FUNC_10 (VAR_11);
   FUNC_6 (FUNC_19 (VAR_14, VAR_9, VAR_9));
   break;

 default:
   FUNC_8 ();
 }
      VAR_9 = VAR_14;
      VAR_13 = 1;
      VAR_10 = 0;
      break;

    case 130:
      if (VAR_5)
 {
   switch (VAR_10)
     {
     case 0:
       VAR_14 = VAR_9;
       break;

     case 1:
     case 3:
       VAR_14 = FUNC_10 (VAR_11);
       FUNC_6 (FUNC_16 (VAR_14, VAR_9,
         FUNC_0 (VAR_10), FUNC_0 (VAR_10),
         FUNC_0 (VAR_10), FUNC_0 (VAR_10)));
       break;

     case 2:
       VAR_14 = FUNC_10 (VAR_11);
       FUNC_6 (FUNC_17 (VAR_14, VAR_9, VAR_9));
       break;

     default:
       FUNC_8 ();
     }
   VAR_9 = VAR_14;
   VAR_13 = 1;
   VAR_10 = 0;
 }
      else
 {

   FUNC_20 (0, FUNC_9 (VAR_1, VAR_8),
          FUNC_9 (131, VAR_9), VAR_10);
   return;
 }
      break;

    case 129:
      VAR_13 = VAR_5;
      break;
    case 132:
      VAR_13 = VAR_7 && (VAR_4 || VAR_3);
      break;

    case 137:
    case 128:

    default:
      break;
    }

  if (VAR_13)
    {
      VAR_14 = FUNC_12 (VAR_6, FUNC_11 (1, FUNC_0 (VAR_10)));
      VAR_14 = FUNC_14 (VAR_12, VAR_9, VAR_14);


      if (VAR_12 == VAR_0)
 {
   VAR_14 = FUNC_15 (VAR_2, VAR_14);
   VAR_8 = FUNC_9 (VAR_2, VAR_8);
 }

      FUNC_6 (FUNC_13 (VAR_6, VAR_8, VAR_14));
    }
  else
    {
      rtx VAR_15 = FUNC_5 (VAR_11, FUNC_3 (VAR_11), 0);

      FUNC_7 (VAR_15, VAR_9);

      VAR_14 = FUNC_4 (VAR_15, VAR_12, VAR_10*FUNC_3 (VAR_12));
      FUNC_7 (VAR_8, VAR_14);
    }
}
