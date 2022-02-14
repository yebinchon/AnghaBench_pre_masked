
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhndb_resources {struct bhndb_hwcfg* cfg; } ;
struct bhndb_regwin {int dummy; } ;
struct TYPE_2__ {struct bhndb_resources* bus_res; } ;
struct bhndb_pci_softc {TYPE_1__ bhndb; } ;
struct bhndb_hwcfg {int register_windows; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bhndb_regwin* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static const struct bhndb_regwin *
FUNC_1(struct bhndb_pci_softc *VAR_2)
{
 struct bhndb_resources *VAR_3;
 const struct bhndb_hwcfg *VAR_4;
 const struct bhndb_regwin *VAR_5;

 VAR_3 = VAR_2->bhndb.bus_res;
 VAR_4 = VAR_3->cfg;

 VAR_5 = FUNC_0(VAR_4->register_windows,
     VAR_1, VAR_0);

 return (VAR_5);
}
