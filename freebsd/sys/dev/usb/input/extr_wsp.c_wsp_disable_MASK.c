
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int sc_state; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct wsp_softc *VAR_2)
{
 VAR_2->sc_state &= ~VAR_0;
 FUNC_0(VAR_1, "disabled wsp\n");
}
