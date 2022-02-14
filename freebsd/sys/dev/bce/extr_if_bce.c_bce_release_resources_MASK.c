
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bce_softc {int bce_flags; int bce_mtx; int * bce_ifp; int * bce_res_mem; int * bce_res_irq; int * bce_intrhand; int bce_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bce_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bce_softc*,int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct bce_softc*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct bce_softc *VAR_6)
{
 device_t VAR_7;

 FUNC_1(VAR_3);

 VAR_7 = VAR_6->bce_dev;

 FUNC_5(VAR_6);

 if (VAR_6->bce_intrhand != ((void*)0)) {
  FUNC_3(VAR_6, VAR_0, "Removing interrupt handler.\n");
  FUNC_7(VAR_7, VAR_6->bce_res_irq, VAR_6->bce_intrhand);
 }

 if (VAR_6->bce_res_irq != ((void*)0)) {
  FUNC_3(VAR_6, VAR_0, "Releasing IRQ.\n");
  FUNC_6(VAR_7, VAR_4,
      FUNC_11(VAR_6->bce_res_irq), VAR_6->bce_res_irq);
 }

 if (VAR_6->bce_flags & (VAR_2 | VAR_1)) {
  FUNC_3(VAR_6, VAR_0, "Releasing MSI/MSI-X vector.\n");
  FUNC_10(VAR_7);
 }

 if (VAR_6->bce_res_mem != ((void*)0)) {
  FUNC_3(VAR_6, VAR_0, "Releasing PCI memory.\n");
      FUNC_6(VAR_7, VAR_5, FUNC_4(0),
      VAR_6->bce_res_mem);
 }

 if (VAR_6->bce_ifp != ((void*)0)) {
  FUNC_3(VAR_6, VAR_0, "Releasing IF.\n");
  FUNC_8(VAR_6->bce_ifp);
 }

 if (FUNC_9(&VAR_6->bce_mtx))
  FUNC_0(VAR_6);

 FUNC_2(VAR_3);
}
