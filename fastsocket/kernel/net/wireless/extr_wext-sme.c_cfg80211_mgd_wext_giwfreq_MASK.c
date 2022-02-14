
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ieee80211_channel* channel; } ;
struct TYPE_8__ {TYPE_3__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_4__ wext; TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_5__ {struct ieee80211_channel* channel; } ;
struct TYPE_6__ {TYPE_1__ pub; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (struct wireless_dev*) ;

int FUNC_3(struct net_device *VAR_2,
         struct iw_request_info *VAR_3,
         struct iw_freq *VAR_4, char *VAR_5)
{
 struct wireless_dev *VAR_6 = VAR_2->ieee80211_ptr;
 struct ieee80211_channel *VAR_7 = ((void*)0);


 if (FUNC_0(VAR_6->iftype != VAR_1))
  return -VAR_0;

 FUNC_1(VAR_6);
 if (VAR_6->current_bss)
  VAR_7 = VAR_6->current_bss->pub.channel;
 else if (VAR_6->wext.connect.channel)
  VAR_7 = VAR_6->wext.connect.channel;
 FUNC_2(VAR_6);

 if (VAR_7) {
  VAR_4->m = VAR_7->center_freq;
  VAR_4->e = 6;
  return 0;
 }


 return -VAR_0;
}
