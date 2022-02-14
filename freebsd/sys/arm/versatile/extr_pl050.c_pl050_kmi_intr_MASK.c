
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ kb_callback; } ;
struct kmi_softc {int sc_flags; TYPE_2__ sc_kbd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct kmi_softc *VAR_4 = VAR_3;
 uint32_t VAR_5;

 FUNC_2();

 if ((VAR_4->sc_flags & VAR_1) != 0)
  return;

 if (FUNC_0(&VAR_4->sc_kbd) &&
     FUNC_1(&VAR_4->sc_kbd)) {

  (VAR_4->sc_kbd.kb_callback.kc_func) (&VAR_4->sc_kbd, VAR_0,
      VAR_4->sc_kbd.kb_callback.kc_arg);
 } else {

  do {
   VAR_5 = FUNC_3(&VAR_4->sc_kbd, 0);
  } while (VAR_5 != VAR_2);
 }

}
