
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {scalar_t__ sme_state; int event_lock; int event_list; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int event_work; } ;
struct TYPE_2__ {size_t ie_len; int reason; int * ie; } ;
struct cfg80211_event {int list; TYPE_1__ dc; int type; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cfg80211_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,int *,size_t) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

void FUNC_8(struct net_device *VAR_3, u16 VAR_4,
      u8 *VAR_5, size_t VAR_6, gfp_t VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_7(VAR_8->wiphy);
 struct cfg80211_event *VAR_10;
 unsigned long VAR_11;

 FUNC_0(VAR_8->sme_state != VAR_0);

 VAR_10 = FUNC_1(sizeof(*VAR_10) + VAR_6, VAR_7);
 if (!VAR_10)
  return;

 VAR_10->type = VAR_1;
 VAR_10->dc.ie = ((u8 *)VAR_10) + sizeof(*VAR_10);
 VAR_10->dc.ie_len = VAR_6;
 FUNC_3((void *)VAR_10->dc.ie, VAR_5, VAR_6);
 VAR_10->dc.reason = VAR_4;

 FUNC_5(&VAR_8->event_lock, VAR_11);
 FUNC_2(&VAR_10->list, &VAR_8->event_list);
 FUNC_6(&VAR_8->event_lock, VAR_11);
 FUNC_4(VAR_2, &VAR_9->event_work);
}
