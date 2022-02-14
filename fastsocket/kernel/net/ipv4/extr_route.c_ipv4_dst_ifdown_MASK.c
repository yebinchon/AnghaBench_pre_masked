
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtable {struct in_device* idev; } ;
struct net_device {int dummy; } ;
struct in_device {struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct in_device*) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_0, struct net_device *VAR_1,
       int VAR_2)
{
 struct rtable *VAR_3 = (struct rtable *) VAR_0;
 struct in_device *VAR_4 = VAR_3->idev;
 if (VAR_1 != FUNC_0(VAR_1)->loopback_dev && VAR_4 && VAR_4->dev == VAR_1) {
  struct in_device *VAR_5 =
   FUNC_1(FUNC_0(VAR_1)->loopback_dev);
  if (VAR_5) {
   VAR_3->idev = VAR_5;
   FUNC_2(VAR_4);
  }
 }
}
