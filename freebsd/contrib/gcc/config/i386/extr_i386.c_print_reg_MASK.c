
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (char*,int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 char** VAR_9 ;
 int FUNC_13 (char,int *) ;
 char** VAR_10 ;
 char** VAR_11 ;

void
FUNC_14 (rtx VAR_12, int VAR_13, FILE *VAR_14)
{
  FUNC_11 (FUNC_5 (VAR_12) != VAR_0
       && FUNC_5 (VAR_12) != VAR_6
       && FUNC_5 (VAR_12) != VAR_4
       && FUNC_5 (VAR_12) != VAR_5);

  if (VAR_2 == VAR_1 || VAR_8[0] == 0)
    FUNC_13 ('%', VAR_14);

  if (VAR_13 == 'w' || FUNC_4 (VAR_12))
    VAR_13 = 2;
  else if (VAR_13 == 'b')
    VAR_13 = 1;
  else if (VAR_13 == 'k')
    VAR_13 = 4;
  else if (VAR_13 == 'q')
    VAR_13 = 8;
  else if (VAR_13 == 'y')
    VAR_13 = 3;
  else if (VAR_13 == 'h')
    VAR_13 = 0;
  else
    VAR_13 = FUNC_3 (FUNC_2 (VAR_12));



  if (FUNC_6 (VAR_12))
    {
      FUNC_11 (VAR_7);
      switch (VAR_13)
 {
   case 0:
     FUNC_8 ("extended registers have no high halves");
     break;
   case 1:
     FUNC_9 (VAR_14, "r%ib", FUNC_5 (VAR_12) - VAR_3 + 8);
     break;
   case 2:
     FUNC_9 (VAR_14, "r%iw", FUNC_5 (VAR_12) - VAR_3 + 8);
     break;
   case 4:
     FUNC_9 (VAR_14, "r%id", FUNC_5 (VAR_12) - VAR_3 + 8);
     break;
   case 8:
     FUNC_9 (VAR_14, "r%i", FUNC_5 (VAR_12) - VAR_3 + 8);
     break;
   default:
     FUNC_8 ("unsupported operand size for extended register");
     break;
 }
      return;
    }
  switch (VAR_13)
    {
    case 3:
      if (FUNC_7 (VAR_12))
 {
   FUNC_10 ("st(0)", VAR_14);
   break;
 }

    case 8:
    case 4:
    case 12:
      if (! FUNC_0 (VAR_12))
 FUNC_13 (VAR_13 == 8 && VAR_7 ? 'r' : 'e', VAR_14);

    case 16:
    case 2:
    normal:
      FUNC_10 (VAR_9[FUNC_5 (VAR_12)], VAR_14);
      break;
    case 1:
      if (FUNC_5 (VAR_12) >= FUNC_1 (VAR_11))
 goto normal;
      FUNC_10 (VAR_11[FUNC_5 (VAR_12)], VAR_14);
      break;
    case 0:
      if (FUNC_5 (VAR_12) >= FUNC_1 (VAR_10))
 goto normal;
      FUNC_10 (VAR_10[FUNC_5 (VAR_12)], VAR_14);
      break;
    default:
      FUNC_12 ();
    }
}
