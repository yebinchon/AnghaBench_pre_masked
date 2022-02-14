
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_gen_win_info {scalar_t__ type; } ;
struct tui_win_info {int can_highlight; struct tui_gen_win_info generic; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tui_gen_win_info*,int,int,int,int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tui_gen_win_info*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (void ** VAR_3, enum tui_win_type VAR_4,
                 int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
  void *VAR_10 = *VAR_3;
  struct tui_gen_win_info * VAR_11;

  if (VAR_10 == ((void*)0))
    {
      if (FUNC_4 (VAR_4))
 VAR_10 = (void *) FUNC_1 ();
      else
 VAR_10 = (void *) FUNC_2 (VAR_4);
    }
  if (FUNC_4 (VAR_4))
    VAR_11 = (struct tui_gen_win_info *) VAR_10;
  else
    VAR_11 = &((struct tui_win_info *) VAR_10)->generic;

  if (VAR_10 != ((void*)0))
    {
      FUNC_0 (VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
      if (!FUNC_4 (VAR_4))
 {
   if (VAR_11->type == VAR_0)
     ((struct tui_win_info *) VAR_10)->can_highlight = VAR_1;
   else
     ((struct tui_win_info *) VAR_10)->can_highlight = VAR_2;
 }
      FUNC_3 (VAR_11, VAR_9);
    }
  *VAR_3 = VAR_10;
}
