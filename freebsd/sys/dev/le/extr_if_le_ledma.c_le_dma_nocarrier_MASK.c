
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct le_dma_softc {int sc_dma; } ;
struct TYPE_2__ {int ifm_media; } ;
struct lance_softc {int sc_ifp; TYPE_1__ sc_media; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct lance_softc*) ;
 int FUNC_4 (struct lance_softc*) ;

__attribute__((used)) static void
FUNC_5(struct lance_softc *VAR_1)
{
 struct le_dma_softc *VAR_2 = (struct le_dma_softc *)VAR_1;






 if (FUNC_1(VAR_2->sc_dma) & VAR_0) {
  switch (FUNC_0(VAR_1->sc_media.ifm_media)) {
  case 130:
  case 128:
   FUNC_2(VAR_1->sc_ifp, "lost carrier on UTP port, "
       "switching to AUI port\n");
   FUNC_3(VAR_1);
  }
 } else {
  switch (FUNC_0(VAR_1->sc_media.ifm_media)) {
  case 129:
  case 128:
   FUNC_2(VAR_1->sc_ifp, "lost carrier on AUI port, "
       "switching to UTP port\n");
   FUNC_4(VAR_1);
  }
 }
}
