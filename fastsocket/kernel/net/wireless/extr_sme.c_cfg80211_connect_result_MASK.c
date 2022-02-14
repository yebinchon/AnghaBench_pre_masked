
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
struct TYPE_2__ {void* bssid; size_t req_ie_len; size_t resp_ie_len; int status; int * resp_ie; int * req_ie; } ;
struct cfg80211_event {int list; TYPE_1__ cr; int type; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfg80211_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,int const*,size_t) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

void FUNC_8(struct net_device *VAR_4, const u8 *VAR_5,
        const u8 *VAR_6, size_t VAR_7,
        const u8 *VAR_8, size_t VAR_9,
        u16 VAR_10, gfp_t VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_13 = FUNC_7(VAR_12->wiphy);
 struct cfg80211_event *VAR_14;
 unsigned long VAR_15;

 FUNC_0(VAR_12->sme_state != VAR_0);

 VAR_14 = FUNC_1(sizeof(*VAR_14) + VAR_7 + VAR_9, VAR_11);
 if (!VAR_14)
  return;

 VAR_14->type = VAR_2;
 if (VAR_5)
  FUNC_3(VAR_14->cr.bssid, VAR_5, VAR_1);
 if (VAR_7) {
  VAR_14->cr.req_ie = ((u8 *)VAR_14) + sizeof(*VAR_14);
  VAR_14->cr.req_ie_len = VAR_7;
  FUNC_3((void *)VAR_14->cr.req_ie, VAR_6, VAR_7);
 }
 if (VAR_9) {
  VAR_14->cr.resp_ie = ((u8 *)VAR_14) + sizeof(*VAR_14) + VAR_7;
  VAR_14->cr.resp_ie_len = VAR_9;
  FUNC_3((void *)VAR_14->cr.resp_ie, VAR_8, VAR_9);
 }
 VAR_14->cr.status = VAR_10;

 FUNC_5(&VAR_12->event_lock, VAR_15);
 FUNC_2(&VAR_14->list, &VAR_12->event_list);
 FUNC_6(&VAR_12->event_lock, VAR_15);
 FUNC_4(VAR_3, &VAR_13->event_work);
}
