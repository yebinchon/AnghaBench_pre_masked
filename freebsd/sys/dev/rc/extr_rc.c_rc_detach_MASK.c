
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_softc {int sc_swicookie; int sc_hwicookie; int sc_irq; struct rc_chans* sc_channels; } ;
struct rc_chans {int rc_tp; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct rc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct rc_softc *VAR_2;
 struct rc_chans *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = VAR_2->sc_channels;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_3++)
  FUNC_5(VAR_3->rc_tp);

 VAR_4 = FUNC_0(VAR_1, VAR_2->sc_irq, VAR_2->sc_hwicookie);
 if (VAR_4)
  FUNC_2(VAR_1, "failed to deregister interrupt handler\n");
 FUNC_4(VAR_2->sc_swicookie);
 FUNC_3(VAR_1);

 return (0);
}
