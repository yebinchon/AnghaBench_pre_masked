
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee802_11_elems {scalar_t__ ssid_len; scalar_t__ mesh_id_len; int mesh_id; } ;
struct TYPE_9__ {int addr; } ;
struct ieee80211_if_mesh {scalar_t__ mesh_id_len; int beacon; int mesh_id; } ;
struct TYPE_6__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_7__ {int * variable; } ;
struct TYPE_8__ {TYPE_2__ probe_req; } ;
struct ieee80211_mgmt {int sa; int da; int frame_control; TYPE_3__ u; } ;
struct ieee80211_local {scalar_t__ tx_headroom; } ;
struct beacon_data {scalar_t__ tail_len; int tail; scalar_t__ head_len; int head; } ;
struct TYPE_10__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (int *,size_t,int,struct ieee802_11_elems*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 struct beacon_data* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(struct ieee80211_sub_if_data *VAR_4,
       struct ieee80211_mgmt *VAR_5, size_t VAR_6)
{
 struct ieee80211_local *VAR_7 = VAR_4->local;
 struct ieee80211_if_mesh *VAR_8 = &VAR_4->u.mesh;
 struct sk_buff *VAR_9;
 struct beacon_data *VAR_10;
 struct ieee80211_mgmt *VAR_11;
 struct ieee802_11_elems VAR_12;
 size_t VAR_13;
 u8 *VAR_14;

 VAR_14 = VAR_5->u.probe_req.variable;
 VAR_13 = (u8 *) VAR_14 - (u8 *) VAR_5;
 if (VAR_13 > VAR_6)
  return;

 FUNC_5(VAR_14, VAR_6 - VAR_13, 0, &VAR_12);


 if ((!FUNC_3(VAR_5->da, VAR_4->vif.addr) &&
      !FUNC_6(VAR_5->da)) ||
     VAR_12.ssid_len != 0)
  return;

 if (VAR_12.mesh_id_len != 0 &&
     (VAR_12.mesh_id_len != VAR_8->mesh_id_len ||
      FUNC_7(VAR_12.mesh_id, VAR_8->mesh_id, VAR_8->mesh_id_len)))
  return;

 FUNC_10();
 VAR_10 = FUNC_9(VAR_8->beacon);

 if (!VAR_10)
  goto out;

 VAR_9 = FUNC_2(VAR_7->tx_headroom +
         VAR_10->head_len + VAR_10->tail_len);
 if (!VAR_9)
  goto out;

 FUNC_13(VAR_9, VAR_7->tx_headroom);
 FUNC_8(FUNC_12(VAR_9, VAR_10->head_len), VAR_10->head, VAR_10->head_len);
 FUNC_8(FUNC_12(VAR_9, VAR_10->tail_len), VAR_10->tail, VAR_10->tail_len);
 VAR_11 = (struct ieee80211_mgmt *) VAR_9->data;
 VAR_11->frame_control = FUNC_1(VAR_1 |
      VAR_2);
 FUNC_8(VAR_11->da, VAR_5->sa, VAR_0);
 FUNC_0(VAR_9)->flags |= VAR_3;
 FUNC_4(VAR_4, VAR_9);
out:
 FUNC_11();
}
