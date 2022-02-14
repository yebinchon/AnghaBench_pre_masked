
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ sme_state; int event_lock; int event_list; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int event_work; } ;
struct TYPE_2__ {size_t req_ie_len; size_t resp_ie_len; struct cfg80211_bss* bss; int * resp_ie; int * req_ie; } ;
struct cfg80211_event {int list; TYPE_1__ rm; int type; } ;
struct cfg80211_bss {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct cfg80211_bss*) ;
 int VAR_2 ;
 struct cfg80211_event* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (void*,int const*,size_t) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;

void FUNC_10(struct net_device *VAR_3,
    struct cfg80211_bss *VAR_4, const u8 *VAR_5,
    size_t VAR_6, const u8 *VAR_7,
    size_t VAR_8, gfp_t VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_3->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_11 = FUNC_9(VAR_10->wiphy);
 struct cfg80211_event *VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_10->sme_state != VAR_0);

 if (FUNC_1(!VAR_4))
  return;

 VAR_12 = FUNC_3(sizeof(*VAR_12) + VAR_6 + VAR_8, VAR_9);
 if (!VAR_12) {
  FUNC_2(VAR_10->wiphy, VAR_4);
  return;
 }

 VAR_12->type = VAR_1;
 VAR_12->rm.req_ie = ((u8 *)VAR_12) + sizeof(*VAR_12);
 VAR_12->rm.req_ie_len = VAR_6;
 FUNC_5((void *)VAR_12->rm.req_ie, VAR_5, VAR_6);
 VAR_12->rm.resp_ie = ((u8 *)VAR_12) + sizeof(*VAR_12) + VAR_6;
 VAR_12->rm.resp_ie_len = VAR_8;
 FUNC_5((void *)VAR_12->rm.resp_ie, VAR_7, VAR_8);
 VAR_12->rm.bss = VAR_4;

 FUNC_7(&VAR_10->event_lock, VAR_13);
 FUNC_4(&VAR_12->list, &VAR_10->event_list);
 FUNC_8(&VAR_10->event_lock, VAR_13);
 FUNC_6(VAR_2, &VAR_11->event_work);
}
