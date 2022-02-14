
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_pci_softc {scalar_t__ msi_count; int parent; int dev; int * isrc; int * set_regwin; scalar_t__ pci_quirks; int pci_devclass; } ;
struct bhnd_core_info {int dummy; } ;
struct bhnd_chipid {scalar_t__ chip_type; } ;
struct bhndb_pci_probe {struct bhnd_core_info hostb_core; int * erom_class; struct bhnd_chipid cid; } ;
typedef int device_t ;
typedef int bhnd_erom_class_t ;


 int FUNC_0 (struct bhndb_pci_softc*) ;
 int FUNC_1 (struct bhndb_pci_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int ,int,int ,int ,int,int) ;
 int FUNC_3 (int ,struct bhnd_chipid*,struct bhnd_core_info*,int ,struct bhnd_core_info*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bhndb_pci_softc*) ;
 scalar_t__ FUNC_9 (struct bhndb_pci_softc*,scalar_t__*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_10 (struct bhnd_chipid*,struct bhnd_core_info*) ;
 int FUNC_11 (struct bhndb_pci_probe**,int ,int ) ;
 int FUNC_12 (struct bhndb_pci_probe*,struct bhnd_core_info**,int *) ;
 int FUNC_13 (struct bhndb_pci_probe*) ;
 int FUNC_14 (struct bhnd_core_info*) ;
 int FUNC_15 (struct bhndb_pci_softc*,struct bhndb_pci_probe*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct bhndb_pci_softc* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_7)
{
 struct bhndb_pci_softc *VAR_8;
 struct bhnd_chipid VAR_9;
 struct bhnd_core_info *VAR_10, VAR_11;
 bhnd_erom_class_t *VAR_12;
 struct bhndb_pci_probe *VAR_13;
 u_int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_8 = FUNC_20(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_8->parent = FUNC_19(VAR_7);
 VAR_8->pci_devclass = FUNC_6(VAR_7);
 VAR_8->pci_quirks = 0;
 VAR_8->set_regwin = ((void*)0);

 FUNC_1(VAR_8);

 VAR_13 = ((void*)0);
 VAR_10 = ((void*)0);


 FUNC_23(VAR_8->parent);


 if ((VAR_16 = FUNC_5(VAR_8->dev)))
  goto cleanup;


 VAR_16 = FUNC_11(&VAR_13, VAR_7, VAR_8->pci_devclass);
 if (VAR_16)
  goto cleanup;

 VAR_8->pci_quirks = FUNC_10(&VAR_13->cid,
     &VAR_13->hostb_core);


 if (VAR_13->cid.chip_type == VAR_0) {
  VAR_8->set_regwin = VAR_5;
 } else {
  VAR_8->set_regwin = VAR_6;
 }







 if ((VAR_16 = FUNC_15(VAR_8, VAR_13)))
  goto cleanup;


 if (FUNC_9(VAR_8, &VAR_8->msi_count) == 0) {

  VAR_15 = 1;

  FUNC_21(VAR_7, "Using MSI interrupts on %s\n",
      FUNC_18(VAR_8->parent));
 } else {
  VAR_8->msi_count = 0;
  VAR_15 = 0;

  FUNC_21(VAR_7, "Using INTx interrupts on %s\n",
      FUNC_18(VAR_8->parent));
 }

 VAR_8->isrc = FUNC_2(VAR_8->parent, VAR_15, 0, VAR_4, 1,
     VAR_3 | VAR_2);
 if (VAR_8->isrc == ((void*)0)) {
  FUNC_21(VAR_8->dev, "failed to allocate interrupt "
      "resource\n");
  VAR_16 = VAR_1;
  goto cleanup;
 }
 VAR_9 = VAR_13->cid;
 VAR_12 = VAR_13->erom_class;
 VAR_11 = VAR_13->hostb_core;

 VAR_16 = FUNC_12(VAR_13, &VAR_10, &VAR_14);
 if (VAR_16) {
  VAR_10 = ((void*)0);
  goto cleanup;
 }

 FUNC_13(VAR_13);
 VAR_13 = ((void*)0);


 VAR_16 = FUNC_3(VAR_7, &VAR_9, VAR_10, VAR_14, &VAR_11, VAR_12);
 if (VAR_16)
  goto cleanup;


 if ((VAR_16 = FUNC_8(VAR_8)))
  goto cleanup;


 if ((VAR_16 = FUNC_16(VAR_7)))
  goto cleanup;

 FUNC_14(VAR_10);

 return (0);

cleanup:
 FUNC_17(VAR_7);

 if (VAR_8->isrc != ((void*)0))
  FUNC_7(VAR_8->isrc);

 if (VAR_8->msi_count > 0)
  FUNC_24(VAR_8->parent);

 if (VAR_10 != ((void*)0))
  FUNC_14(VAR_10);

 if (VAR_13 != ((void*)0))
  FUNC_13(VAR_13);

 FUNC_4(VAR_8->dev);

 FUNC_22(VAR_8->parent);

 FUNC_0(VAR_8);

 return (VAR_16);
}
