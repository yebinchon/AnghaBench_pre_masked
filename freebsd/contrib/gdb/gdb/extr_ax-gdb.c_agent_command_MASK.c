
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;
struct agent_expr {int dummy; } ;


 int FUNC_0 (int ,struct agent_expr*) ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct agent_expr* FUNC_5 (int ,struct expression*) ;
 struct frame_info* FUNC_6 () ;
 int FUNC_7 (struct frame_info*) ;
 struct cleanup* FUNC_8 (int ,struct expression**) ;
 int FUNC_9 (struct agent_expr*) ;
 scalar_t__ VAR_2 ;
 struct expression* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_3, int VAR_4)
{
  struct cleanup *VAR_5 = 0;
  struct expression *VAR_6;
  struct agent_expr *VAR_7;
  struct frame_info *VAR_8 = FUNC_6 ();





  if (VAR_2)
    FUNC_3 ("GDB can't do agent expression translation with overlays.");

  if (VAR_3 == 0)
    FUNC_4 ("expression to translate");

  VAR_6 = FUNC_10 (VAR_3);
  VAR_5 = FUNC_8 (VAR_0, &VAR_6);
  VAR_7 = FUNC_5 (FUNC_7 (VAR_8), VAR_6);
  FUNC_9 (VAR_7);
  FUNC_0 (VAR_1, VAR_7);




  FUNC_1 (VAR_5);
  FUNC_2 ();
}
