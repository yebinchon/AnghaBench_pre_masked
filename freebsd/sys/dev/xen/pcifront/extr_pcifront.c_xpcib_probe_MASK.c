
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpcib_softc {struct pcifront_device* pdev; int bus; int domain; } ;
struct pcifront_device {TYPE_1__* xdev; } ;
typedef int device_t ;
struct TYPE_2__ {int otherend_id; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct xpcib_softc *VAR_1 = (struct xpcib_softc *)FUNC_3(VAR_0);
 struct pcifront_device *VAR_2 = (struct pcifront_device *)FUNC_1(FUNC_2(VAR_0));

 FUNC_0("xpcib probe (bus=%d)\n", FUNC_4(VAR_0));

 VAR_1->domain = VAR_2->xdev->otherend_id;
 VAR_1->bus = FUNC_4(VAR_0);
 VAR_1->pdev = VAR_2;

 return 0;
}
