
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct xen_pci_op {int err; } ;
struct pcifront_device {int sh_info_lock; TYPE_1__* sh_info; int evtchn; } ;
typedef int evtchn_port_t ;
struct TYPE_2__ {int flags; struct xen_pci_op op; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct xen_pci_op*,struct xen_pci_op*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ,unsigned long*) ;
 scalar_t__ FUNC_10 (int ,unsigned long*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12(struct pcifront_device *VAR_4, struct xen_pci_op *VAR_5)
{
 int VAR_6 = 0;
 struct xen_pci_op *VAR_7 = &VAR_4->sh_info->op;
 evtchn_port_t VAR_8 = VAR_4->evtchn;
 time_t VAR_9;

 FUNC_5(&VAR_4->sh_info_lock);

 FUNC_4(VAR_7, VAR_5, sizeof(struct xen_pci_op));


 FUNC_11();
 FUNC_9(VAR_1, (unsigned long *)&VAR_4->sh_info->flags);
 FUNC_7(VAR_8);

 VAR_9 = VAR_3 + 2;

 FUNC_3(VAR_8);


 while (FUNC_10
        (VAR_1, (unsigned long *)&VAR_4->sh_info->flags)) {
  int VAR_10 = FUNC_0(&VAR_8, 1, 3 * VAR_2);
  if (VAR_10)
   FUNC_8("Failed HYPERVISOR_poll: err=%d", VAR_10);
  FUNC_3(VAR_8);
  if (VAR_3 > VAR_9) {
   FUNC_1("pciback not responding!!!\n");
   FUNC_2(VAR_1,
      (unsigned long *)&VAR_4->sh_info->flags);
   VAR_10 = VAR_0;
   goto out;
  }
 }

 FUNC_4(VAR_5, VAR_7, sizeof(struct xen_pci_op));

 VAR_6 = VAR_5->err;
 out:
 FUNC_6(&VAR_4->sh_info_lock);
 return VAR_6;
}
