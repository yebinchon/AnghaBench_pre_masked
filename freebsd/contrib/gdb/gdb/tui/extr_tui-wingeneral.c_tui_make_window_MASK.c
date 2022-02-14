
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;
struct tui_gen_win_info {int is_visible; int * handle; TYPE_1__ origin; int width; int height; } ;
typedef int WINDOW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tui_gen_win_info*,int ) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3 (struct tui_gen_win_info * VAR_3, int VAR_4)
{
  WINDOW *VAR_5;

  VAR_5 = FUNC_1 (VAR_3->height,
     VAR_3->width,
     VAR_3->origin.y,
     VAR_3->origin.x);
  VAR_3->handle = VAR_5;
  if (VAR_5 != (WINDOW *) ((void*)0))
    {
      if (VAR_4 == VAR_0)
 FUNC_0 (VAR_3, VAR_1);
      VAR_3->is_visible = VAR_2;
      FUNC_2 (VAR_5, VAR_2);
    }
}
