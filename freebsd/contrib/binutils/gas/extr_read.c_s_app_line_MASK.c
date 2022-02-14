
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 () ;
 char* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,int) ;

void
FUNC_10 (int VAR_3)
{
  char *VAR_4 = ((void*)0);
  int VAR_5;


  if (VAR_3)
    VAR_5 = FUNC_5 ();
  else if (!FUNC_6 (&VAR_5))
    {
      FUNC_7 ();
      return;
    }

  VAR_5--;

  if (VAR_5 < -1)
    FUNC_2 (FUNC_1("line numbers must be positive; line number %d rejected"),
      VAR_5 + 1);
  else
    {
      int VAR_6 = 0;
      int VAR_7 = 0;

      if (!VAR_3)
 {
   FUNC_0 ();

   if (*VAR_0 == '"')
     VAR_4 = FUNC_3 (&VAR_7);

   if (VAR_4)
     {
       int VAR_8;

       while (FUNC_6 (&VAR_8))
  switch (VAR_8)
    {
    case 1:
    case 2:
      if (VAR_6 && VAR_6 != (1 << VAR_8))
        FUNC_2 (FUNC_1("incompatible flag %i in line directive"),
          VAR_8);
      else
        VAR_6 |= 1 << VAR_8;
      break;

    case 3:
    case 4:

      break;

    default:
      FUNC_2 (FUNC_1("unsupported flag %i in line directive"),
        VAR_8);
      break;
    }

       if (!VAR_1[(unsigned char)*VAR_0])
  VAR_4 = 0;
     }
 }

      if (VAR_3 || VAR_4)
 {
   FUNC_9 (VAR_4, VAR_5, VAR_6);




 }
    }
  if (VAR_3 || VAR_4)
    FUNC_4 ();
  else
    FUNC_7 ();
}
