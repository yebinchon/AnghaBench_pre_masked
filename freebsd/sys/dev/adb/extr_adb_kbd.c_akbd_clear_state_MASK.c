
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_kbd_softc {int sc_mutex; scalar_t__* at_buffered_char; int sc_repeater; scalar_t__ buffers; } ;
typedef int keyboard_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(keyboard_t *VAR_0)
{
 struct adb_kbd_softc *VAR_1;

 VAR_1 = (struct adb_kbd_softc *)(VAR_0);

 FUNC_1(&VAR_1->sc_mutex);

 VAR_1->buffers = 0;
 FUNC_0(&VAR_1->sc_repeater);





 FUNC_2(&VAR_1->sc_mutex);
}
