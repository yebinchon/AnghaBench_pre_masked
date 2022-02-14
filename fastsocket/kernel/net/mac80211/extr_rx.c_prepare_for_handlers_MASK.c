
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct TYPE_12__ {int type; int addr; } ;
struct TYPE_10__ {int remote_addr; } ;
struct TYPE_8__ {int bssid; } ;
struct TYPE_7__ {int use_4addr; } ;
struct TYPE_11__ {TYPE_4__ wds; TYPE_2__ ibss; TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_6__ vif; TYPE_5__ u; TYPE_3__* dev; } ;
struct ieee80211_rx_status {int flag; int rate_idx; int rx_flags; } ;
struct ieee80211_rx_data {int sta; struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_hdr {int addr1; int frame_control; int addr2; } ;
struct TYPE_9__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (struct ieee80211_hdr*,int ,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ieee80211_hdr*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_rx_data *VAR_4,
    struct ieee80211_hdr *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = VAR_4->sdata;
 struct sk_buff *VAR_7 = VAR_4->skb;
 struct ieee80211_rx_status *VAR_8 = FUNC_1(VAR_7);
 u8 *VAR_9 = FUNC_5(VAR_5, VAR_7->len, VAR_6->vif.type);
 int VAR_10 = FUNC_12(VAR_5->addr1);

 switch (VAR_6->vif.type) {
 case 129:
  if (!VAR_9 && !VAR_6->u.mgd.use_4addr)
   return 0;
  if (!VAR_10 &&
      !FUNC_3(VAR_6->vif.addr, VAR_5->addr1)) {
   if (!(VAR_6->dev->flags & VAR_1) ||
       VAR_6->u.mgd.use_4addr)
    return 0;
   VAR_8->rx_flags &= ~VAR_0;
  }
  break;
 case 134:
  if (!VAR_9)
   return 0;
  if (FUNC_7(VAR_5->frame_control)) {
   return 1;
  } else if (!FUNC_4(VAR_9, VAR_6->u.ibss.bssid)) {
   return 0;
  } else if (!VAR_10 &&
      !FUNC_3(VAR_6->vif.addr, VAR_5->addr1)) {
   if (!(VAR_6->dev->flags & VAR_1))
    return 0;
   VAR_8->rx_flags &= ~VAR_0;
  } else if (!VAR_4->sta) {
   int VAR_11;
   if (VAR_8->flag & (VAR_2 | VAR_3))
    VAR_11 = 0;
   else
    VAR_11 = VAR_8->rate_idx;
   FUNC_6(VAR_6, VAR_9, VAR_5->addr2,
       FUNC_0(VAR_11));
  }
  break;
 case 131:
  if (!VAR_10 &&
      !FUNC_3(VAR_6->vif.addr, VAR_5->addr1)) {
   if (!(VAR_6->dev->flags & VAR_1))
    return 0;

   VAR_8->rx_flags &= ~VAR_0;
  }
  break;
 case 132:
 case 133:
  if (!VAR_9) {
   if (!FUNC_3(VAR_6->vif.addr, VAR_5->addr1))
    return 0;
  } else if (!FUNC_4(VAR_9, VAR_6->vif.addr)) {






   if (!VAR_10 &&
       !FUNC_3(VAR_6->vif.addr, VAR_5->addr1))
    return 0;
   if (FUNC_11(VAR_5, VAR_7->len))
    return 1;
   if (!FUNC_7(VAR_5->frame_control))
    return 0;
   VAR_8->rx_flags &= ~VAR_0;
  }
  break;
 case 128:
  if (VAR_9 || !FUNC_8(VAR_5->frame_control))
   return 0;
  if (!FUNC_3(VAR_6->u.wds.remote_addr, VAR_5->addr2))
   return 0;
  break;
 case 130:
  if (!FUNC_11(VAR_5, VAR_7->len) &&
      !FUNC_9(VAR_5->frame_control) &&
      !FUNC_10(VAR_5->frame_control) &&
      !FUNC_7(VAR_5->frame_control))
   return 0;
  if (!FUNC_3(VAR_6->vif.addr, VAR_5->addr1) &&
      !VAR_10)
   VAR_8->rx_flags &= ~VAR_0;
  break;
 default:

  FUNC_2(1);
  break;
 }

 return 1;
}
