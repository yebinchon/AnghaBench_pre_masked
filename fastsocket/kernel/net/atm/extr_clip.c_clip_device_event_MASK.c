
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int * netdev_ops; } ;
struct TYPE_2__ {int number; } ;


 scalar_t__ VAR_0 ;



 unsigned long VAR_1 ;

 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_2 (int *,struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_9, unsigned long VAR_10,
        void *VAR_11)
{
 struct net_device *VAR_12 = VAR_11;

 if (!FUNC_3(FUNC_1(VAR_12), &VAR_8))
  return VAR_2;

 if (VAR_10 == VAR_1) {
  FUNC_2(&VAR_7, VAR_12);
  return VAR_2;
 }


 if (VAR_12->type != VAR_0 || VAR_12->netdev_ops != &VAR_6)
  return VAR_2;

 switch (VAR_10) {
 case 128:
  FUNC_4("clip_device_event NETDEV_UP\n");
  FUNC_5(VAR_5, FUNC_0(VAR_12)->number, 0);
  break;
 case 129:
  FUNC_4("clip_device_event NETDEV_DOWN\n");
  FUNC_5(VAR_4, FUNC_0(VAR_12)->number, 0);
  break;
 case 131:
 case 130:
  FUNC_4("clip_device_event NETDEV_CHANGE*\n");
  FUNC_5(VAR_3, FUNC_0(VAR_12)->number, 0);
  break;
 }
 return VAR_2;
}
