
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_xpos; int mouse_oldxpos; int mouse_ypos; int mouse_oldypos; int font_size; int font_width; int yoff; int xsize; int status; scalar_t__ xoff; scalar_t__ mouse_oldpos; scalar_t__ mouse_pos; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

void
FUNC_2(scr_stat *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0();
    VAR_1->mouse_xpos = VAR_1->mouse_oldxpos = VAR_2;
    VAR_1->mouse_ypos = VAR_1->mouse_oldypos = VAR_3;
    if (VAR_1->font_size <= 0 || VAR_1->font_width <= 0)
 VAR_1->mouse_pos = VAR_1->mouse_oldpos = 0;
    else
 VAR_1->mouse_pos = VAR_1->mouse_oldpos =
     (VAR_3/VAR_1->font_size - VAR_1->yoff)*VAR_1->xsize + VAR_2/VAR_1->font_width -
     VAR_1->xoff;
    VAR_1->status |= VAR_0;
    FUNC_1(VAR_4);
}
