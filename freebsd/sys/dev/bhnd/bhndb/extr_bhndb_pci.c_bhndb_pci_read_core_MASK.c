
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint32_t ;
typedef int u_int ;
struct resource {int dummy; } ;
struct bhndb_pci_softc {int dummy; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (struct bhndb_pci_softc*,scalar_t__,int,struct resource**,scalar_t__*) ;
 int FUNC_1 (struct resource*,scalar_t__) ;
 int FUNC_2 (struct resource*,scalar_t__) ;
 int FUNC_3 (struct resource*,scalar_t__) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static uint32_t
FUNC_5(struct bhndb_pci_softc *VAR_0, bus_size_t VAR_1, u_int VAR_2)
{
 struct resource *VAR_3;
 bus_size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_4("no PCI register window mapping %#jx+%#x: %d",
      (uintmax_t)VAR_1, VAR_2, VAR_5);
 }

 switch (VAR_2) {
 case 1:
  return (FUNC_1(VAR_3, VAR_4));
 case 2:
  return (FUNC_2(VAR_3, VAR_4));
 case 4:
  return (FUNC_3(VAR_3, VAR_4));
 default:
  FUNC_4("invalid width: %u", VAR_2);
 }
}
