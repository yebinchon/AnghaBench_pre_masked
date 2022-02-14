
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct TYPE_2__ {struct ui_file* targ; struct ui_file* log; struct ui_file* err; struct ui_file* out; } ;


 int FUNC_0 (struct ui_file*,char*,int *) ;
 struct ui_file* FUNC_1 (int *,char*) ;
 struct ui_file* VAR_0 ;
 struct ui_file* VAR_1 ;
 struct ui_file* VAR_2 ;
 struct ui_file* VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int * VAR_7 ;
 TYPE_1__ VAR_8 ;
 struct ui_file* FUNC_3 (struct ui_file*,int ,struct ui_file*,int) ;
 scalar_t__ FUNC_4 (int ,struct ui_file*) ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7 (int VAR_10)
{
  struct ui_file *VAR_11;

  if (VAR_7 != ((void*)0))
    {
      FUNC_0 (VAR_2, "Already logging to %s.\n",
     VAR_7);
      return;
    }

  VAR_11 = FUNC_1 (VAR_4, VAR_5 ? "w" : "a");
  if (VAR_11 == ((void*)0))
    FUNC_2 ("set logging");


  if (!VAR_6)
    {
      VAR_11 = FUNC_3 (VAR_2, 0, VAR_11, 1);
      if (VAR_11 == ((void*)0))
 FUNC_2 ("set logging");
      if (VAR_10)
 FUNC_0 (VAR_2, "Copying output to %s.\n",
       VAR_4);
    }
  else if (VAR_10)
    FUNC_0 (VAR_2, "Redirecting output to %s.\n",
   VAR_4);

  VAR_7 = FUNC_6 (VAR_4);
  VAR_8.out = VAR_2;
  VAR_8.err = VAR_0;
  VAR_8.log = VAR_1;
  VAR_8.targ = VAR_3;

  VAR_2 = VAR_11;
  VAR_0 = VAR_11;
  VAR_1 = VAR_11;
  VAR_3 = VAR_11;

  if (FUNC_4 (VAR_9, VAR_2) < 0)
    FUNC_5 ("Current output protocol does not support redirection");
}
