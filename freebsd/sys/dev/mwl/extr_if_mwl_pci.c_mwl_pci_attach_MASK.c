
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_invalid; int sc_dmat; void* sc_io1h; void* sc_io1t; void* sc_io0h; void* sc_io0t; int sc_dev; } ;
struct mwl_pci_softc {int * sc_sr0; int * sc_sr1; int * sc_irq; int sc_ih; struct mwl_softc sc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (struct mwl_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int,int *,int ,struct mwl_softc*,int *) ;
 int FUNC_8 (int ,int *,int ) ;
 struct mwl_pci_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ,struct mwl_softc*) ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 void* FUNC_14 (int *) ;
 void* FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_14)
{
 struct mwl_pci_softc *VAR_15 = FUNC_9(VAR_14);
 struct mwl_softc *VAR_16 = &VAR_15->sc_sc;
 int VAR_17, VAR_18 = VAR_5;

 VAR_16->sc_dev = VAR_14;

 FUNC_12(VAR_14);




 VAR_17 = VAR_0;
 VAR_15->sc_sr0 = FUNC_2(VAR_14, VAR_12, &VAR_17,
         VAR_9);
 if (VAR_15->sc_sr0 == ((void*)0)) {
  FUNC_10(VAR_14, "cannot map BAR0 register space\n");
  goto bad;
 }
 VAR_17 = VAR_1;
 VAR_15->sc_sr1 = FUNC_2(VAR_14, VAR_12, &VAR_17,
         VAR_9);
 if (VAR_15->sc_sr1 == ((void*)0)) {
  FUNC_10(VAR_14, "cannot map BAR1 register space\n");
  goto bad1;
 }
 VAR_16->sc_invalid = 1;




 VAR_17 = 0;
 VAR_15->sc_irq = FUNC_2(VAR_14, VAR_11, &VAR_17,
          VAR_10|VAR_9);
 if (VAR_15->sc_irq == ((void*)0)) {
  FUNC_10(VAR_14, "could not map interrupt\n");
  goto bad2;
 }
 if (FUNC_7(VAR_14, VAR_15->sc_irq,
      VAR_7 | VAR_6,
      ((void*)0), VAR_13, VAR_16, &VAR_15->sc_ih)) {
  FUNC_10(VAR_14, "could not establish interrupt\n");
  goto bad3;
 }




 if (FUNC_3(FUNC_5(VAR_14),
          1, 0,
          VAR_3,
          VAR_2,
          ((void*)0), ((void*)0),
          VAR_4,
          VAR_8,
          VAR_4,
          0,
          ((void*)0),
          ((void*)0),
          &VAR_16->sc_dmat)) {
  FUNC_10(VAR_14, "cannot allocate DMA tag\n");
  goto bad4;
 }




 FUNC_1(VAR_16);
 VAR_16->sc_io0t = FUNC_15(VAR_15->sc_sr0);
 VAR_16->sc_io0h = FUNC_14(VAR_15->sc_sr0);
 VAR_16->sc_io1t = FUNC_15(VAR_15->sc_sr1);
 VAR_16->sc_io1h = FUNC_14(VAR_15->sc_sr1);
 if (FUNC_11(FUNC_13(VAR_14), VAR_16) == 0)
  return (0);

 FUNC_0(VAR_16);
 FUNC_4(VAR_16->sc_dmat);
bad4:
 FUNC_8(VAR_14, VAR_15->sc_irq, VAR_15->sc_ih);
bad3:
 FUNC_6(VAR_14, VAR_11, 0, VAR_15->sc_irq);
bad2:
 FUNC_6(VAR_14, VAR_12, VAR_1, VAR_15->sc_sr1);
bad1:
 FUNC_6(VAR_14, VAR_12, VAR_0, VAR_15->sc_sr0);
bad:
 return (VAR_18);
}
