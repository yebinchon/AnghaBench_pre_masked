
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONGEST ;
struct TYPE_3__ {char* cmd; char const* term_cmd; scalar_t__ term; scalar_t__ resp_delim; } ;
struct TYPE_4__ {char* (* regname ) (int) ;char** regnames; int flags; TYPE_1__ setreg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (char*,char const*,...) ;
 char const* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 char* FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10 (int VAR_4)
{
  const char *VAR_5;
  ULONGEST VAR_6;

  if (VAR_2->regname != ((void*)0))
    VAR_5 = VAR_2->regname (VAR_4);
  else
    VAR_5 = VAR_2->regnames[VAR_4];

  if (!VAR_5 || (*VAR_5 == '\0'))
    {
      FUNC_1 ("MON Cannot store unknown register\n");
      return;
    }

  VAR_6 = FUNC_8 (VAR_4);
  FUNC_1 ("MON storeg %d %s\n", VAR_4,
   FUNC_7 (VAR_6, FUNC_0 (VAR_4)));



  if (VAR_2->flags & VAR_0)
    FUNC_5 (VAR_2->setreg.cmd, VAR_6, VAR_5);
  else if (VAR_2->flags & VAR_1)
    FUNC_5 (VAR_2->setreg.cmd, VAR_5);
  else
    FUNC_5 (VAR_2->setreg.cmd, VAR_5, VAR_6);

  if (VAR_2->setreg.resp_delim)
    {
      FUNC_1 ("EXP setreg.resp_delim\n");
      FUNC_4 (&VAR_3, ((void*)0), 0);
      if (VAR_2->flags & VAR_1)
 FUNC_5 ("%s\r", FUNC_6 (VAR_6));
    }
  if (VAR_2->setreg.term)
    {
      FUNC_1 ("EXP setreg.term\n");
      FUNC_2 (VAR_2->setreg.term, ((void*)0), 0);
      if (VAR_2->flags & VAR_1)
 FUNC_5 ("%s\r", FUNC_6 (VAR_6));
      FUNC_3 (((void*)0), 0);
    }
  else
    FUNC_3 (((void*)0), 0);
  if (VAR_2->setreg.term_cmd)
    {
      FUNC_1 ("EXP setreg_termcmd\n");
      FUNC_5 ("%s", VAR_2->setreg.term_cmd);
      FUNC_3 (((void*)0), 0);
    }
}
