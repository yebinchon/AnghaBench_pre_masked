
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct device*) ;
 struct net_device* FUNC_3 (struct device*) ;

__attribute__((used)) static struct net_device *FUNC_4(struct device *VAR_0)
{
 struct device *VAR_1;

 VAR_1 = FUNC_0(VAR_0, "net");
 if (VAR_1 != ((void*)0)) {
  struct net_device *VAR_2;

  VAR_2 = FUNC_3(VAR_1);
  FUNC_1(VAR_2);
  FUNC_2(VAR_1);

  return VAR_2;
 }

 return ((void*)0);
}
