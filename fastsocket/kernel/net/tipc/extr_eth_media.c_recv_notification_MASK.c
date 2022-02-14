
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int mtu; } ;
struct eth_bearer {TYPE_1__* bearer; struct net_device* dev; } ;
struct TYPE_2__ {int name; int mtu; } ;


 size_t VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 struct eth_bearer* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_5, unsigned long VAR_6,
        void *VAR_7)
{
 struct net_device *VAR_8 = (struct net_device *)VAR_7;
 struct eth_bearer *VAR_9 = &VAR_3[0];
 struct eth_bearer *VAR_10 = &VAR_3[VAR_0];

 if (!FUNC_1(FUNC_0(VAR_8), &VAR_4))
  return VAR_1;

 while ((VAR_9->dev != VAR_8)) {
  if (++VAR_9 == VAR_10)
   return VAR_1;
 }
 if (!VAR_9->bearer)
  return VAR_1;

 VAR_9->bearer->mtu = VAR_8->mtu;

 switch (VAR_6) {
 case 134:
  if (FUNC_2(VAR_8))
   FUNC_4(VAR_9->bearer);
  else
   FUNC_3(VAR_9->bearer->name);
  break;
 case 128:
  FUNC_4(VAR_9->bearer);
  break;
 case 130:
  FUNC_3(VAR_9->bearer->name);
  break;
 case 132:
 case 133:
  FUNC_3(VAR_9->bearer->name);
  FUNC_4(VAR_9->bearer);
  break;
 case 129:
 case 131:
  FUNC_5(VAR_9->bearer->name);
  break;
 }
 return VAR_2;
}
