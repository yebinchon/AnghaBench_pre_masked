
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {int sc; int cursor_oldpos; TYPE_2__ curs_attr; TYPE_1__* rndr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_7__ {int (* draw_cursor ) (TYPE_3__*,int ,int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int,int ,int ) ;

void
FUNC_4(scr_stat *VAR_2)
{

    FUNC_0(VAR_2->sc);
    (*VAR_2->rndr->draw_cursor)(VAR_2, VAR_2->cursor_oldpos,
         VAR_2->curs_attr.flags & VAR_0, VAR_1,
         FUNC_2(VAR_2, VAR_2->cursor_oldpos));
    FUNC_1(VAR_2->sc);
}
