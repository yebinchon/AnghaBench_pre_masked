
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int sniff_max_interval; int sniff_min_interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int __u16 ;


 size_t VAR_0 ;
 struct hci_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct hci_dev *VAR_5 = FUNC_0(VAR_1);
 char *VAR_6;
 __u16 VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_6, 10);
 if (VAR_6 == VAR_3)
  return -VAR_0;

 if (VAR_7 < 0x0002 || VAR_7 > 0xFFFE || VAR_7 % 2)
  return -VAR_0;

 if (VAR_7 > VAR_5->sniff_max_interval)
  return -VAR_0;

 VAR_5->sniff_min_interval = VAR_7;

 return VAR_4;
}
