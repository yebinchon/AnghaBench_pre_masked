
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ kb_callback; } ;
struct ckb_softc {int sc_flags; TYPE_2__ sc_kbd; int cols; int scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

void
FUNC_2(void *VAR_3)
{
 struct ckb_softc *VAR_4;

 VAR_4 = VAR_3;

 if (VAR_4->sc_flags & VAR_0)
  return;

 FUNC_0(VAR_1, VAR_4->scan, VAR_4->cols,
     VAR_4->scan, VAR_4->cols);

 (VAR_4->sc_kbd.kb_callback.kc_func) (&VAR_4->sc_kbd, VAR_2,
     VAR_4->sc_kbd.kb_callback.kc_arg);
}
