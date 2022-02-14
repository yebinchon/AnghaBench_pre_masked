
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct obstack {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char) ;
 char* FUNC_11 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct obstack*) ;
 scalar_t__ FUNC_15 (struct obstack*,int) ;
 scalar_t__ FUNC_16 (struct obstack*) ;
 int FUNC_17 (struct obstack*,int) ;
 int FUNC_18 (struct obstack*,char*) ;
 char* FUNC_19 (struct obstack*) ;
 char* FUNC_20 (scalar_t__,int ) ;

__attribute__((used)) static char *
FUNC_21 (const char* VAR_7, tree VAR_8, tree VAR_9)
{
  static struct obstack VAR_10;
  static char *VAR_11;
  int VAR_12, VAR_13;

  if (!VAR_11)
    FUNC_14 (&VAR_10);
  else
    FUNC_18 (&VAR_10, VAR_11);
  VAR_11 = (char *) FUNC_15 (&VAR_10, 1);




  FUNC_0 (&VAR_10, (VAR_7), strlen (VAR_7));
  FUNC_0 (&VAR_10, ('<'));;
  VAR_13 = FUNC_8 (VAR_8);
  VAR_9 = FUNC_4 (VAR_9);
  FUNC_13 (VAR_13 == FUNC_8 (VAR_9));
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
    {
      tree VAR_14;
      tree VAR_15;

      VAR_14 = FUNC_6 (FUNC_7 (VAR_8, VAR_12));
      VAR_15 = FUNC_7 (VAR_9, VAR_12);

      if (VAR_14 == VAR_6)
 continue;

      if (VAR_12)
 FUNC_0 (&VAR_10, (','));;

      if (FUNC_5 (VAR_14) == VAR_5)
 {
   FUNC_0 (&VAR_10, (FUNC_20 (VAR_15, VAR_3)), FUNC_0 (FUNC_20 (VAR_15, VAR_3)));
   continue;
 }
      else if (FUNC_5 (VAR_14) == VAR_2)
 {
   if (FUNC_5 (VAR_15) == VAR_2)
     {


       tree VAR_16 = FUNC_1 (VAR_15);
       if (VAR_16)
  {


    FUNC_13 (FUNC_5 (VAR_16) == VAR_0
         || FUNC_0 (VAR_16));
    FUNC_0 (&VAR_10, (FUNC_11 (FUNC_1 (VAR_15), VAR_4)), FUNC_0 (FUNC_11 (FUNC_1 (VAR_15), VAR_4)));

    FUNC_0 (&VAR_10, ("::"), FUNC_0 ("::"));
  }
       FUNC_0 (&VAR_10, (FUNC_3 (FUNC_2 (VAR_15))), FUNC_0 (FUNC_3 (FUNC_2 (VAR_15))));
     }
   else

     FUNC_0 (&VAR_10, (FUNC_20 (VAR_15, VAR_3)), FUNC_0 (FUNC_20 (VAR_15, VAR_3)));
   continue;
 }
      else
 FUNC_13 (FUNC_5 (VAR_14) == VAR_1);



      FUNC_0 (&VAR_10, (FUNC_12 (VAR_15, VAR_4)), FUNC_0 (FUNC_12 (VAR_15, VAR_4)));
    }
  {
    char *VAR_17 = FUNC_19 (&VAR_10);
    int VAR_18 = 0;
    while (VAR_17[VAR_18 - 1] == ' ')
      VAR_18--;
    FUNC_17 (&VAR_10, VAR_18);


    if (VAR_17[VAR_18 - 1] == '>')
      FUNC_0 (&VAR_10, (' '));;
  }
  FUNC_0 (&VAR_10, ('>'));;
  FUNC_0 (&VAR_10, ('\0'));;
  return (char *) FUNC_16 (&VAR_10);
}
