
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct TYPE_3__ {int pcie_location; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

bool
FUNC_7(device_t VAR_10, u_int VAR_11, bool VAR_12)
{
 struct pci_devinfo *VAR_13 = FUNC_0(VAR_10);
 uint16_t VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_17 = VAR_13->cfg.pcie.pcie_location;
 if (VAR_17 == 0)
  return (0);

 if (!(FUNC_3(VAR_10, VAR_17 + VAR_4, 4) & VAR_1))
  return (0);







 VAR_14 = FUNC_3(VAR_10, VAR_8, 2);
 FUNC_4(VAR_10, VAR_8, VAR_14 & ~(VAR_7), 2);
 if (!FUNC_6(VAR_10, VAR_11)) {
  if (!VAR_12) {
   FUNC_4(VAR_10, VAR_8, VAR_14, 2);
   return (0);
  }
  FUNC_2(&VAR_13->cfg,
      "Resetting with transactions pending after %d ms\n",
      VAR_11);







  VAR_16 = FUNC_5(VAR_10) / 1000;
  if (VAR_16 < 10)
   VAR_16 = 10;
 } else
  VAR_16 = 0;


 VAR_15 = FUNC_3(VAR_10, VAR_17 + VAR_5, 2);
 FUNC_4(VAR_10, VAR_17 + VAR_5, VAR_15 |
     VAR_2, 2);


 FUNC_1("pcieflr", (100 + VAR_16) * VAR_9, 0, VAR_0);

 if (FUNC_3(VAR_10, VAR_17 + VAR_6, 2) &
     VAR_3)
  FUNC_2(&VAR_13->cfg, "Transactions pending after FLR!\n");
 return (1);
}
