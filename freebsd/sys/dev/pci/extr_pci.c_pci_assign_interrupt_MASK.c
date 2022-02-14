
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tunable_name ;
struct TYPE_2__ {scalar_t__ intpin; int domain; int bus; int slot; int intline; } ;
struct pci_devinfo {int resources; TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,int*) ;
 struct pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int *,int ,int ,int,int,int) ;
 int FUNC_6 (char*,int,char*,int,int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_3, device_t VAR_4, int VAR_5)
{
 struct pci_devinfo *VAR_6 = FUNC_3(VAR_4);
 pcicfgregs *VAR_7 = &VAR_6->cfg;
 char VAR_8[64];
 int VAR_9;


 if (VAR_7->intpin == 0)
  return;


 VAR_9 = VAR_1;
 FUNC_6(VAR_8, sizeof(VAR_8),
     "hw.pci%d.%d.%d.INT%c.irq",
     VAR_7->domain, VAR_7->bus, VAR_7->slot, VAR_7->intpin + 'A' - 1);
 if (FUNC_2(VAR_8, &VAR_9) && (VAR_9 >= 255 || VAR_9 <= 0))
  VAR_9 = VAR_1;
 if (!FUNC_1(VAR_9)) {
  if (!FUNC_1(VAR_7->intline) || VAR_5)
   VAR_9 = FUNC_0(VAR_3, VAR_4);
  if (!FUNC_1(VAR_9))
   VAR_9 = VAR_7->intline;
 }


 if (!FUNC_1(VAR_9))
  return;


 if (VAR_9 != VAR_7->intline) {
  VAR_7->intline = VAR_9;
  FUNC_4(VAR_4, VAR_0, VAR_9, 1);
 }


 FUNC_5(&VAR_6->resources, VAR_2, 0, VAR_9, VAR_9, 1);
}
