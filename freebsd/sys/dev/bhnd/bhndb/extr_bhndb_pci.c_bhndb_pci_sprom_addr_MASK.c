
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct bhndb_regwin {scalar_t__ win_offset; } ;
struct TYPE_4__ {TYPE_1__* bus_res; } ;
struct bhndb_pci_softc {TYPE_2__ bhndb; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_3__ {int res; } ;


 int FUNC_0 (int ,char*) ;
 struct resource* FUNC_1 (int ,struct bhndb_regwin const*) ;
 struct bhndb_regwin* FUNC_2 (struct bhndb_pci_softc*) ;
 scalar_t__ FUNC_3 (struct resource*) ;

__attribute__((used)) static bus_addr_t
FUNC_4(struct bhndb_pci_softc *VAR_0)
{
 const struct bhndb_regwin *VAR_1;
 struct resource *VAR_2;


 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1 != ((void*)0), ("requested sprom address on PCI_V2+"));


 VAR_2 = FUNC_1(VAR_0->bhndb.bus_res->res, VAR_1);
 FUNC_0(VAR_2 != ((void*)0), ("missing resource for sprom window\n"));

 return (FUNC_3(VAR_2) + VAR_1->win_offset);
}
