
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; int bus; int slot; int func; int dev; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const struct pci_devinfo *VAR_0)
{
 const char *VAR_1;
 device_t VAR_2;

 VAR_2 = VAR_0->cfg.dev;
 FUNC_2("pci%d:%d:%d:%d", VAR_0->cfg.domain, VAR_0->cfg.bus,
     VAR_0->cfg.slot, VAR_0->cfg.func);
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 != ((void*)0))
  FUNC_2(" (%s%d)", VAR_1, FUNC_1(VAR_2));
}
