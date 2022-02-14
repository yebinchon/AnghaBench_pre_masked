
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_keyboard_softc {int sc_mtx; int sc_callout; int sc_xfer; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct g_keyboard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct g_keyboard_softc *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("\n");

 FUNC_3(&VAR_2->sc_mtx);
 FUNC_6(&VAR_2->sc_callout);
 FUNC_4(&VAR_2->sc_mtx);

 FUNC_7(VAR_2->sc_xfer, VAR_0);

 FUNC_5(&VAR_2->sc_callout);

 FUNC_2(&VAR_2->sc_mtx);

 return (0);
}
