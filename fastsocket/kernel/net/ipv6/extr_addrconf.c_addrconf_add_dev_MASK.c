
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static struct inet6_dev *FUNC_4(struct net_device *VAR_0)
{
 struct inet6_dev *VAR_1;

 FUNC_0();

 if ((VAR_1 = FUNC_3(VAR_0)) == ((void*)0))
  return ((void*)0);


 FUNC_2(VAR_0);


 FUNC_1(VAR_0);
 return VAR_1;
}
