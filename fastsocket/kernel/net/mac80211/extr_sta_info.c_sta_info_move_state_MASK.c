
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
struct sta_info {int sta_state; int _flags; TYPE_6__* sdata; int local; TYPE_1__ sta; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_10__ {int sta; } ;
struct TYPE_11__ {TYPE_3__ vlan; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_13__ {TYPE_5__* bss; TYPE_4__ u; TYPE_2__ vif; } ;
struct TYPE_12__ {int num_mcast_sta; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_6__*,struct sta_info*,int const,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_6__*,char*,int ,int) ;
 scalar_t__ FUNC_8 (struct sta_info*,int ) ;

int FUNC_9(struct sta_info *VAR_7,
   enum ieee80211_sta_state VAR_8)
{
 FUNC_5();

 if (VAR_7->sta_state == VAR_8)
  return 0;



 switch (VAR_8) {
 case 128:
  if (VAR_7->sta_state != 130)
   return -VAR_0;
  break;
 case 130:
  if (VAR_7->sta_state != 128 &&
      VAR_7->sta_state != 131)
   return -VAR_0;
  break;
 case 131:
  if (VAR_7->sta_state != 130 &&
      VAR_7->sta_state != 129)
   return -VAR_0;
  break;
 case 129:
  if (VAR_7->sta_state != 131)
   return -VAR_0;
  break;
 default:
  FUNC_0(1, "invalid state %d", VAR_8);
  return -VAR_0;
 }

 FUNC_7(VAR_7->sdata, "moving STA %pM to state %d\n",
  VAR_7->sta.addr, VAR_8);





 if (FUNC_8(VAR_7, VAR_6)) {
  int VAR_9 = FUNC_4(VAR_7->local, VAR_7->sdata, VAR_7,
     VAR_7->sta_state, VAR_8);
  if (VAR_9)
   return VAR_9;
 }



 switch (VAR_8) {
 case 128:
  if (VAR_7->sta_state == 130)
   FUNC_3(VAR_4, &VAR_7->_flags);
  break;
 case 130:
  if (VAR_7->sta_state == 128)
   FUNC_6(VAR_4, &VAR_7->_flags);
  else if (VAR_7->sta_state == 131)
   FUNC_3(VAR_3, &VAR_7->_flags);
  break;
 case 131:
  if (VAR_7->sta_state == 130) {
   FUNC_6(VAR_3, &VAR_7->_flags);
  } else if (VAR_7->sta_state == 129) {
   if (VAR_7->sdata->vif.type == VAR_1 ||
       (VAR_7->sdata->vif.type == VAR_2 &&
        !VAR_7->sdata->u.vlan.sta))
    FUNC_1(&VAR_7->sdata->bss->num_mcast_sta);
   FUNC_3(VAR_5, &VAR_7->_flags);
  }
  break;
 case 129:
  if (VAR_7->sta_state == 131) {
   if (VAR_7->sdata->vif.type == VAR_1 ||
       (VAR_7->sdata->vif.type == VAR_2 &&
        !VAR_7->sdata->u.vlan.sta))
    FUNC_2(&VAR_7->sdata->bss->num_mcast_sta);
   FUNC_6(VAR_5, &VAR_7->_flags);
  }
  break;
 default:
  break;
 }

 VAR_7->sta_state = VAR_8;

 return 0;
}
