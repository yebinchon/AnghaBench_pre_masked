
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int sc_invalid; int * sc_mem_res; int * sc_irq_res; int sc_irq_handle; int sc_pci_subdid; int sc_pci_subvid; int sc_pci_revid; int sc_pci_did; scalar_t__ sc_irq_rid; int sc_mem_bh; int sc_mem_bt; scalar_t__ sc_mem_rid; int sc_dev; } ;
struct bwi_pci_softc {struct bwi_softc sc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int ,struct bwi_softc*,int *) ;
 int FUNC_3 (struct bwi_softc*) ;
 int VAR_9 ;
 struct bwi_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_10)
{
 struct bwi_pci_softc *VAR_11 = FUNC_4(VAR_10);
 struct bwi_softc *VAR_12 = &VAR_11->sc_sc;
 int VAR_13 = VAR_2;

 VAR_12->sc_dev = VAR_10;




 FUNC_6(VAR_10);




 VAR_12->sc_mem_rid = VAR_1;
 VAR_12->sc_mem_res = FUNC_0(VAR_10, VAR_8,
  &VAR_12->sc_mem_rid, VAR_5);
 if (VAR_12->sc_mem_res == ((void*)0)) {
  FUNC_5(VAR_10, "cannot map register space\n");
  goto bad;
 }
 VAR_12->sc_mem_bt = FUNC_12(VAR_12->sc_mem_res);
 VAR_12->sc_mem_bh = FUNC_11(VAR_12->sc_mem_res);




 VAR_12->sc_invalid = 1;




 VAR_12->sc_irq_rid = 0;
 VAR_12->sc_irq_res = FUNC_0(VAR_10, VAR_7,
      &VAR_12->sc_irq_rid,
      VAR_6|VAR_5);
 if (VAR_12->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_10, "could not map interrupt\n");
  goto bad1;
 }


 VAR_12->sc_pci_did = FUNC_7(VAR_10);
 VAR_12->sc_pci_revid = FUNC_8(VAR_10);
 VAR_12->sc_pci_subvid = FUNC_10(VAR_10);
 VAR_12->sc_pci_subdid = FUNC_9(VAR_10);

 if ((VAR_13 = FUNC_3(VAR_12)) != 0)
  goto bad2;

 if (FUNC_2(VAR_10, VAR_12->sc_irq_res,
      VAR_4 | VAR_3,
      ((void*)0), VAR_9, VAR_12, &VAR_12->sc_irq_handle)) {
  FUNC_5(VAR_10, "could not establish interrupt\n");
  goto bad2;
 }
 return (0);

bad2:
 FUNC_1(VAR_10, VAR_7, 0, VAR_12->sc_irq_res);
bad1:
 FUNC_1(VAR_10, VAR_8, VAR_0, VAR_12->sc_mem_res);
bad:
 return (VAR_13);
}
