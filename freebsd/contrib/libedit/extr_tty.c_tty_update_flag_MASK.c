
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tcflag_t ;
struct TYPE_6__ {TYPE_1__** t_t; } ;
struct TYPE_7__ {TYPE_2__ el_tty; } ;
struct TYPE_5__ {int t_setmask; int t_clrmask; } ;
typedef TYPE_3__ EditLine ;



__attribute__((used)) static tcflag_t
FUNC_0(EditLine *VAR_0, tcflag_t VAR_1, int VAR_2, int VAR_3)
{
 VAR_1 &= ~VAR_0->el_tty.t_t[VAR_2][VAR_3].t_clrmask;
 VAR_1 |= VAR_0->el_tty.t_t[VAR_2][VAR_3].t_setmask;
 return VAR_1;
}
