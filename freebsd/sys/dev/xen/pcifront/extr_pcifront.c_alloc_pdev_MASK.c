
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {struct pcifront_device* data; int nodename; } ;
struct xen_pci_sharedinfo {scalar_t__ flags; } ;
struct pcifront_device {int unit; int ref_cnt; int gnt_ref; int evtchn; int sh_info_lock; struct xen_pci_sharedinfo* sh_info; struct xenbus_device* xdev; } ;


 int FUNC_0 (char*,struct pcifront_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,struct pcifront_device*,int ) ;
 int FUNC_2 (struct pcifront_device*,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,char*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (struct xenbus_device*,int,char*) ;

__attribute__((used)) static struct pcifront_device *
FUNC_7(struct xenbus_device *VAR_10)
{
 struct pcifront_device *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_5(VAR_10->nodename, "device/pci/%d", &VAR_13);
 if (VAR_12 != 1) {
  if (VAR_12 == 0)
   VAR_12 = -VAR_0;
  FUNC_6(VAR_11->xdev, VAR_12, "Error scanning pci device instance number");
  goto out;
 }

 VAR_11 = (struct pcifront_device *)FUNC_3(sizeof(struct pcifront_device), VAR_5, VAR_6);
 if (VAR_11 == ((void*)0)) {
  VAR_12 = -VAR_1;
  FUNC_6(VAR_10, VAR_12, "Error allocating pcifront_device struct");
  goto out;
 }
 VAR_11->unit = VAR_13;
 VAR_11->xdev = VAR_10;
 VAR_11->ref_cnt = 1;

 VAR_11->sh_info = (struct xen_pci_sharedinfo *)FUNC_3(VAR_7, VAR_5, VAR_6);
 if (VAR_11->sh_info == ((void*)0)) {
  FUNC_2(VAR_11, VAR_5);
  VAR_11 = ((void*)0);
  VAR_12 = -VAR_1;
  FUNC_6(VAR_10, VAR_12, "Error allocating sh_info struct");
  goto out;
 }
 VAR_11->sh_info->flags = 0;

 VAR_10->data = VAR_11;

 FUNC_4(&VAR_11->sh_info_lock, "info_lock", "pci shared dev info lock", VAR_4);

 VAR_11->evtchn = VAR_2;
 VAR_11->gnt_ref = VAR_3;

 FUNC_1(&VAR_9, VAR_11, VAR_8);

 FUNC_0("Allocated pdev @ 0x%p (unit=%d)\n", VAR_11, VAR_13);

 out:
 return VAR_11;
}
