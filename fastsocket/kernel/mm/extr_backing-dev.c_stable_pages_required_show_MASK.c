
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct backing_dev_info {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct backing_dev_info*) ;
 struct backing_dev_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct backing_dev_info *VAR_4 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3, VAR_0-1, "%d\n",
   FUNC_0(VAR_4) ? 1 : 0);
}
