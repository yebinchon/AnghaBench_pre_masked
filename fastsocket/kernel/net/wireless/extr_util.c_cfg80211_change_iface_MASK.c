
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vif_params {int use_4addr; } ;
struct net_device {int priv_flags; TYPE_4__* ieee80211_ptr; } ;
struct TYPE_6__ {int interface_modes; } ;
struct cfg80211_registered_device {int devlist_mtx; TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_8__ {int iftype; int use_4addr; scalar_t__ mesh_id_up_len; } ;
struct TYPE_7__ {int ext_priv_flags; } ;
struct TYPE_5__ {int change_virtual_intf; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct cfg80211_registered_device*,TYPE_4__*,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int ,int) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int) ;
 int FUNC_5 (struct cfg80211_registered_device*) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_7 (struct cfg80211_registered_device*,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct cfg80211_registered_device*,struct net_device*,int,int *,struct vif_params*) ;

int FUNC_13(struct cfg80211_registered_device *VAR_5,
     struct net_device *VAR_6, enum nl80211_iftype VAR_7,
     u32 *VAR_8, struct vif_params *VAR_9)
{
 int VAR_10;
 enum nl80211_iftype VAR_11 = VAR_6->ieee80211_ptr->iftype;

 FUNC_0(VAR_5);


 if (VAR_11 == 137)
  return -VAR_1;


 if (VAR_7 == 133)
  return -VAR_1;

 if (!VAR_5->ops->change_virtual_intf ||
     !(VAR_5->wiphy.interface_modes & (1 << VAR_7)))
  return -VAR_1;


 if ((VAR_6->priv_flags & VAR_2) &&
     (VAR_7 == 139 ||
      VAR_7 == 131 ||
      VAR_7 == 134))
  return -VAR_0;

 if (VAR_7 != VAR_11 && FUNC_11(VAR_6)) {
  FUNC_8(&VAR_5->devlist_mtx);
  VAR_10 = FUNC_2(VAR_5, VAR_6->ieee80211_ptr,
          VAR_7);
  FUNC_9(&VAR_5->devlist_mtx);
  if (VAR_10)
   return VAR_10;

  VAR_6->ieee80211_ptr->use_4addr = 0;
  VAR_6->ieee80211_ptr->mesh_id_up_len = 0;

  switch (VAR_11) {
  case 138:
   FUNC_6(VAR_5, VAR_6);
   break;
  case 139:
   FUNC_4(VAR_5, VAR_6, 0);
   break;
  case 131:
  case 134:
   FUNC_3(VAR_5, VAR_6,
         VAR_4, 1);
   break;
  case 136:

   break;
  default:
   break;
  }

  FUNC_5(VAR_5);
 }

 VAR_10 = FUNC_12(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_1(!VAR_10 && VAR_6->ieee80211_ptr->iftype != VAR_7);

 if (!VAR_10 && VAR_9 && VAR_9->use_4addr != -1)
  VAR_6->ieee80211_ptr->use_4addr = VAR_9->use_4addr;

 if (!VAR_10) {
  FUNC_10(VAR_6)->ext_priv_flags &= ~VAR_3;
  switch (VAR_7) {
  case 131:
   if (VAR_6->ieee80211_ptr->use_4addr)
    break;

  case 134:
  case 139:
   FUNC_10(VAR_6)->ext_priv_flags |= VAR_3;
   break;
  case 132:
  case 138:
  case 137:
  case 129:
  case 136:

   break;
  case 135:

   break;
  case 130:
  case 128:

   break;
  case 133:
   FUNC_1(1);
   break;
  }
 }

 if (!VAR_10 && VAR_7 != VAR_11 && FUNC_11(VAR_6)) {
  FUNC_7(VAR_5, VAR_7, 1);
  FUNC_7(VAR_5, VAR_11, -1);
 }

 return VAR_10;
}
