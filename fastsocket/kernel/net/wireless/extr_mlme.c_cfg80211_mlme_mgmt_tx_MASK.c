
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wireless_dev {size_t iftype; TYPE_7__* current_bss; TYPE_3__* wiphy; } ;
struct TYPE_11__ {scalar_t__ category; } ;
struct TYPE_12__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {int sa; int bssid; int da; TYPE_5__ u; int frame_control; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_13__ {int bssid; } ;
struct TYPE_14__ {TYPE_6__ pub; } ;
struct TYPE_10__ {TYPE_2__* mgmt_stypes; } ;
struct TYPE_9__ {int tx; } ;
struct TYPE_8__ {int mgmt_tx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct wireless_dev*,struct ieee80211_channel*,int,unsigned int,int const*,size_t,int,int,int *) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (struct wireless_dev*) ;

int FUNC_9(struct cfg80211_registered_device *VAR_5,
     struct wireless_dev *VAR_6,
     struct ieee80211_channel *VAR_7, bool VAR_8,
     unsigned int VAR_9, const u8 *VAR_10, size_t VAR_11,
     bool VAR_12, bool VAR_13, u64 *VAR_14)
{
 const struct ieee80211_mgmt *VAR_15;
 u16 VAR_16;

 if (!VAR_6->wiphy->mgmt_stypes)
  return -VAR_2;

 if (!VAR_5->ops->mgmt_tx)
  return -VAR_2;

 if (VAR_11 < 24 + 1)
  return -VAR_0;

 VAR_15 = (const struct ieee80211_mgmt *) VAR_10;

 if (!FUNC_3(VAR_15->frame_control))
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_15->frame_control) & VAR_3;
 if (!(VAR_6->wiphy->mgmt_stypes[VAR_6->iftype].tx & FUNC_0(VAR_16 >> 4)))
  return -VAR_0;

 if (FUNC_2(VAR_15->frame_control) &&
     VAR_15->u.action.category != VAR_4) {
  int VAR_17 = 0;

  FUNC_7(VAR_6);

  switch (VAR_6->iftype) {
  case 135:
  case 128:
  case 131:
   if (!VAR_6->current_bss) {
    VAR_17 = -VAR_1;
    break;
   }

   if (!FUNC_1(VAR_6->current_bss->pub.bssid,
           VAR_15->bssid)) {
    VAR_17 = -VAR_1;
    break;
   }





   if (VAR_6->iftype == 135)
    break;


   if (!FUNC_1(VAR_6->current_bss->pub.bssid,
           VAR_15->da)) {
    VAR_17 = -VAR_1;
    break;
   }
   break;
  case 134:
  case 129:
  case 133:
   if (!FUNC_1(VAR_15->bssid, FUNC_6(VAR_6)))
    VAR_17 = -VAR_0;
   break;
  case 132:
   if (!FUNC_1(VAR_15->sa, VAR_15->bssid)) {
    VAR_17 = -VAR_0;
    break;
   }




   break;
  case 130:




  default:
   VAR_17 = -VAR_2;
   break;
  }
  FUNC_8(VAR_6);

  if (VAR_17)
   return VAR_17;
 }

 if (!FUNC_1(VAR_15->sa, FUNC_6(VAR_6)))
  return -VAR_0;


 return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
       VAR_14);
}
