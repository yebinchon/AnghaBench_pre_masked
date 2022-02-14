
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 () ;
 int FUNC_3 (struct net_device*,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(__le16 *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4;
 VAR_3 = FUNC_2();
last_chance:
 if (VAR_3) {
  FUNC_4(&VAR_0);
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  FUNC_5(&VAR_0);
  FUNC_1(VAR_3);
  if (VAR_4 == 0 || VAR_3 == VAR_1.loopback_dev)
   return VAR_4;
 }
 VAR_3 = VAR_1.loopback_dev;
 FUNC_0(VAR_3);
 goto last_chance;
}
