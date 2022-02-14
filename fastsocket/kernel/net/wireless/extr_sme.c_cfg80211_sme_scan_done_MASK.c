
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (struct wireless_dev*) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct wireless_dev *VAR_1 = VAR_0->ieee80211_ptr;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
