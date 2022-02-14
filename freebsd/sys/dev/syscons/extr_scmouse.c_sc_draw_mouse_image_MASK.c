
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sc; int status; int mouse_ypos; int mouse_oldypos; int mouse_xpos; int mouse_oldxpos; int mouse_pos; int mouse_oldpos; TYPE_1__* rndr; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_6__ {int (* draw_mouse ) (TYPE_2__*,int ,int ,int ) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;

void
FUNC_4(scr_stat *VAR_2)
{
    if (FUNC_0(VAR_2))
 return;

    FUNC_1(VAR_2->sc);
    (*VAR_2->rndr->draw_mouse)(VAR_2, VAR_2->mouse_xpos, VAR_2->mouse_ypos, VAR_1);
    VAR_2->mouse_oldpos = VAR_2->mouse_pos;
    VAR_2->mouse_oldxpos = VAR_2->mouse_xpos;
    VAR_2->mouse_oldypos = VAR_2->mouse_ypos;
    VAR_2->status |= VAR_0;
    FUNC_2(VAR_2->sc);
}
