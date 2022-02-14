
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; int unit; } ;
typedef int str ;
typedef int device_t ;
struct TYPE_2__ {unsigned int otherend_id; int otherend; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int,char*,...) ;
 int FUNC_7 (int *,int ,char*,char*,...) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2)
{
 struct pcifront_device *VAR_3 = (struct pcifront_device *)FUNC_3(VAR_2);
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char VAR_8[64];
 unsigned int VAR_9, VAR_10;

 FUNC_0("xpcife attach (unit=%d)\n", VAR_3->unit);

 VAR_7 = FUNC_7(((void*)0), VAR_3->xdev->otherend,
        "root_num", "%d", &VAR_5);
 if (VAR_7 != 1) {
  if (VAR_7 == 0)
   VAR_7 = -VAR_0;
  FUNC_6(VAR_3->xdev, VAR_7,
       "Error reading number of PCI roots");
  goto out;
 }


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  device_t VAR_11;

  VAR_6 = FUNC_4(VAR_8, sizeof(VAR_8), "root-%d", VAR_4);
  if (FUNC_5(VAR_6 >= (sizeof(VAR_8) - 1))) {
   VAR_7 = -VAR_1;
   goto out;
  }

  VAR_7 = FUNC_7(((void*)0), VAR_3->xdev->otherend, VAR_8,
         "%x:%x", &VAR_9, &VAR_10);
  if (VAR_7 != 2) {
   if (VAR_7 >= 0)
    VAR_7 = -VAR_0;
   FUNC_6(VAR_3->xdev, VAR_7,
        "Error reading PCI root %d", VAR_4);
   goto out;
  }
  VAR_7 = 0;
  if (VAR_9 != VAR_3->xdev->otherend_id) {
   VAR_7 = -VAR_0;
   FUNC_6(VAR_3->xdev, VAR_7,
        "Domain mismatch %d != %d", VAR_9, VAR_3->xdev->otherend_id);
   goto out;
  }

  VAR_11 = FUNC_2(VAR_2, "pcib", VAR_10);
  if (!VAR_11) {
   VAR_7 = -VAR_1;
   FUNC_6(VAR_3->xdev, VAR_7,
        "Unable to create pcib%d", VAR_10);
   goto out;
  }
 }

 out:
 return FUNC_1(VAR_2);
}
