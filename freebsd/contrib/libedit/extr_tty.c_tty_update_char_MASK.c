
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__** t_c; scalar_t__ t_vdisable; TYPE_1__** t_t; } ;
struct TYPE_7__ {TYPE_2__ el_tty; } ;
struct TYPE_5__ {int t_setmask; int t_clrmask; } ;
typedef TYPE_3__ EditLine ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_1(EditLine *VAR_3, int VAR_4, int VAR_5) {
 if (!((VAR_3->el_tty.t_t[VAR_4][VAR_1].t_setmask & FUNC_0(VAR_5)))
     && (VAR_3->el_tty.t_c[VAR_2][VAR_5] != VAR_3->el_tty.t_c[VAR_0][VAR_5]))
  VAR_3->el_tty.t_c[VAR_4][VAR_5] = VAR_3->el_tty.t_c[VAR_2][VAR_5];
 if (VAR_3->el_tty.t_t[VAR_4][VAR_1].t_clrmask & FUNC_0(VAR_5))
  VAR_3->el_tty.t_c[VAR_4][VAR_5] = VAR_3->el_tty.t_vdisable;
}
