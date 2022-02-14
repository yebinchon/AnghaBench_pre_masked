
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xsize; int ysize; int xpos; int ypos; int cursor_pos; } ;
typedef TYPE_1__ scr_stat ;



void
FUNC_0(scr_stat *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 < 0)
  VAR_1 = 0;
 if (VAR_2 < 0)
  VAR_2 = 0;
 if (VAR_1 >= VAR_0->xsize)
  VAR_1 = VAR_0->xsize - 1;
 if (VAR_2 >= VAR_0->ysize)
  VAR_2 = VAR_0->ysize - 1;
 VAR_0->xpos = VAR_1;
 VAR_0->ypos = VAR_2;
 VAR_0->cursor_pos = VAR_0->ypos*VAR_0->xsize + VAR_0->xpos;
}
