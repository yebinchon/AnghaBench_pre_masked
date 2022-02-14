
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_4__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_2__ detail; } ;
struct tui_gen_win_info {int width; } ;
typedef enum tui_win_type { ____Placeholder_tui_win_type } tui_win_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void**,int,int,int,int,int,int ) ;
 struct tui_gen_win_info* FUNC_1 () ;
 struct tui_gen_win_info* FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (struct tui_win_info * * VAR_4, enum tui_win_type VAR_5,
                             int VAR_6, int VAR_7)
{
  struct tui_gen_win_info * VAR_8 = (struct tui_gen_win_info *) ((void*)0);




  if (VAR_5 == VAR_3)
    VAR_8 = FUNC_2 ();
  else
    VAR_8 = FUNC_1 ();
  FUNC_0 ((void **) & VAR_8,
     VAR_2,
     VAR_6,
     3,
     0,
     VAR_7,
     VAR_1);



  FUNC_0 ((void **) VAR_4,
     VAR_5,
     VAR_6,
     FUNC_3 () - VAR_8->width,
     VAR_8->width,
     VAR_7,
     VAR_0);

  (*VAR_4)->detail.source_info.execution_info = VAR_8;
}
