
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int kc_arg; int (* kc_func ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_10__ {TYPE_1__ kb_callback; } ;
struct TYPE_9__ {int sc_flags; TYPE_3__ sc_kbd; } ;
typedef TYPE_2__ hv_kbd_sc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

void
FUNC_4(hv_kbd_sc *VAR_3)
{
 uint32_t VAR_4;
 if ((VAR_3->sc_flags & VAR_0) != 0)
  return;

 if (FUNC_0(&VAR_3->sc_kbd) &&
     FUNC_1(&VAR_3->sc_kbd)) {

  (VAR_3->sc_kbd.kb_callback.kc_func) (&VAR_3->sc_kbd, VAR_1,
      VAR_3->sc_kbd.kb_callback.kc_arg);
 } else {

  do {
   VAR_4 = FUNC_2(&VAR_3->sc_kbd, 0);
  } while (VAR_4 != VAR_2);
 }
}
