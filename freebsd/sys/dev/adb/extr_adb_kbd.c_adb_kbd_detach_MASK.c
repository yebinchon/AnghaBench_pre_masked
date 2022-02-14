
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_kbd_softc {int sc_cv; int sc_mutex; int sc_repeater; } ;
typedef int keyboard_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adb_kbd_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_1)
{
 struct adb_kbd_softc *VAR_2;
 keyboard_t *VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1,0);
 FUNC_1(&VAR_2->sc_repeater);

 FUNC_11(&VAR_2->sc_mutex);

 VAR_3 = FUNC_7(FUNC_6(VAR_0,
           FUNC_4(VAR_1)));

 FUNC_8(VAR_3);





 FUNC_9(VAR_3);

 FUNC_12(&VAR_2->sc_mutex);

 FUNC_10(&VAR_2->sc_mutex);
 FUNC_2(&VAR_2->sc_cv);

 return (0);
}
