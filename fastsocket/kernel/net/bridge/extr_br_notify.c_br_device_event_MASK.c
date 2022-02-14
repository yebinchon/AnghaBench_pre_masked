
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dev_addr; struct net_bridge_port* br_port; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int lock; TYPE_1__* dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_device*) ;
 int FUNC_1 (struct net_bridge_port*,int ) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (int ,struct net_bridge_port*) ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (struct net_bridge_port*) ;
 int FUNC_6 (struct net_bridge_port*) ;
 int FUNC_7 (struct net_bridge_port*) ;
 int FUNC_8 (struct net_bridge*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct net_bridge_port *VAR_7 = VAR_6->br_port;
 struct net_bridge *VAR_8;


 if (VAR_7 == ((void*)0))
  return VAR_1;

 VAR_8 = VAR_7->br;

 switch (VAR_4) {
 case 132:
  FUNC_9(VAR_8->dev, FUNC_4(VAR_8));
  break;

 case 133:
  FUNC_12(&VAR_8->lock);
  FUNC_1(VAR_7, VAR_6->dev_addr);
  FUNC_8(VAR_8);
  FUNC_13(&VAR_8->lock);
  break;

 case 134:
  FUNC_5(VAR_7);
  break;

 case 130:
  if (FUNC_11(VAR_8->dev))
   FUNC_2(VAR_8);
  break;

 case 131:
  FUNC_12(&VAR_8->lock);
  if (VAR_8->dev->flags & VAR_0)
   FUNC_6(VAR_7);
  FUNC_13(&VAR_8->lock);
  break;

 case 128:
  if (FUNC_10(VAR_6) && (VAR_8->dev->flags & VAR_0)) {
   FUNC_12(&VAR_8->lock);
   FUNC_7(VAR_7);
   FUNC_13(&VAR_8->lock);
  }
  break;

 case 129:
  FUNC_0(VAR_8, VAR_6);
  break;
 }


 if (VAR_4 == 133 || VAR_4 == 128 ||
     VAR_4 == 134 || VAR_4 == 131)
  FUNC_3(VAR_2, VAR_7);

 return VAR_1;
}
