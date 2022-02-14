
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint16_t ;
struct bhndb_pci_softc {int pci_quirks; int dev; } ;
struct bhndb_pci_probe {int erom; int hostb_core; } ;
struct bhnd_core_match {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bhnd_core_match FUNC_0 (int *) ;
 int FUNC_1 (int ,struct bhnd_core_match*,int ,int ,int ,int *,int*,int *) ;
 int FUNC_2 (struct bhndb_pci_probe*,int,scalar_t__,int) ;
 int FUNC_3 (struct bhndb_pci_probe*,int,scalar_t__,int,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct bhndb_pci_softc *VAR_8,
    struct bhndb_pci_probe *VAR_9)
{
 struct bhnd_core_match VAR_10;
 bhnd_addr_t VAR_11;
 bhnd_size_t VAR_12;
 bus_size_t VAR_13;
 uint16_t VAR_14, VAR_15;
 uint16_t VAR_16;
 int VAR_17;

 if ((VAR_8->pci_quirks & VAR_0) == 0)
  return (0);



 VAR_10 = FUNC_0(&VAR_9->hostb_core);
 VAR_17 = FUNC_1(VAR_9->erom, &VAR_10, VAR_7,
     0, 0, ((void*)0), &VAR_11, &VAR_12);
 if (VAR_17) {
  FUNC_4(VAR_8->dev, "no base address found for the PCI host "
      "bridge core: %d\n", VAR_17);
  return (VAR_17);
 }


 VAR_13 = VAR_1 + VAR_5;
 VAR_16 = FUNC_2(VAR_9, VAR_11, VAR_13, sizeof(VAR_16));
 VAR_14 = (VAR_16 & VAR_4) >> VAR_6;



 VAR_15 = (VAR_11 & VAR_2) >>
     VAR_3;
 if (VAR_14 != VAR_15) {
  VAR_16 &= ~VAR_4;
  VAR_16 |= (VAR_15 << VAR_6);
  FUNC_3(VAR_9, VAR_11, VAR_13, VAR_16,
      sizeof(VAR_16));
 }

 return (0);
}
