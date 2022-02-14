
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_kbd_softc {int sc_repeater; } ;
typedef int keyboard_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_0)
{
 struct adb_kbd_softc *VAR_1;
 VAR_1 = (struct adb_kbd_softc *)(VAR_0);

 FUNC_1(&VAR_1->sc_repeater);
 FUNC_0(VAR_0);
 return (0);
}
