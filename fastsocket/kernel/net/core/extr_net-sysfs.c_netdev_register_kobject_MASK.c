
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct attribute_group const** groups; struct net_device* platform_data; int * class; } ;
struct net_device {scalar_t__ ieee80211_ptr; scalar_t__ wireless_handlers; int name; struct attribute_group** sysfs_groups; struct device dev; } ;
struct attribute_group {int dummy; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;

int FUNC_5(struct net_device *VAR_4)
{
 struct device *VAR_5 = &(VAR_4->dev);
 const struct attribute_group **VAR_6 = VAR_4->sysfs_groups;
 int VAR_7 = 0;

 VAR_5->class = &VAR_1;
 VAR_5->platform_data = VAR_4;
 VAR_5->groups = VAR_6;

 FUNC_1(VAR_5, "%s", VAR_4->name);
 if (FUNC_0(VAR_4) != &VAR_0)
  return 0;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_5);
  return VAR_7;
 }

 return VAR_7;
}
