
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * chan; } ;
struct mesh_setup {int beacon_interval; int dtim_period; int auto_open_plinks; TYPE_1__ chandef; scalar_t__ user_mpm; int mcast_rate; scalar_t__ mesh_id_len; int mesh_id; } ;
struct mesh_config {int beacon_interval; int dtim_period; int auto_open_plinks; TYPE_1__ chandef; scalar_t__ user_mpm; int mcast_rate; scalar_t__ mesh_id_len; int mesh_id; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
typedef struct net_device cfg80211_registered_device ;
typedef int setup ;
typedef int cfg ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct mesh_setup*,struct mesh_setup*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mesh_setup*,int *,int) ;
 int FUNC_2 (struct net_device*,struct genl_info*,TYPE_1__*) ;
 int FUNC_3 (struct net_device*,int ,void*) ;
 int FUNC_4 (struct genl_info*,struct mesh_setup*,int *) ;
 int FUNC_5 (struct genl_info*,struct mesh_setup*) ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct cfg80211_registered_device *VAR_12 = VAR_11->user_ptr[0];
 struct net_device *VAR_13 = VAR_11->user_ptr[1];
 struct mesh_config VAR_14;
 struct mesh_setup VAR_15;
 int VAR_16;


 FUNC_1(&VAR_14, &VAR_8, sizeof(VAR_14));
 FUNC_1(&VAR_15, &VAR_9, sizeof(VAR_15));

 if (VAR_11->attrs[VAR_4]) {

  VAR_16 = FUNC_4(VAR_11, &VAR_14, ((void*)0));
  if (VAR_16)
   return VAR_16;
 }

 if (!VAR_11->attrs[VAR_5] ||
     !FUNC_8(VAR_11->attrs[VAR_5]))
  return -VAR_0;

 VAR_15.mesh_id = FUNC_6(VAR_11->attrs[VAR_5]);
 VAR_15.mesh_id_len = FUNC_8(VAR_11->attrs[VAR_5]);

 if (VAR_11->attrs[VAR_3] &&
     !FUNC_3(VAR_12, VAR_15.mcast_rate,
       FUNC_7(VAR_11->attrs[VAR_3])))
   return -VAR_0;

 if (VAR_11->attrs[VAR_1]) {
  VAR_15.beacon_interval =
   FUNC_7(VAR_11->attrs[VAR_1]);
  if (VAR_15.beacon_interval < 10 ||
      VAR_15.beacon_interval > 10000)
   return -VAR_0;
 }

 if (VAR_11->attrs[VAR_2]) {
  VAR_15.dtim_period =
   FUNC_7(VAR_11->attrs[VAR_2]);
  if (VAR_15.dtim_period < 1 || VAR_15.dtim_period > 100)
   return -VAR_0;
 }

 if (VAR_11->attrs[VAR_6]) {

  VAR_16 = FUNC_5(VAR_11, &VAR_15);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_15.user_mpm)
  VAR_14.auto_open_plinks = 0;

 if (VAR_11->attrs[VAR_7]) {
  VAR_16 = FUNC_2(VAR_12, VAR_11, &VAR_15.chandef);
  if (VAR_16)
   return VAR_16;
 } else {

  VAR_15.chandef.chan = ((void*)0);
 }

 return FUNC_0(VAR_12, VAR_13, &VAR_15, &VAR_14);
}
