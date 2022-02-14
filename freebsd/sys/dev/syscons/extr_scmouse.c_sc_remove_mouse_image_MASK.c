
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mouse_oldpos; int xsize; int ysize; int sc; int status; int font_size; int font_width; int mouse_oldypos; int mouse_oldxpos; TYPE_1__* rndr; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_7__ {int (* draw_mouse ) (TYPE_2__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;

void
FUNC_8(scr_stat *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    if (FUNC_0(VAR_2))
 return;

    FUNC_1(VAR_2->sc);
    (*VAR_2->rndr->draw_mouse)(VAR_2, VAR_2->mouse_oldxpos, VAR_2->mouse_oldypos,
        VAR_0);
    VAR_4 = VAR_2->mouse_oldpos;
    FUNC_6(VAR_2, VAR_4);
    FUNC_6(VAR_2, VAR_4);
    VAR_3 = 1 + FUNC_3(10 - 1, VAR_2->font_width);
    VAR_3 = FUNC_4(VAR_3, 2);
    VAR_3 = FUNC_5(VAR_3, VAR_2->xsize - VAR_4 % VAR_2->xsize);
    VAR_5 = 1 + FUNC_3(16 - 1, VAR_2->font_size);
    VAR_5 = FUNC_4(VAR_5, 2);
    VAR_5 = FUNC_5(VAR_5, VAR_2->ysize - VAR_4 / VAR_2->xsize);
    FUNC_6(VAR_2, VAR_4 + (VAR_5 - 1) * VAR_2->xsize + VAR_3 - 1);
    VAR_2->status &= ~VAR_1;
    FUNC_2(VAR_2->sc);
}
