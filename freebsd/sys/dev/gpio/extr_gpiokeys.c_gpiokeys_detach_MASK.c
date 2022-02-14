
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiokeys_softc {int sc_total_keys; int * sc_keys; } ;
typedef int keyboard_t ;
typedef int device_t ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpiokeys_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct gpiokeys_softc*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct gpiokeys_softc *VAR_3;
 keyboard_t *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3->sc_total_keys; VAR_5++)
  FUNC_4(VAR_3, &VAR_3->sc_keys[VAR_5]);

 VAR_4 = FUNC_7(FUNC_6(VAR_0,
     FUNC_2(VAR_2)));




 FUNC_8(VAR_4);

 FUNC_0(VAR_3);
 if (VAR_3->sc_keys)
  FUNC_3(VAR_3->sc_keys, VAR_1);

 return (0);
}
