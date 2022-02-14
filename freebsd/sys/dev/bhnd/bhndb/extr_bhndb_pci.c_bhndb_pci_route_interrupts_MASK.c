
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhndb_pci_softc {int pci_quirks; int parent; } ;
struct bhnd_core_info {int core_idx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhndb_pci_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bhndb_pci_softc*) ;
 int VAR_4 ;
 struct bhnd_core_info FUNC_2 (int ) ;
 int FUNC_3 (struct bhndb_pci_softc*,int ) ;
 struct bhndb_pci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, device_t VAR_6)
{
 struct bhndb_pci_softc *VAR_7;
 struct bhnd_core_info VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_7 = FUNC_4(VAR_5);

 if (VAR_7->pci_quirks & VAR_1)
  return (FUNC_3(VAR_7, VAR_6));

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8.core_idx > VAR_2) {

  FUNC_5(VAR_5, "cannot route interrupts to high core "
      "index %u\n", VAR_8.core_idx);
  return (VAR_4);
 }

 FUNC_0(VAR_7);

 VAR_9 = (1<<VAR_8.core_idx) << VAR_3;
 VAR_10 = FUNC_6(VAR_7->parent, VAR_0, 4);
 VAR_10 |= VAR_9;
 FUNC_7(VAR_7->parent, VAR_0, VAR_10, 4);

 FUNC_1(VAR_7);

 return (0);
}
