
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ term_cmd; scalar_t__ term; scalar_t__ resp_delim; int cmd; } ;
struct TYPE_4__ {char* (* regname ) (int) ;char** regnames; int flags; TYPE_1__ getreg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__,...) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int,char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_13 (int VAR_5)
{
  const char *VAR_6;
  char *VAR_7;
  char *VAR_8;
  int VAR_9;

  VAR_8 = FUNC_1 (VAR_0 * 2 + 1);
  VAR_7 = FUNC_1 (VAR_0);
  FUNC_4 (VAR_7, 0, VAR_0);

  if (VAR_3->regname != ((void*)0))
    VAR_6 = VAR_3->regname (VAR_5);
  else
    VAR_6 = VAR_3->regnames[VAR_5];
  FUNC_5 ("MON fetchreg %d '%s'\n", VAR_5, VAR_6 ? VAR_6 : "(null name)");

  if (!VAR_6 || (*VAR_6 == '\0'))
    {
      FUNC_5 ("No register known for %d\n", VAR_5);
      FUNC_12 (VAR_5, VAR_7);
      return;
    }



  FUNC_8 (VAR_3->getreg.cmd, VAR_6);





  if (VAR_3->getreg.resp_delim)
    {
      FUNC_5 ("EXP getreg.resp_delim\n");
      FUNC_6 (VAR_3->getreg.resp_delim, ((void*)0), 0);

      if (VAR_3->flags & VAR_1
   && (VAR_5 & 1) != 0 && VAR_5 < 32)
 {
   FUNC_5 ("EXP getreg.resp_delim\n");
   FUNC_6 (VAR_3->getreg.resp_delim, ((void*)0), 0);
 }
    }


  if (VAR_3->flags & VAR_2)
    {
      int VAR_10;
      VAR_10 = FUNC_10 (VAR_4);
      while (VAR_10 == ' ')
 VAR_10 = FUNC_10 (VAR_4);
      if ((VAR_10 == '0') && ((VAR_10 = FUNC_10 (VAR_4)) == 'x'))
 ;
      else
 FUNC_2 ("Bad value returned from monitor while fetching register %x.",
        VAR_5);
    }





  for (VAR_9 = 0; VAR_9 < FUNC_0 (VAR_5) * 2; VAR_9++)
    {
      int VAR_11;
      VAR_11 = FUNC_10 (VAR_4);
      while (VAR_11 == ' ')
 VAR_11 = FUNC_10 (VAR_4);

      if (!FUNC_3 (VAR_11))
 break;

      VAR_8[VAR_9] = VAR_11;
    }

  VAR_8[VAR_9] = '\000';
  FUNC_5 ("REGVAL '%s'\n", VAR_8);






  if (VAR_3->getreg.term)
    {
      FUNC_5 ("EXP getreg.term\n");
      FUNC_6 (VAR_3->getreg.term, ((void*)0), 0);
    }

  if (VAR_3->getreg.term_cmd)
    {
      FUNC_5 ("EMIT getreg.term.cmd\n");
      FUNC_8 (VAR_3->getreg.term_cmd);
    }
  if (!VAR_3->getreg.term ||
      VAR_3->getreg.term_cmd)
    FUNC_7 (((void*)0), 0);

  FUNC_9 (VAR_5, VAR_8);
}
