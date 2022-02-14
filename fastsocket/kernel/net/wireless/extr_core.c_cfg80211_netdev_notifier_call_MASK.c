
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int auth_type; } ;
struct TYPE_13__ {int default_key; int default_mgmt_key; int keys; TYPE_4__ connect; } ;
struct wireless_dev {scalar_t__ iftype; int ps; int ps_timeout; TYPE_7__* wiphy; int list; TYPE_5__ wext; int mesh_id_up_len; int ssid; int cleanup_work; int use_4addr; int sme_state; struct net_device* netdev; int identifier; int mgmt_registrations_lock; int mgmt_registrations; int event_lock; int event_list; int mtx; } ;
struct notifier_block {int dummy; } ;
struct TYPE_9__ {int kobj; } ;
struct net_device {TYPE_1__ dev; int * ethtool_ops; int features; struct wireless_dev* ieee80211_ptr; } ;
struct mesh_setup {int mesh_id_len; int mesh_id; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_11__ {TYPE_2__ dev; } ;
struct cfg80211_registered_device {int devlist_mtx; int rfkill; int devlist_generation; TYPE_6__* ops; int opencount; int sched_scan_mtx; TYPE_3__ wiphy; int wdev_list; int wdev_id; } ;
typedef int setup ;
struct TYPE_16__ {int ext_priv_flags; } ;
struct TYPE_15__ {int flags; int interface_modes; } ;
struct TYPE_14__ {int set_power_mgmt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;







 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;

 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*,struct mesh_setup*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cfg80211_registered_device*,int) ;
 int VAR_10 ;
 int FUNC_8 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_10 (struct cfg80211_registered_device*) ;
 int FUNC_11 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (struct wireless_dev*) ;
 int FUNC_14 (struct cfg80211_registered_device*) ;
 int FUNC_15 (struct cfg80211_registered_device*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct mesh_setup*,int *,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 TYPE_8__* FUNC_26 (struct net_device*) ;
 int FUNC_27 (struct net_device*,int *) ;
 int FUNC_28 (int) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (int ,int *) ;
 int FUNC_31 (struct cfg80211_registered_device*,struct net_device*,int,int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 () ;
 int FUNC_35 (int *,int *,char*) ;
 int FUNC_36 (int *,char*) ;
 int VAR_14 ;
 int FUNC_37 (struct wireless_dev*) ;
 int FUNC_38 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_39 (TYPE_7__*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_40(struct notifier_block *VAR_16,
      unsigned long VAR_17,
      void *VAR_18)
{
 struct net_device *VAR_19 = VAR_18;
 struct wireless_dev *VAR_20 = VAR_19->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_21;
 int VAR_22;

 if (!VAR_20)
  return VAR_8;

 VAR_21 = FUNC_39(VAR_20->wiphy);

 FUNC_4(VAR_20->iftype == VAR_7);

 switch (VAR_17) {
 case 135:
  FUNC_3(VAR_19, &VAR_15);
  break;
 case 133:





  FUNC_23(&VAR_20->mtx);
  FUNC_2(&VAR_20->cleanup_work, VAR_14);
  FUNC_1(&VAR_20->event_list);
  FUNC_33(&VAR_20->event_lock);
  FUNC_1(&VAR_20->mgmt_registrations);
  FUNC_33(&VAR_20->mgmt_registrations_lock);

  FUNC_24(&VAR_21->devlist_mtx);
  VAR_20->identifier = ++VAR_21->wdev_id;
  FUNC_19(&VAR_20->list, &VAR_21->wdev_list);
  VAR_21->devlist_generation++;

  VAR_19->features |= VAR_4;

  if (FUNC_35(&VAR_19->dev.kobj, &VAR_21->wiphy.dev.kobj,
          "phy80211")) {
   FUNC_29("failed to add phy80211 symlink to netdev!\n");
  }
  VAR_20->netdev = VAR_19;
  VAR_20->sme_state = VAR_0;
  FUNC_25(&VAR_21->devlist_mtx);






  if (VAR_20->wiphy->flags & VAR_9)
   VAR_20->ps = 1;
  else
   VAR_20->ps = 0;

  VAR_20->ps_timeout = -1;




  if (!VAR_19->ethtool_ops)
   VAR_19->ethtool_ops = &VAR_10;


  if ((VAR_20->iftype == 128 ||
       VAR_20->iftype == VAR_6 ||
       VAR_20->iftype == 130) && !VAR_20->use_4addr)
   FUNC_26(VAR_19)->ext_priv_flags |= VAR_3;
  break;
 case 136:
  FUNC_9(VAR_21, VAR_20);
  break;
 case 137:
  FUNC_15(VAR_21, VAR_20->iftype, -1);
  FUNC_16(VAR_19);
  FUNC_30(VAR_11, &VAR_20->cleanup_work);
  break;
 case 131:






  if (FUNC_6(&VAR_20->cleanup_work)) {
   FUNC_24(&VAR_21->devlist_mtx);
   VAR_21->opencount--;
   FUNC_25(&VAR_21->devlist_mtx);
   FUNC_17(VAR_19);
  }
  FUNC_15(VAR_21, VAR_20->iftype, 1);
  FUNC_10(VAR_21);
  FUNC_24(&VAR_21->devlist_mtx);
  FUNC_24(&VAR_21->sched_scan_mtx);
  FUNC_37(VAR_20);
  switch (VAR_20->iftype) {
  default:
   break;
  }
  FUNC_38(VAR_20);
  FUNC_25(&VAR_21->sched_scan_mtx);
  VAR_21->opencount++;
  FUNC_25(&VAR_21->devlist_mtx);
  FUNC_14(VAR_21);





  if ((VAR_20->iftype == 128 ||
       VAR_20->iftype == VAR_6) &&
      VAR_21->ops->set_power_mgmt)
   if (FUNC_31(VAR_21, VAR_19, VAR_20->ps,
      VAR_20->ps_timeout)) {

    VAR_20->ps = 0;
   }
  break;
 case 132:





  FUNC_24(&VAR_21->devlist_mtx);







  if (!FUNC_21(&VAR_20->list)) {
   FUNC_36(&VAR_19->dev.kobj, "phy80211");
   FUNC_20(&VAR_20->list);
   VAR_21->devlist_generation++;
   FUNC_12(VAR_20);



  }
  FUNC_25(&VAR_21->devlist_mtx);






  FUNC_34();
  FUNC_1(&VAR_20->list);




  FUNC_13(VAR_20);
  break;
 case 134:
  if (!(VAR_20->wiphy->interface_modes & FUNC_0(VAR_20->iftype)))
   return FUNC_28(-VAR_1);
  if (FUNC_32(VAR_21->rfkill))
   return FUNC_28(-VAR_2);
  FUNC_24(&VAR_21->devlist_mtx);
  VAR_22 = FUNC_7(VAR_21, VAR_20->iftype);
  FUNC_25(&VAR_21->devlist_mtx);
  if (VAR_22)
   return FUNC_28(VAR_22);
  break;
 }

 return VAR_8;
}
