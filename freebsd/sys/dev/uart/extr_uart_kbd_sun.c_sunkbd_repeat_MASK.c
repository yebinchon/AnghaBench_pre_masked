
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ kb_callback; } ;
struct sunkbd_softc {int sc_repeat_key; int sc_repeating; TYPE_2__ sc_kbd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct sunkbd_softc *VAR_2 = VAR_1;

 if (FUNC_0(&VAR_2->sc_kbd) && FUNC_1(&VAR_2->sc_kbd)) {
  if (VAR_2->sc_repeat_key != -1) {
   VAR_2->sc_repeating = 1;
   VAR_2->sc_kbd.kb_callback.kc_func(&VAR_2->sc_kbd,
       VAR_0, VAR_2->sc_kbd.kb_callback.kc_arg);
  }
 }
}
