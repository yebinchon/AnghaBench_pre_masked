
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_rx_data {TYPE_3__* skb; int sta; TYPE_2__* sdata; } ;
struct TYPE_9__ {scalar_t__ category; } ;
struct TYPE_10__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {TYPE_5__ u; } ;
struct ieee80211_hdr {int frame_control; int addr4; int addr3; int addr1; } ;
typedef int ieee80211_rx_result ;
struct TYPE_8__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_6__ {char* addr; } ;
struct TYPE_7__ {TYPE_1__ vif; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static ieee80211_rx_result FUNC_13(struct ieee80211_rx_data *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_6->skb->data;
 char *VAR_8 = VAR_6->sdata->vif.addr;

 if (FUNC_7(VAR_7->frame_control)) {
  if (FUNC_11(VAR_7->addr1)) {
   if (FUNC_3(VAR_7->frame_control) ||
       !FUNC_2(VAR_7->frame_control))
    return VAR_3;
   if (FUNC_0(VAR_7->addr3, VAR_8))
    return VAR_3;
  } else {
   if (!FUNC_1(VAR_7->frame_control))
    return VAR_3;
   if (FUNC_0(VAR_7->addr4, VAR_8))
    return VAR_3;
  }
 }





 if (!VAR_6->sta || FUNC_12(VAR_6->sta) != VAR_1) {
  struct ieee80211_mgmt *VAR_9;

  if (!FUNC_8(VAR_7->frame_control))
   return VAR_3;

  if (FUNC_4(VAR_7->frame_control)) {
   u8 VAR_10;


   if (VAR_6->skb->len < VAR_0)
    return VAR_3;

   VAR_9 = (struct ieee80211_mgmt *)VAR_7;
   VAR_10 = VAR_9->u.action.category;
   if (VAR_10 != VAR_4 &&
       VAR_10 != VAR_5)
    return VAR_3;
   return VAR_2;
  }

  if (FUNC_9(VAR_7->frame_control) ||
      FUNC_10(VAR_7->frame_control) ||
      FUNC_6(VAR_7->frame_control) ||
      FUNC_5(VAR_7->frame_control))
   return VAR_2;

  return VAR_3;
 }

 return VAR_2;
}
