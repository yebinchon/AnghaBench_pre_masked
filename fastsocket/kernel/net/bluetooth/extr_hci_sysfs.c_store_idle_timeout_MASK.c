
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int idle_timeout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int __u32 ;


 size_t VAR_0 ;
 struct hci_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct hci_dev *VAR_5 = FUNC_0(VAR_1);
 char *VAR_6;
 __u32 VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_6, 10);
 if (VAR_6 == VAR_3)
  return -VAR_0;

 if (VAR_7 != 0 && (VAR_7 < 500 || VAR_7 > 3600000))
  return -VAR_0;

 VAR_5->idle_timeout = VAR_7;

 return VAR_4;
}
