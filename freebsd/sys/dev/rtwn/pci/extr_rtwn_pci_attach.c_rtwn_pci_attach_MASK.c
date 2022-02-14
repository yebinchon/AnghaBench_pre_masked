
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_name; } ;
struct rtwn_softc {int sc_mtx; int sc_dev; struct ieee80211com sc_ic; } ;
struct rtwn_pci_softc {int pc_ih; int * irq; int * mem; int pc_sh; int pc_st; struct rtwn_softc pc_sc; } ;
struct rtwn_pci_ident {int chip; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int,int *,int ,struct rtwn_softc*,int *) ;
 int FUNC_3 (int ) ;
 struct rtwn_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,scalar_t__,int) ;
 int FUNC_11 (int ,scalar_t__,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct rtwn_softc*) ;
 int FUNC_15 (struct rtwn_softc*) ;
 int FUNC_16 (struct rtwn_softc*,int) ;
 int FUNC_17 (struct rtwn_softc*) ;
 int FUNC_18 (struct rtwn_pci_softc*,int ) ;
 int FUNC_19 (int ) ;
 int VAR_14 ;
 struct rtwn_pci_ident* FUNC_20 (int ) ;
 int FUNC_21 (struct rtwn_softc*) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_15)
{
 const struct rtwn_pci_ident *VAR_16;
 struct rtwn_pci_softc *VAR_17 = FUNC_4(VAR_15);
 struct rtwn_softc *VAR_18 = &VAR_17->pc_sc;
 struct ieee80211com *VAR_19 = &VAR_18->sc_ic;
 uint32_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_16 = FUNC_20(VAR_15);
 if (VAR_16 == ((void*)0))
  return (VAR_1);





 VAR_23 = FUNC_9(VAR_15, VAR_8, &VAR_21);
 if (VAR_23 != 0) {
  FUNC_5(VAR_15, "PCIe capability structure not found!\n");
  return (VAR_23);
 }


 FUNC_8(VAR_15);

 VAR_24 = FUNC_0(2);
 VAR_17->mem = FUNC_1(VAR_15, VAR_13, &VAR_24,
     VAR_9);
 if (VAR_17->mem == ((void*)0)) {
  FUNC_5(VAR_15, "can't map mem space\n");
  return (VAR_0);
 }
 VAR_17->pc_st = FUNC_13(VAR_17->mem);
 VAR_17->pc_sh = FUNC_12(VAR_17->mem);


 VAR_24 = 1;
 if (FUNC_7(VAR_15, &VAR_24) == 0)
  VAR_24 = 1;
 else
  VAR_24 = 0;
 VAR_17->irq = FUNC_1(VAR_15, VAR_12, &VAR_24, VAR_9 |
     (VAR_24 != 0 ? 0 : VAR_10));
 if (VAR_17->irq == ((void*)0)) {
  FUNC_5(VAR_15, "can't map interrupt\n");
  goto detach;
 }


 VAR_20 = FUNC_10(VAR_15, VAR_21 + VAR_7, 4);
 VAR_20 &= ~VAR_6;
 FUNC_11(VAR_15, VAR_21 + VAR_7, VAR_20, 4);

 VAR_18->sc_dev = VAR_15;
 VAR_19->ic_name = FUNC_3(VAR_15);


 FUNC_21(VAR_18);
 FUNC_6(&VAR_18->sc_mtx, VAR_19->ic_name, VAR_5, VAR_4);

 FUNC_17(VAR_18);
 FUNC_18(VAR_17, VAR_16->chip);


 VAR_23 = FUNC_15(VAR_18);
 if (VAR_23 != 0) {
  FUNC_5(VAR_15,
      "could not allocate Rx buffers, error %d\n",
      VAR_23);
  goto detach;
 }
 for (VAR_22 = 0; VAR_22 < VAR_11; VAR_22++) {
  VAR_23 = FUNC_16(VAR_18, VAR_22);
  if (VAR_23 != 0) {
   FUNC_5(VAR_15,
       "could not allocate Tx buffers, error %d\n",
       VAR_23);
   goto detach;
  }
 }


 VAR_23 = FUNC_14(VAR_18);
 if (VAR_23 != 0)
  goto detach;




 VAR_23 = FUNC_2(VAR_15, VAR_17->irq, VAR_3 | VAR_2,
     ((void*)0), VAR_14, VAR_18, &VAR_17->pc_ih);
 if (VAR_23 != 0) {
  FUNC_5(VAR_15, "can't establish interrupt, error %d\n",
      VAR_23);
  goto detach;
 }

 return (0);

detach:
 FUNC_19(VAR_15);
 return (VAR_1);
}
