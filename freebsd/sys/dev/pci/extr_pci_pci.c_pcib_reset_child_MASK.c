
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pcie_location; scalar_t__ pcie_type; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct pci_devinfo* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct pci_devinfo *VAR_6;
 int VAR_7;

 VAR_7 = 0;
 if (VAR_3 == ((void*)0) || FUNC_5(VAR_4) != VAR_3)
  goto out;
 VAR_7 = VAR_0;
 if (FUNC_3(VAR_4) != FUNC_2("pci"))
  goto out;
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6->cfg.pcie.pcie_location != 0 &&
     (VAR_6->cfg.pcie.pcie_type == VAR_1 ||
     VAR_6->cfg.pcie.pcie_type == VAR_2)) {
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_6(VAR_3,
       VAR_6->cfg.pcie.pcie_location);

   FUNC_0(VAR_4, VAR_5);
  }
 }
out:
 return (VAR_7);
}
