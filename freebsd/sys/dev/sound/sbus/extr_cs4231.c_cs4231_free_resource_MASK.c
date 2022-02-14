
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs4231_softc {int sc_nires; int sc_nmres; int sc_lock; int ** sc_res; int * sc_rid; int sc_dev; scalar_t__* sc_dmat; int ** sc_irqres; int * sc_irqrid; int ** sc_ih; } ;


 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (struct cs4231_softc*) ;
 int FUNC_6 (struct cs4231_softc*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct cs4231_softc *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3->sc_nires; VAR_4++) {
  if (VAR_3->sc_irqres[VAR_4]) {
   if (VAR_3->sc_ih[VAR_4]) {
    FUNC_4(VAR_3->sc_dev, VAR_3->sc_irqres[VAR_4],
        VAR_3->sc_ih[VAR_4]);
    VAR_3->sc_ih[VAR_4] = ((void*)0);
   }
   FUNC_3(VAR_3->sc_dev, VAR_1,
       VAR_3->sc_irqrid[VAR_4], VAR_3->sc_irqres[VAR_4]);
   VAR_3->sc_irqres[VAR_4] = ((void*)0);
  }
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->sc_nires; VAR_4++) {
  if (VAR_3->sc_dmat[VAR_4])
   FUNC_2(VAR_3->sc_dmat[VAR_4]);
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->sc_nmres; VAR_4++) {
  if (VAR_3->sc_res[VAR_4])
   FUNC_3(VAR_3->sc_dev, VAR_2,
       VAR_3->sc_rid[VAR_4], VAR_3->sc_res[VAR_4]);
 }
 FUNC_7(VAR_3->sc_lock);
 FUNC_6(VAR_3, VAR_0);
}
