
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vpd_reg; int vpd_rocnt; TYPE_1__* vpd_ros; int vpd_cached; } ;
struct TYPE_7__ {TYPE_2__ vpd; } ;
struct pci_devinfo {TYPE_3__ cfg; } ;
typedef TYPE_3__ pcicfgregs ;
typedef int device_t ;
struct TYPE_5__ {char* value; int keyword; } ;


 int ENXIO ;
 struct pci_devinfo* device_get_ivars (int ) ;
 int device_get_parent (int ) ;
 scalar_t__ memcmp (char const*,int ,int) ;
 int pci_read_vpd (int ,TYPE_3__*) ;

int
pci_get_vpd_readonly_method(device_t dev, device_t child, const char *kw,
 const char **vptr)
{
 struct pci_devinfo *dinfo = device_get_ivars(child);
 pcicfgregs *cfg = &dinfo->cfg;
 int i;

 if (!cfg->vpd.vpd_cached && cfg->vpd.vpd_reg != 0)
  pci_read_vpd(device_get_parent(dev), cfg);

 for (i = 0; i < cfg->vpd.vpd_rocnt; i++)
  if (memcmp(kw, cfg->vpd.vpd_ros[i].keyword,
      sizeof(cfg->vpd.vpd_ros[i].keyword)) == 0) {
   *vptr = cfg->vpd.vpd_ros[i].value;
   return (0);
  }

 *vptr = ((void*)0);
 return (ENXIO);
}
