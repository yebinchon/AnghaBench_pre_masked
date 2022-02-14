
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kmi_softc {int sc_flags; scalar_t__ sc_accents; int sc_state; } ;
struct TYPE_3__ {struct kmi_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(keyboard_t *VAR_3)
{
 struct kmi_softc *VAR_4 = VAR_3->kb_data;

 FUNC_0();

 VAR_4->sc_flags &= ~(VAR_0 | VAR_1);
 VAR_4->sc_state &= VAR_2;
 VAR_4->sc_accents = 0;
}
