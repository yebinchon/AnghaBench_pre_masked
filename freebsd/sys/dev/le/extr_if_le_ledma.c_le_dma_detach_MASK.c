
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lance_softc {int sc_mem; } ;
struct TYPE_2__ {struct lance_softc lsc; } ;
struct le_dma_softc {int sc_rres; int sc_ires; int sc_dma; int sc_dmat; int sc_dmam; TYPE_1__ sc_am7990; int sc_ih; } ;
typedef int device_t ;


 int FUNC_0 (struct lance_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct le_dma_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct le_dma_softc *VAR_3;
 struct lance_softc *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_7(VAR_2);
 VAR_4 = &VAR_3->sc_am7990.lsc;

 FUNC_6(VAR_2, VAR_3->sc_ires, VAR_3->sc_ih);
 FUNC_1(&VAR_3->sc_am7990);
 FUNC_3(VAR_3->sc_dmat, VAR_3->sc_dmam);
 FUNC_4(VAR_3->sc_dmat, VAR_4->sc_mem, VAR_3->sc_dmam);
 FUNC_2(VAR_3->sc_dmat);
 VAR_5 = FUNC_8(VAR_3->sc_dma);
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_5(VAR_2, VAR_0, FUNC_9(VAR_3->sc_ires),
     VAR_3->sc_ires);
 FUNC_5(VAR_2, VAR_1, FUNC_9(VAR_3->sc_rres),
     VAR_3->sc_rres);
 FUNC_0(VAR_4);

 return (0);
}
