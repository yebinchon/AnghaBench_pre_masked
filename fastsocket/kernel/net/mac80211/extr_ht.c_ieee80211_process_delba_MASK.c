
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_5__ {int reason_code; int params; } ;
struct TYPE_6__ {TYPE_1__ delba; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; int sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sta_info*,int,int,int ,int) ;
 int FUNC_1 (struct sta_info*,int,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,int ,char*,int,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_4,
        struct sta_info *VAR_5,
        struct ieee80211_mgmt *VAR_6, size_t VAR_7)
{
 u16 VAR_8, VAR_9;
 u16 VAR_10;

 VAR_9 = FUNC_3(VAR_6->u.action.u.delba.params);
 VAR_8 = (VAR_9 & VAR_2) >> 12;
 VAR_10 = (VAR_9 & VAR_1) >> 11;

 FUNC_2(VAR_4, "delba from %pM (%s) tid %d reason code %d\n",
      VAR_6->sa, VAR_10 ? "initiator" : "recipient",
      VAR_8,
      FUNC_3(VAR_6->u.action.u.delba.reason_code));

 if (VAR_10 == VAR_3)
  FUNC_0(VAR_5, VAR_8, VAR_3, 0,
            1);
 else
  FUNC_1(VAR_5, VAR_8, VAR_0);
}
