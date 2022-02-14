
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 struct symbol* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 char* FUNC_12 (char*,long) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (char*,char**,int) ;
 int FUNC_18 (char*,int) ;

__attribute__((used)) static void
FUNC_19 (char *VAR_2,
        long VAR_3,
        int VAR_4)
{
  int VAR_5 = -1, VAR_6 = -1;
  CORE_ADDR VAR_7;
  struct symbol *VAR_8;
  char *VAR_9;

  VAR_7 = FUNC_6 (FUNC_5 ());
  VAR_8 = FUNC_2 (FUNC_10 ());

  FUNC_9 (VAR_2);
  VAR_9 = FUNC_12 (VAR_2, VAR_3);

  while (VAR_9 && *VAR_9)
    switch (*VAR_9)
      {
      case 'F':
 if ((VAR_5 = (int) FUNC_17 (++VAR_9, &VAR_9, 16)) == -1)
   {
     if (VAR_4)
       FUNC_1 ("Target failed to find requested trace frame.");
     else
       {
  if (VAR_1)
    FUNC_8 ("End of trace buffer.\n");

  FUNC_18 ("-1", VAR_4);
  VAR_9 = ((void*)0);

       }
   }
 break;
      case 'T':
 if ((VAR_6 = (int) FUNC_17 (++VAR_9, &VAR_9, 16)) == -1)
   FUNC_1 ("Target failed to find requested trace frame.");
 break;
      case 'O':
 if (VAR_9[1] == 'K' && VAR_9[2] == '\0')
   VAR_9 += 2;
 else
   FUNC_1 ("Bogus reply from target: %s", VAR_9);
 break;
      default:
 FUNC_1 ("Bogus reply from target: %s", VAR_9);
      }

  FUNC_3 ();
  FUNC_11 ();
  FUNC_13 (FUNC_5 ());
  FUNC_15 (VAR_5);
  FUNC_16 (VAR_6);
  if (VAR_5 == -1)
    FUNC_14 (-1);
  else
    FUNC_14 (FUNC_10 ());

  if (VAR_4)
    {
      int VAR_10;
      if (VAR_8 == FUNC_2 (FUNC_10 ()) &&
   (VAR_7 == 0 ||
    FUNC_6 (FUNC_5 ()) == 0 ||
    VAR_7 == FUNC_6 (FUNC_5 ())))
 VAR_10 = -1;
      else
 VAR_10 = 1;

      FUNC_7 (VAR_0,
    FUNC_4 (VAR_0),
    VAR_10);
      FUNC_0 ();
    }
}
