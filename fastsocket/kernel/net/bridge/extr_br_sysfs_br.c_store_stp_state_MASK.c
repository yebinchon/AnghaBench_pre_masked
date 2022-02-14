
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
 size_t VAR_2 ;
 int FUNC_0 (struct net_bridge*,unsigned long) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (char const*,char**,int ) ;
 struct net_bridge* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
          struct device_attribute *VAR_4, const char *VAR_5,
          size_t VAR_6)
{
 struct net_bridge *VAR_7 = FUNC_6(VAR_3);
 char *VAR_8;
 unsigned long VAR_9;

 if (!FUNC_1(VAR_0))
  return -VAR_2;

 VAR_9 = FUNC_5(VAR_5, &VAR_8, 0);
 if (VAR_8 == VAR_5)
  return -VAR_1;

 if (!FUNC_3())
  return FUNC_2();
 FUNC_0(VAR_7, VAR_9);
 FUNC_4();

 return VAR_6;
}
