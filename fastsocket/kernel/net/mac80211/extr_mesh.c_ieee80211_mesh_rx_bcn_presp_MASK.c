
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
typedef int u16 ;
struct ieee802_11_elems {int * ds_params; scalar_t__ rsn; int mesh_config; int mesh_id; } ;
struct ieee80211_if_mesh {scalar_t__ security; TYPE_6__* sync_ops; } ;
struct TYPE_10__ {struct ieee80211_if_mesh mesh; } ;
struct TYPE_7__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_rx_status {int band; int freq; } ;
struct TYPE_8__ {scalar_t__ variable; } ;
struct TYPE_9__ {TYPE_2__ probe_resp; } ;
struct ieee80211_mgmt {int sa; TYPE_3__ u; int da; } ;
struct TYPE_11__ {int wiphy; } ;
struct ieee80211_local {TYPE_5__ hw; } ;
struct ieee80211_channel {int flags; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_12__ {int (* rx_bcn_presp ) (struct ieee80211_sub_if_data*,int ,struct ieee80211_mgmt*,struct ieee802_11_elems*,struct ieee80211_rx_status*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct ieee80211_channel* FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,size_t,int,struct ieee802_11_elems*) ;
 scalar_t__ FUNC_4 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ,struct ieee802_11_elems*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int ,struct ieee80211_mgmt*,struct ieee802_11_elems*,struct ieee80211_rx_status*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_3,
     u16 VAR_4,
     struct ieee80211_mgmt *VAR_5,
     size_t VAR_6,
     struct ieee80211_rx_status *VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_3->local;
 struct ieee80211_if_mesh *VAR_9 = &VAR_3->u.mesh;
 struct ieee802_11_elems VAR_10;
 struct ieee80211_channel *VAR_11;
 size_t VAR_12;
 int VAR_13;
 enum ieee80211_band VAR_14 = VAR_7->band;


 if (VAR_4 == VAR_2 &&
     !FUNC_0(VAR_5->da, VAR_3->vif.addr))
  return;

 VAR_12 = (u8 *) VAR_5->u.probe_resp.variable - (u8 *) VAR_5;
 if (VAR_12 > VAR_6)
  return;

 FUNC_3(VAR_5->u.probe_resp.variable, VAR_6 - VAR_12,
          0, &VAR_10);


 if ((!VAR_10.mesh_id || !VAR_10.mesh_config) ||
     (VAR_10.rsn && VAR_3->u.mesh.security == VAR_1) ||
     (!VAR_10.rsn && VAR_3->u.mesh.security != VAR_1))
  return;

 if (VAR_10.ds_params)
  VAR_13 = FUNC_1(VAR_10.ds_params[0], VAR_14);
 else
  VAR_13 = VAR_7->freq;

 VAR_11 = FUNC_2(VAR_8->hw.wiphy, VAR_13);

 if (!VAR_11 || VAR_11->flags & VAR_0)
  return;

 if (FUNC_4(VAR_3, &VAR_10))
  FUNC_5(VAR_3, VAR_5->sa, &VAR_10);

 if (VAR_9->sync_ops)
  VAR_9->sync_ops->rx_bcn_presp(VAR_3,
   VAR_4, VAR_5, &VAR_10, VAR_7);
}
