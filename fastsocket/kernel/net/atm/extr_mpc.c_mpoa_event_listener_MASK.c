
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int * name; } ;
struct mpoa_client {int * mpoad_vcc; struct net_device* dev; int dev_num; } ;
struct lec_priv {int lane_version; int itfnum; TYPE_1__* lane2_ops; } ;
struct TYPE_2__ {int associate_indicator; } ;
 int VAR_0 ;
 struct mpoa_client* FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int *) ;
 struct mpoa_client* FUNC_5 (int ) ;
 struct mpoa_client* FUNC_6 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 struct lec_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct mpoa_client*,struct net_device*) ;
 int FUNC_11 (struct mpoa_client*) ;
 scalar_t__ FUNC_12 (int *,char*,int) ;

__attribute__((used)) static int FUNC_13(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6;
 struct mpoa_client *VAR_7;
 struct lec_priv *VAR_8;

 VAR_6 = (struct net_device *)VAR_5;

 if (!FUNC_7(FUNC_2(VAR_6), &VAR_1))
  return VAR_0;

 if (VAR_6->name == ((void*)0) || FUNC_12(VAR_6->name, "lec", 3))
  return VAR_0;

 switch (VAR_4) {
 case 130:
  VAR_8 = FUNC_8(VAR_6);
  if (VAR_8->lane_version < 2)
   break;
  VAR_8->lane2_ops->associate_indicator = VAR_2;
  VAR_7 = FUNC_5(VAR_8->itfnum);
  if (VAR_7 == ((void*)0)) {
   FUNC_4("mpoa: mpoa_event_listener: allocating new mpc for %s\n",
          VAR_6->name);
   VAR_7 = FUNC_0();
   if (VAR_7 == ((void*)0)) {
    FUNC_9("mpoa: mpoa_event_listener: no new mpc");
    break;
   }
  }
  VAR_7->dev_num = VAR_8->itfnum;
  VAR_7->dev = VAR_6;
  FUNC_1(VAR_6);
  FUNC_4("mpoa: (%s) was initialized\n", VAR_6->name);
  break;
 case 129:

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 == ((void*)0))
   break;
  FUNC_4("mpoa: device (%s) was deallocated\n", VAR_6->name);
  FUNC_11(VAR_7);
  FUNC_3(VAR_7->dev);
  VAR_7->dev = ((void*)0);
  break;
 case 128:

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 == ((void*)0))
   break;
  if (VAR_7->mpoad_vcc != ((void*)0)) {
   FUNC_10(VAR_7, VAR_6);
  }
  break;
 case 133:




  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 == ((void*)0))
   break;
  if (VAR_7->mpoad_vcc != ((void*)0)) {
   FUNC_11(VAR_7);
  }
  break;
 case 131:
 case 136:
 case 134:
 case 135:
 case 132:
  break;
 default:
  break;
 }

 return VAR_0;
}
