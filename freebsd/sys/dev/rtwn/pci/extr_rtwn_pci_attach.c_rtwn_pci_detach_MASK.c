
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_mtx; } ;
struct rtwn_pci_softc {int * mem; int * irq; int pc_ih; struct rtwn_softc pc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 struct rtwn_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rtwn_softc*) ;
 int FUNC_7 (struct rtwn_softc*) ;
 int FUNC_8 (struct rtwn_softc*) ;
 int FUNC_9 (struct rtwn_softc*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct rtwn_pci_softc *VAR_4 = FUNC_2(VAR_3);
 struct rtwn_softc *VAR_5 = &VAR_4->pc_sc;
 int VAR_6;


 FUNC_6(VAR_5);


 if (VAR_4->irq != ((void*)0)) {
  FUNC_1(VAR_3, VAR_4->irq, VAR_4->pc_ih);
  FUNC_0(VAR_3, VAR_1, FUNC_5(VAR_4->irq),
      VAR_4->irq);
  FUNC_4(VAR_3);
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_9(VAR_5, VAR_6);
 FUNC_8(VAR_5);

 if (VAR_4->mem != ((void*)0))
  FUNC_0(VAR_3, VAR_2,
      FUNC_5(VAR_4->mem), VAR_4->mem);

 FUNC_7(VAR_5);
 FUNC_3(&VAR_5->sc_mtx);

 return (0);
}
