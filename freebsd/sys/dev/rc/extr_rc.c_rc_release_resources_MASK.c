
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_softc {int sc_irqrid; int ** sc_port; int * sc_irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *) ;
 struct rc_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_3)
{
 struct rc_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4->sc_irq != ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, VAR_4->sc_irqrid,
      VAR_4->sc_irq);
  VAR_4->sc_irq = ((void*)0);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->sc_port[VAR_5] == ((void*)0))
   break;
  FUNC_0(VAR_3, VAR_1, VAR_5, VAR_4->sc_port[VAR_5]);
  VAR_4->sc_port[VAR_5] = ((void*)0);
 }
}
