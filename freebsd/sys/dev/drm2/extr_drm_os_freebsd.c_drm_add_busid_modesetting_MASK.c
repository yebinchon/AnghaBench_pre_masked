
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct drm_device {int pci_domain; int pci_bus; int pci_slot; int pci_func; int modesetting; TYPE_1__* driver; int busid_str; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,int *) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,int ,int *) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ,int,char*,int,int,int,int) ;

int
FUNC_4(struct drm_device *VAR_4, struct sysctl_ctx_list *VAR_5,
    struct sysctl_oid *VAR_6)
{
 struct sysctl_oid *VAR_7;

 FUNC_3(VAR_4->busid_str, sizeof(VAR_4->busid_str),
      "pci:%04x:%02x:%02x.%d", VAR_4->pci_domain, VAR_4->pci_bus,
      VAR_4->pci_slot, VAR_4->pci_func);
 VAR_7 = FUNC_1(VAR_5, FUNC_2(VAR_6), VAR_3, "busid",
     VAR_0, VAR_4->busid_str, 0, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (-VAR_2);
 VAR_4->modesetting = (VAR_4->driver->driver_features & VAR_1) != 0;
 VAR_7 = FUNC_0(VAR_5, FUNC_2(VAR_6), VAR_3,
     "modesetting", VAR_0, &VAR_4->modesetting, 0, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (-VAR_2);

 return (0);
}
