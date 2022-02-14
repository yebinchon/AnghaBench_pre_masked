
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_regwin {int dummy; } ;
struct bhndb_pci_softc {int (* set_regwin ) (int ,int ,struct bhndb_regwin const*,int ) ;int parent; int dev; } ;
typedef int device_t ;
typedef int bhnd_addr_t ;


 struct bhndb_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct bhndb_regwin const*,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, const struct bhndb_regwin *VAR_1,
    bhnd_addr_t VAR_2)
{
 struct bhndb_pci_softc *VAR_3 = FUNC_0(VAR_0);
 return (VAR_3->set_regwin(VAR_3->dev, VAR_3->parent, VAR_1, VAR_2));
}
