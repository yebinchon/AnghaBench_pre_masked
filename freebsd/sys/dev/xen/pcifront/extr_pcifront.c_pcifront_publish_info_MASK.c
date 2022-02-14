
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct pcifront_device {int gnt_ref; TYPE_1__* xdev; int evtchn; int sh_info; } ;
struct TYPE_5__ {int nodename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xenbus_transaction*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct xenbus_transaction*,int ,char*,char*,...) ;
 int FUNC_7 (TYPE_1__*,struct xenbus_transaction*,int ) ;
 int FUNC_8 (struct xenbus_transaction*,int) ;
 struct xenbus_transaction* FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct pcifront_device *VAR_3)
{
 int VAR_4 = 0;
 struct xenbus_transaction *VAR_5;

 VAR_4 = FUNC_5(VAR_3->xdev, FUNC_2(VAR_3->sh_info));
 if (VAR_4 < 0) {
  FUNC_1("error granting access to ring page\n");
  goto out;
 }

 VAR_3->gnt_ref = VAR_4;

 VAR_4 = FUNC_3(VAR_3->xdev, &VAR_3->evtchn);
 if (VAR_4)
  goto out;

 do_publish:
 VAR_5 = FUNC_9();
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_3->xdev, VAR_4,
       "Error writing configuration for backend "
       "(start transaction)");
  goto out;
 }

 VAR_4 = FUNC_6(VAR_5, VAR_3->xdev->nodename,
      "pci-op-ref", "%u", VAR_3->gnt_ref);
 if (!VAR_4)
  VAR_4 = FUNC_6(VAR_5, VAR_3->xdev->nodename,
       "event-channel", "%u", VAR_3->evtchn);
 if (!VAR_4)
  VAR_4 = FUNC_6(VAR_5, VAR_3->xdev->nodename,
       "magic", VAR_1);
 if (!VAR_4)
  VAR_4 = FUNC_7(VAR_3->xdev, VAR_5,
          VAR_2);

 if (VAR_4) {
  FUNC_8(VAR_5, 1);
  FUNC_4(VAR_3->xdev, VAR_4,
       "Error writing configuration for backend");
  goto out;
 } else {
  VAR_4 = FUNC_8(VAR_5, 0);
  if (VAR_4 == -VAR_0)
   goto do_publish;
  else if (VAR_4) {
   FUNC_4(VAR_3->xdev, VAR_4,
        "Error completing transaction for backend");
   goto out;
  }
 }

 out:
 return VAR_4;
}
