
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int sc_state; int sc_status; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct wsp_softc *VAR_2)
{

 FUNC_1(&VAR_2->sc_status, 0, sizeof(VAR_2->sc_status));
 VAR_2->sc_state |= VAR_0;

 FUNC_0(VAR_1, "enabled wsp\n");
 return (0);
}
