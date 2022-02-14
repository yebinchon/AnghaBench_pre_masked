
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (int VAR_11, int VAR_12)
{
  int VAR_13 = 0;
  int VAR_14 = VAR_11 ? VAR_4 : VAR_6;
  int VAR_15 = 9600;

  time_t VAR_16 = FUNC_11 (0);
  time_t VAR_17 = VAR_16 + 10;


  while (FUNC_11 (0) < VAR_17 && !VAR_13)
    {
      int VAR_18;
      VAR_2;

      FUNC_7 (VAR_8);
      FUNC_8 (VAR_8);

      if (VAR_12)
 FUNC_4 ("Trying to connect at %d baud.\n", VAR_15);





      if (VAR_11)
 {
   FUNC_5 (132);
   while ((VAR_18 = FUNC_9 (VAR_8, 1)) > 0)
     {
       switch (VAR_18)
  {
  case 128:
    break;
  case 132:

    break;
  default:
    FUNC_4 ("%c", FUNC_2 (VAR_18) ? VAR_18 : ' ');
    break;
  }
     }

   if (VAR_18 == 0)
     {

       FUNC_3 ("\n");
     }
 }

      FUNC_5 (VAR_3);

      FUNC_5 (VAR_14 | VAR_5);
      FUNC_6 (0);

      while (!VAR_13 && (VAR_18 = FUNC_9 (VAR_8, 1)) > 0)
 {
   if (VAR_9)
     FUNC_1 (VAR_7, "[%02x]\n", VAR_18);

   switch (VAR_18)
     {
     case 128:
       break;

     case 132:
       while ((VAR_18 = FUNC_9 (VAR_8, 1)) == 132)
  ;
       do
  {
    FUNC_4 ("%c", FUNC_2 (VAR_18) ? VAR_18 : ' ');
  }
       while ((VAR_18 = FUNC_9 (VAR_8, 1)) > 0);

       if (VAR_12)
  {
    FUNC_4 ("\nThe board has sent notification that it was reset.\n");
    FUNC_4 ("Waiting for it to settle down...\n");
  }
       FUNC_10 (3);
       if (VAR_12)
  FUNC_4 ("\nTrying again.\n");
       VAR_11 = 0;
       break;

     default:
       break;

     case 131:
       {
  int VAR_19 = FUNC_9 (VAR_8, 1);

  if (VAR_9)
    FUNC_1 (VAR_7, "[%02x]\n", VAR_19);

  switch (VAR_19)
    {
    case 128:
      break;
    case 129:
      VAR_13 = 1;
      break;
    case 130:
      VAR_13 = 1;
      break;
    default:
      break;
    }
       }
     }
 }
    }

  if (!VAR_13)
    {
      FUNC_0 ("Couldn't reset the board, try pressing the reset button");
    }
}
