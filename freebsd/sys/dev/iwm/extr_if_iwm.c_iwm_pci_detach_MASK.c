
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int * sc_mem; int * sc_irq; int sc_ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 struct iwm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct iwm_softc *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->sc_irq != ((void*)0)) {
  FUNC_1(VAR_2, VAR_3->sc_irq, VAR_3->sc_ih);
  FUNC_0(VAR_2, VAR_0,
      FUNC_4(VAR_3->sc_irq), VAR_3->sc_irq);
  FUNC_3(VAR_2);
        }
 if (VAR_3->sc_mem != ((void*)0))
  FUNC_0(VAR_2, VAR_1,
      FUNC_4(VAR_3->sc_mem), VAR_3->sc_mem);
}
