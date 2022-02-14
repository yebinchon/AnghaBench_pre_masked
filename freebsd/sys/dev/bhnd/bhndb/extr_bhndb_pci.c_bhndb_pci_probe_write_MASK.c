
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


 int FUNC_0 (struct bhndb_pci_probe*,int ,int ,int,struct resource**,int *) ;
 void FUNC_1 (struct resource*,int ,int ) ;
 void FUNC_2 (struct resource*,int ,int ) ;
 void FUNC_3 (struct resource*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(struct bhndb_pci_probe *VAR_0, bhnd_addr_t VAR_1,
    bhnd_size_t VAR_2, uint32_t VAR_3, u_int VAR_4)
{
 struct resource *VAR_5;
 bus_size_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, &VAR_5,
     &VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_0->dev, "error mapping %#jx+%#jx for "
      "writing: %d\n", VAR_1, VAR_2, VAR_7);
  return;
 }


 switch (VAR_4) {
 case 1:
  return (FUNC_1(VAR_5, VAR_6, VAR_3));
 case 2:
  return (FUNC_2(VAR_5, VAR_6, VAR_3));
 case 4:
  return (FUNC_3(VAR_5, VAR_6, VAR_3));
 default:
  FUNC_5("unsupported width: %u", VAR_4);
 }
}
