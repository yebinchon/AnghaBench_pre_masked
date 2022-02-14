
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ckb_softc {int sc_flags; int sc_poll_thread; } ;
struct TYPE_3__ {struct ckb_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_2, int VAR_3)
{
 struct ckb_softc *VAR_4;

 VAR_4 = VAR_2->kb_data;

 FUNC_0();
 if (VAR_3) {
  VAR_4->sc_flags |= VAR_0;
  VAR_4->sc_poll_thread = VAR_1;
 } else {
  VAR_4->sc_flags &= ~VAR_0;
 }
 FUNC_1();

 return (0);
}
