
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int * bssid; } ;
struct TYPE_18__ {int type; int p2p; int * addr; TYPE_7__ bss_conf; } ;
struct TYPE_14__ {int * bssid; } ;
struct TYPE_13__ {int * bssid; } ;
struct TYPE_11__ {int bc_buf; } ;
struct TYPE_12__ {int vlans; TYPE_2__ ps; } ;
struct TYPE_17__ {int mntr_flags; TYPE_5__ ibss; TYPE_4__ mgd; TYPE_3__ ap; } ;
struct TYPE_10__ {int iftype; } ;
struct ieee80211_sub_if_data {int control_port_no_encrypt; TYPE_9__ vif; TYPE_8__ u; TYPE_6__* dev; int recalc_smps; int work; int skb_queue; scalar_t__ noack_map; int control_port_protocol; TYPE_1__ wdev; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_15__ {int * netdev_ops; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int VAR_6 ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_8__*,int ,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_sub_if_data *VAR_9,
      enum nl80211_iftype VAR_10)
{

 FUNC_9(&VAR_9->u, 0, sizeof(VAR_9->u));


 VAR_9->vif.type = VAR_10;
 VAR_9->vif.p2p = 0;
 VAR_9->wdev.iftype = VAR_10;

 VAR_9->control_port_protocol = FUNC_3(VAR_2);
 VAR_9->control_port_no_encrypt = 0;

 VAR_9->noack_map = 0;


 if (VAR_9->dev) {
  VAR_9->dev->netdev_ops = &VAR_5;
  VAR_9->dev->type = VAR_0;
 }

 FUNC_10(&VAR_9->skb_queue);
 FUNC_2(&VAR_9->work, VAR_6);
 FUNC_2(&VAR_9->recalc_smps, VAR_8);

 switch (VAR_10) {
 case 132:
  VAR_10 = 138;
  VAR_9->vif.type = VAR_10;
  VAR_9->vif.p2p = 1;

 case 138:
  FUNC_10(&VAR_9->u.ap.ps.bc_buf);
  FUNC_1(&VAR_9->u.ap.vlans);
  VAR_9->vif.bss_conf.bssid = VAR_9->vif.addr;
  break;
 case 134:
  VAR_10 = 131;
  VAR_9->vif.type = VAR_10;
  VAR_9->vif.p2p = 1;

 case 131:
  VAR_9->vif.bss_conf.bssid = VAR_9->u.mgd.bssid;
  FUNC_7(VAR_9);
  break;
 case 139:
  VAR_9->vif.bss_conf.bssid = VAR_9->u.ibss.bssid;
  FUNC_5(VAR_9);
  break;
 case 136:
  if (FUNC_8(&VAR_9->vif))
   FUNC_6(VAR_9);
  break;
 case 135:
  VAR_9->dev->type = VAR_1;
  VAR_9->dev->netdev_ops = &VAR_7;
  VAR_9->u.mntr_flags = VAR_3 |
          VAR_4;
  break;
 case 129:
  VAR_9->vif.bss_conf.bssid = ((void*)0);
  break;
 case 137:
  break;
 case 133:
  VAR_9->vif.bss_conf.bssid = VAR_9->vif.addr;
  break;
 case 130:
 case 128:
  FUNC_0();
  break;
 }

 FUNC_4(VAR_9);
}
