
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
struct __fdb_entry {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,char*,size_t,int) ;
 struct net_bridge* FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, struct kobject *VAR_2,
         struct bin_attribute *VAR_3,
         char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = FUNC_2(VAR_2);
 struct net_bridge *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;


 if (VAR_5 % sizeof(struct __fdb_entry) != 0)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_4,
       VAR_6 / sizeof(struct __fdb_entry),
       VAR_5 / sizeof(struct __fdb_entry));

 if (VAR_9 > 0)
  VAR_9 *= sizeof(struct __fdb_entry);

 return VAR_9;
}
