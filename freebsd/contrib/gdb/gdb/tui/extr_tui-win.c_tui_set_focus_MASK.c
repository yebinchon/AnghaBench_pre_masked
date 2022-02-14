
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; int is_visible; } ;
struct tui_win_info {TYPE_1__ generic; } ;
struct tui_gen_win_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ is_visible; } ;
struct TYPE_6__ {TYPE_2__ generic; } ;


 int VAR_0 ;
 struct tui_win_info* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char FUNC_4 (char) ;
 struct tui_win_info* FUNC_5 (scalar_t__) ;
 struct tui_win_info* FUNC_6 (char*) ;
 struct tui_win_info* FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (struct tui_win_info*) ;
 int FUNC_10 (struct tui_gen_win_info*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_3, int VAR_4)
{
  if (VAR_3 != (char *) ((void*)0))
    {
      char *VAR_5 = (char *) FUNC_14 (VAR_3);
      int VAR_6;
      struct tui_win_info * VAR_7 = (struct tui_win_info *) ((void*)0);

      for (VAR_6 = 0; (VAR_6 < FUNC_2 (VAR_5)); VAR_6++)
 VAR_5[VAR_6] = FUNC_4 (VAR_3[VAR_6]);

      if (FUNC_3 (VAR_5, "NEXT"))
 VAR_7 = FUNC_5 (FUNC_11 ());
      else if (FUNC_3 (VAR_5, "PREV"))
 VAR_7 = FUNC_7 (FUNC_11 ());
      else
 VAR_7 = FUNC_6 (VAR_5);

      if (VAR_7 == (struct tui_win_info *) ((void*)0) || !VAR_7->generic.is_visible)
 FUNC_12 ("Invalid window specified. \nThe window name specified must be valid and visible.\n");

      else
 {
   FUNC_9 (VAR_7);
   FUNC_0 (VAR_1->generic.handle, (VAR_7 != VAR_1));
 }

      if (VAR_2 && VAR_2->generic.is_visible)
 FUNC_8 ();
      FUNC_13 (VAR_5);
      FUNC_1 ("Focus set to %s window.\n",
         FUNC_10 ((struct tui_gen_win_info *) FUNC_11 ()));
    }
  else
    FUNC_12 ("Incorrect Number of Arguments.\n%s", VAR_0);
}
