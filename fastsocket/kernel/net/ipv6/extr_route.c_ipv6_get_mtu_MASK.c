
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int mtu6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 int VAR_2 = VAR_0;
 struct inet6_dev *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  VAR_2 = VAR_3->cnf.mtu6;
  FUNC_1(VAR_3);
 }
 return VAR_2;
}
