
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net*,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct net_device*) ;
 int FUNC_3 (int *,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct net *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_3) {
 case 129:
  FUNC_2(&VAR_1, VAR_5);
  FUNC_1(0, VAR_6, 0);
  break;
 case 128:
  FUNC_3(&VAR_1, VAR_5);
  FUNC_1(0, VAR_6, 0);
  break;
 default:
  break;
 }

 return VAR_0;
}
