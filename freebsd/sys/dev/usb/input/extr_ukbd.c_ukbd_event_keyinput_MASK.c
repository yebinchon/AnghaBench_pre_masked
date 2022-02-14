
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ kb_callback; } ;
struct ukbd_softc {int sc_flags; scalar_t__ sc_inputs; TYPE_2__ sc_kbd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ukbd_softc *VAR_3)
{
 int VAR_4;

 FUNC_2();

 if ((VAR_3->sc_flags & VAR_2) != 0)
  return;

 if (VAR_3->sc_inputs == 0)
  return;

 if (FUNC_0(&VAR_3->sc_kbd) &&
     FUNC_1(&VAR_3->sc_kbd)) {

  (VAR_3->sc_kbd.kb_callback.kc_func) (&VAR_3->sc_kbd, VAR_0,
      VAR_3->sc_kbd.kb_callback.kc_arg);
 } else {

  do {
   VAR_4 = FUNC_4(&VAR_3->sc_kbd, 0);
  } while (VAR_4 != VAR_1);
 }
}
