
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; } ;
struct TYPE_4__ {TYPE_1__ generic; } ;
typedef int QSFUNC ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**,int,int,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (char **VAR_3, int VAR_4, int VAR_5)
{
  typedef int QSFUNC (const void *, const void *);
  extern int FUNC_8 (char **, char **);
  extern int VAR_6;

  int VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13;
  char *VAR_14;


  int VAR_15 = VAR_0->generic.width;



  if (VAR_4 >= VAR_1)
    {
      char VAR_16[256];

      FUNC_4 (VAR_16, "\nDisplay all %d possibilities? (y or n)", VAR_4);
      FUNC_6 (VAR_16);
      if (FUNC_0 () == 0)
 {
   FUNC_6 ("\n");
   return;
 }
    }


  VAR_5 += 2;
  VAR_8 = VAR_15 / VAR_5;
  if (VAR_8 != 1 && (VAR_8 * VAR_5 == VAR_15))
    VAR_8--;



  if (VAR_8 == 0)
    VAR_8 = 1;


  VAR_7 = (VAR_4 + (VAR_8 - 1)) / VAR_8;






  if (VAR_2 == 0)
    FUNC_3 (VAR_3 + 1, VAR_4, sizeof (char *),
           (QSFUNC *)FUNC_8);

  FUNC_5 ('\n');

  if (VAR_6 == 0)
    {

      for (VAR_10 = 1; VAR_10 <= VAR_7; VAR_10++)
 {
   for (VAR_11 = 0, VAR_13 = VAR_10; VAR_11 < VAR_8; VAR_11++)
     {
       if (VAR_13 > VAR_4 || VAR_3[VAR_13] == 0)
  break;
       else
  {
    VAR_14 = FUNC_2 (VAR_3[VAR_13]);
    VAR_9 = FUNC_1 (VAR_14, VAR_3[VAR_13]);

    if (VAR_11 + 1 < VAR_8)
      for (VAR_12 = 0; VAR_12 < VAR_5 - VAR_9; VAR_12++)
        FUNC_5 (' ');
  }
       VAR_13 += VAR_7;
     }
   FUNC_5 ('\n');
 }
    }
  else
    {

      for (VAR_10 = 1; VAR_3[VAR_10]; VAR_10++)
 {
   VAR_14 = FUNC_2 (VAR_3[VAR_10]);
   VAR_9 = FUNC_1 (VAR_14, VAR_3[VAR_10]);

   if (VAR_3[VAR_10+1])
     {
       if (VAR_10 && (VAR_8 > 1) && (VAR_10 % VAR_8) == 0)
  FUNC_5 ('\n');
       else
  for (VAR_12 = 0; VAR_12 < VAR_5 - VAR_9; VAR_12++)
    FUNC_5 (' ');
     }
 }
      FUNC_5 ('\n');
    }
}
