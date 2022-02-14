
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
 int FUNC_1 (struct resource*,scalar_t__,int ) ;
 int FUNC_2 (struct resource*,scalar_t__,int ) ;
 int FUNC_3 (struct resource*,scalar_t__,int ) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static void
FUNC_5(struct bhndb_pci_softc *VAR_0, bus_size_t VAR_1,
    uint32_t VAR_2, u_int VAR_3)
{
 struct resource *VAR_4;
 bus_size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3, &VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_4("no PCI register window mapping %#jx+%#x: %d",
      (uintmax_t)VAR_1, VAR_3, VAR_6);
 }

 switch (VAR_3) {
 case 1:
  FUNC_1(VAR_4, VAR_5, VAR_2);
  break;
 case 2:
  FUNC_2(VAR_4, VAR_5, VAR_2);
  break;
 case 4:
  FUNC_3(VAR_4, VAR_5, VAR_2);
  break;
 default:
  FUNC_4("invalid width: %u", VAR_3);
 }
}
