
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd_softc {int sc_repeat_key; scalar_t__* sc_buffered_char; int sc_state; scalar_t__ sc_repeating; scalar_t__ sc_polling; scalar_t__ sc_flags; scalar_t__ sc_composed_char; scalar_t__ sc_accents; } ;
typedef int keyboard_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(keyboard_t *VAR_1)
{
 struct sunkbd_softc *VAR_2;

 VAR_2 = (struct sunkbd_softc *)VAR_1;
 VAR_2->sc_repeat_key = -1;
 VAR_2->sc_accents = 0;
 VAR_2->sc_composed_char = 0;
 VAR_2->sc_flags = 0;
 VAR_2->sc_polling = 0;
 VAR_2->sc_repeating = 0;
 VAR_2->sc_state &= VAR_0;





}
