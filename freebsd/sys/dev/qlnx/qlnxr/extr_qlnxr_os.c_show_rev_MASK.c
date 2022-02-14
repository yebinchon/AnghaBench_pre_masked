
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_dev {TYPE_1__* cdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int vendor_id; } ;


 struct qlnxr_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
 char *VAR_2)
{
        struct qlnxr_dev *VAR_3 = FUNC_0(VAR_0);

        return FUNC_1(VAR_2, "0x%x\n", VAR_3->cdev->vendor_id);
}
