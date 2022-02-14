
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct resource {int dummy; } ;
struct bhndb_pci_probe {int dev; } ;
typedef int bus_size_t ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhndb_pci_probe*,int ,int ,int,struct resource**,int *) ;
 int FUNC_1 (struct resource*,int ) ;
 int FUNC_2 (struct resource*,int ) ;
 int FUNC_3 (struct resource*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static uint32_t
FUNC_6(struct bhndb_pci_probe *VAR_1, bhnd_addr_t VAR_2,
    bhnd_size_t VAR_3, u_int VAR_4)
{
 struct resource *VAR_5;
 bus_size_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5,
     &VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_1->dev, "error mapping %#jx+%#jx for "
      "reading: %d\n", VAR_2, VAR_3, VAR_7);
  return (VAR_0);
 }


 switch (VAR_4) {
 case 1:
  return (FUNC_1(VAR_5, VAR_6));
 case 2:
  return (FUNC_2(VAR_5, VAR_6));
 case 4:
  return (FUNC_3(VAR_5, VAR_6));
 default:
  FUNC_5("unsupported width: %u", VAR_4);
 }
}
