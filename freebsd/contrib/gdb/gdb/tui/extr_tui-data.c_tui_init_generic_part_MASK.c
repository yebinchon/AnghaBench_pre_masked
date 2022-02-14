
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ y; scalar_t__ x; } ;
struct tui_gen_win_info {scalar_t__ title; int is_visible; int content_in_use; int * content; int * handle; scalar_t__ last_visible_line; scalar_t__ content_size; scalar_t__ viewport_height; TYPE_1__ origin; scalar_t__ height; scalar_t__ width; } ;
typedef int WINDOW ;


 int VAR_0 ;

void
FUNC_0 (struct tui_gen_win_info * VAR_1)
{
  VAR_1->width =
    VAR_1->height =
    VAR_1->origin.x =
    VAR_1->origin.y =
    VAR_1->viewport_height =
    VAR_1->content_size =
    VAR_1->last_visible_line = 0;
  VAR_1->handle = (WINDOW *) ((void*)0);
  VAR_1->content = ((void*)0);
  VAR_1->content_in_use =
    VAR_1->is_visible = VAR_0;
  VAR_1->title = 0;
}
