
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cursor_pos; int cursor_oldpos; TYPE_1__* tsw; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_6__ {int (* te_clear ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(scr_stat *VAR_0)
{
 (*VAR_0->tsw->te_clear)(VAR_0);
 VAR_0->cursor_oldpos = VAR_0->cursor_pos;
 FUNC_0(VAR_0);
}
