
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {int ndev; TYPE_1__* xdev; int unit; } ;
typedef int device_t ;
typedef int devclass_t ;
struct TYPE_2__ {char* nodename; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct pcifront_device*) ;
 int FUNC_6 (struct pcifront_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_11(struct pcifront_device *VAR_3)
{
 device_t VAR_4;
 devclass_t VAR_5;


 if (!(VAR_5 = FUNC_2("nexus")) ||
  !(VAR_4 = FUNC_3(VAR_5, 0))) {
  FUNC_1("could not find nexus0!\n");
  return -1;
 }


 VAR_3->ndev = FUNC_0(VAR_4, 0, "xpcife", VAR_3->unit);
 if (!VAR_3->ndev) {
  FUNC_1("could not create xpcife%d!\n", VAR_3->unit);
  return -VAR_0;
 }
 FUNC_6(VAR_3);
 FUNC_5(VAR_3->ndev, VAR_3);


 FUNC_10(VAR_3->xdev, ((void*)0), VAR_2);

 FUNC_9("pcifront: connected to %s\n", VAR_3->xdev->nodename);

 FUNC_7(&VAR_1);
 FUNC_4(VAR_3->ndev);
 FUNC_8(&VAR_1);

 return 0;
}
