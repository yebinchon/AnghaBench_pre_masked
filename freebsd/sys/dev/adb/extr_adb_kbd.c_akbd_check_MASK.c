
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_kbd_softc {scalar_t__ buffers; int sc_mutex; scalar_t__* at_buffered_char; } ;
typedef int keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(keyboard_t *VAR_2)
{
 struct adb_kbd_softc *VAR_3;

 if (!FUNC_0(VAR_2))
  return (VAR_0);

 VAR_3 = (struct adb_kbd_softc *)(VAR_2);

 FUNC_1(&VAR_3->sc_mutex);







  if (VAR_3->buffers > 0) {
   FUNC_2(&VAR_3->sc_mutex);
   return (VAR_1);
  }
 FUNC_2(&VAR_3->sc_mutex);

 return (VAR_0);
}
