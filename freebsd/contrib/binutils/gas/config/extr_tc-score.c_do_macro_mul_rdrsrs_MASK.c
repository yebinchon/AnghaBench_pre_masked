
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int bwarn; int * error; } ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (char**,int,int ) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11 (char *VAR_8)
{
  int VAR_9;
  int VAR_10;
  int VAR_11;
  char *VAR_12;
  char VAR_13[VAR_3];

  if (VAR_7 == 1)
    FUNC_2 ("%s", VAR_1);

  FUNC_10 (VAR_13, VAR_8);
  VAR_12 = VAR_13;
  FUNC_7 (VAR_12);
  if (((VAR_9 = FUNC_5 (&VAR_12, -1, VAR_4)) == (int) VAR_2)
      || (FUNC_6 (&VAR_12) == (int) VAR_2)
      || ((VAR_10 = FUNC_5 (&VAR_12, -1, VAR_4)) == (int) VAR_2))
    {
      VAR_6.error = VAR_0;
      return;
    }

  if (FUNC_6 (&VAR_12) == (int) VAR_2)
    {

      if (FUNC_9 (VAR_6.name, "rem") == 0 || FUNC_9 (VAR_6.name, "remu") == 0)
        {
          FUNC_0 (VAR_0);
        }
      else
        {
          FUNC_0 (((void*)0));
          FUNC_3 (VAR_8);
        }
      return;
    }
  else
    {
      FUNC_0 (((void*)0));
      if (((VAR_11 = FUNC_5 (&VAR_12, -1, VAR_4)) == (int) VAR_2)
          || (FUNC_4 (VAR_12) == (int) VAR_2))
        {
          return;
        }
      else
        {
          char VAR_14[VAR_3];

          if (FUNC_9 (VAR_6.name, "rem") == 0)
            {
              FUNC_8 (VAR_13, "mul r%d, r%d", VAR_10, VAR_11);
              FUNC_8 (VAR_14, "mfceh  r%d", VAR_9);
            }
          else if (FUNC_9 (VAR_6.name, "remu") == 0)
            {
              FUNC_8 (VAR_13, "mulu r%d, r%d", VAR_10, VAR_11);
              FUNC_8 (VAR_14, "mfceh  r%d", VAR_9);
            }
          else
            {
              FUNC_8 (VAR_13, "%s r%d, r%d", VAR_6.name, VAR_10, VAR_11);
              FUNC_8 (VAR_14, "mfcel  r%d", VAR_9);
            }


          if (FUNC_1 (VAR_13, VAR_5) == (int) VAR_2)
     return;


          if (FUNC_1 (VAR_14, VAR_5) == (int) VAR_2)
     return;


          VAR_6.bwarn = -1;
        }
    }
}
