
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kc_arg; int (* kc_func ) (TYPE_3__*,int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__ kb_callback; } ;
struct sunkbd_softc {TYPE_3__ sc_kbd; TYPE_2__* sc_uart; } ;
struct TYPE_7__ {int sc_ttypend; scalar_t__ sc_leaving; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct sunkbd_softc *VAR_4 = VAR_3;
 int VAR_5;

 if (VAR_4->sc_uart->sc_leaving)
  return;

 VAR_5 = FUNC_2(&VAR_4->sc_uart->sc_ttypend);
 if (!(VAR_5 & VAR_1))
  return;

 if (VAR_5 & VAR_2) {
  if (FUNC_0(&VAR_4->sc_kbd) && FUNC_1(&VAR_4->sc_kbd)) {
   VAR_4->sc_kbd.kb_callback.kc_func(&VAR_4->sc_kbd,
       VAR_0, VAR_4->sc_kbd.kb_callback.kc_arg);
  }
 }
}
