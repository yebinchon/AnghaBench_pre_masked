
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mouse_xpos; int xoff; int font_width; int mouse_ypos; int yoff; int font_size; int xpixel; int ypixel; int xsize; int ysize; int mouse_oldxpos; int mouse_oldypos; int status; int mouse_pos; } ;
typedef TYPE_1__ scr_stat ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_3)
{
    if (VAR_3->mouse_xpos < VAR_3->xoff*VAR_3->font_width)
 VAR_3->mouse_xpos = VAR_3->xoff*VAR_3->font_width;
    if (VAR_3->mouse_ypos < VAR_3->yoff*VAR_3->font_size)
 VAR_3->mouse_ypos = VAR_3->yoff*VAR_3->font_size;
    if (FUNC_0(VAR_3)) {
        if (VAR_3->mouse_xpos > VAR_3->xpixel-1)
     VAR_3->mouse_xpos = VAR_3->xpixel-1;
        if (VAR_3->mouse_ypos > VAR_3->ypixel-1)
     VAR_3->mouse_ypos = VAR_3->ypixel-1;
 return;
    } else {
 if (VAR_3->mouse_xpos > (VAR_3->xsize + VAR_3->xoff)*VAR_3->font_width - 1)
     VAR_3->mouse_xpos = (VAR_3->xsize + VAR_3->xoff)*VAR_3->font_width - 1;
 if (VAR_3->mouse_ypos > (VAR_3->ysize + VAR_3->yoff)*VAR_3->font_size - 1)
     VAR_3->mouse_ypos = (VAR_3->ysize + VAR_3->yoff)*VAR_3->font_size - 1;
    }

    if ((VAR_3->mouse_xpos != VAR_3->mouse_oldxpos || VAR_3->mouse_ypos != VAR_3->mouse_oldypos)
 && (VAR_3->font_size != 0 && VAR_3->font_width != 0)) {
 VAR_3->status |= VAR_1;
     VAR_3->mouse_pos =
     (VAR_3->mouse_ypos/VAR_3->font_size - VAR_3->yoff)*VAR_3->xsize
  + VAR_3->mouse_xpos/VAR_3->font_width - VAR_3->xoff;

 if ((VAR_3->status & VAR_2) && (VAR_3->status & VAR_0))
     FUNC_1(VAR_3);

    }
}
