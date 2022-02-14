
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (int ) ;
 struct net_bridge* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct net_bridge *VAR_6 = FUNC_2(VAR_2);

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 FUNC_0(VAR_6);
 return VAR_5;
}
