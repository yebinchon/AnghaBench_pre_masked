
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int fixed; int value; } ;
struct TYPE_2__ {int rts_threshold; } ;



int FUNC_0(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    struct iw_param *VAR_2, char *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_0->ieee80211_ptr;

 VAR_2->value = VAR_4->wiphy->rts_threshold;
 VAR_2->disabled = VAR_2->value == (u32) -1;
 VAR_2->fixed = 1;

 return 0;
}
