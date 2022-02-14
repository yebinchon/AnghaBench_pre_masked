
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fw_ver; } ;
struct qlnxr_dev {TYPE_1__ attr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct qlnxr_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct qlnxr_dev *VAR_3 = FUNC_0(VAR_0);
 uint32_t VAR_4 = (uint32_t) VAR_3->attr.fw_ver;

 return FUNC_1(VAR_2, "%d.%d.%d\n",
         (VAR_4 >> 24) & 0xff, (VAR_4 >> 16) & 0xff,
         (VAR_4 >> 8) & 0xff);
}
