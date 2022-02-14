
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct resource {int dummy; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_4__ core; } ;
struct bhndb_regwin {scalar_t__ win_offset; TYPE_5__ d; } ;
struct TYPE_8__ {TYPE_2__* bus_res; } ;
struct bhndb_pci_softc {int dev; TYPE_3__ bhndb; int pci_devclass; } ;
typedef scalar_t__ bus_size_t ;
struct TYPE_7__ {int res; TYPE_1__* cfg; } ;
struct TYPE_6__ {int register_windows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct resource* FUNC_1 (int ,struct bhndb_regwin const*) ;
 struct bhndb_regwin* FUNC_2 (int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bhndb_pci_softc *VAR_2, bus_size_t VAR_3,
    bus_size_t VAR_4, struct resource **VAR_5, bus_size_t *VAR_6)
{
 const struct bhndb_regwin *VAR_7;
 struct resource *VAR_8;


 VAR_7 = FUNC_2(VAR_2->bhndb.bus_res->cfg->register_windows,
     VAR_2->pci_devclass, 0, VAR_0, 0, 0, VAR_3, VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_2->dev, "missing PCI core register window\n");
  return (VAR_1);
 }


 VAR_8 = FUNC_1(VAR_2->bhndb.bus_res->res, VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_2->dev, "missing PCI core register resource\n");
  return (VAR_1);
 }

 FUNC_0(VAR_3 >= VAR_7->d.core.offset, ("offset %#jx outside of "
     "register window", (uintmax_t)VAR_3));

 *VAR_5 = VAR_8;
 *VAR_6 = VAR_7->win_offset + (VAR_3 - VAR_7->d.core.offset);

 return (0);
}
