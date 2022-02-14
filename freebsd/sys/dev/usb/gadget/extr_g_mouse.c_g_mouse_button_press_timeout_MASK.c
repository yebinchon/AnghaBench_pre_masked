
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mouse_softc {int * sc_xfer; } ;


 int FUNC_0 (int,char*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct g_mouse_softc*) ;
 int FUNC_2 (struct g_mouse_softc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct g_mouse_softc *VAR_2 = VAR_1;

 FUNC_2(VAR_2);

 FUNC_0(11, "Timeout %p (button press)\n", VAR_2->sc_xfer[VAR_0]);

 FUNC_1(VAR_2);

 FUNC_3(VAR_2->sc_xfer[VAR_0]);
}
