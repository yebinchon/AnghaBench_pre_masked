
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct arg_dev_net {struct net* net; struct net_device* dev; } ;


 int FUNC_0 (struct net*,int ,int ,struct arg_dev_net*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct arg_dev_net*) ;

void FUNC_2(struct net *VAR_1, struct net_device *VAR_2)
{
 struct arg_dev_net VAR_3 = {
  .dev = VAR_2,
  .net = VAR_1,
 };

 FUNC_0(VAR_1, VAR_0, 0, &VAR_3);
 FUNC_1(VAR_0, &VAR_3);
}
