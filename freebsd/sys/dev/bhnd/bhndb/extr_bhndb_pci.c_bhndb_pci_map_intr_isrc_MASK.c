
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_pci_softc {struct bhndb_intr_isrc* isrc; } ;
struct bhndb_intr_isrc {int dummy; } ;
typedef int device_t ;


 struct bhndb_pci_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, struct resource *VAR_1,
    struct bhndb_intr_isrc **VAR_2)
{
 struct bhndb_pci_softc *VAR_3 = FUNC_0(VAR_0);


 *VAR_2 = VAR_3->isrc;
 return (0);
}
