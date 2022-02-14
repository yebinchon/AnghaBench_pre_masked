
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct mesh_path {int flags; int frame_queue; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int frame_control; int * addr3; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mesh_path*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mesh_path*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 struct mesh_path* FUNC_6 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 struct mesh_path* FUNC_8 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_9 (struct mesh_path*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct sk_buff* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,struct sk_buff*) ;

int FUNC_15(struct ieee80211_sub_if_data *VAR_5,
    struct sk_buff *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_6->data;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_6);
 struct mesh_path *VAR_9;
 struct sk_buff *VAR_10 = ((void*)0);
 u8 *VAR_11 = VAR_7->addr3;
 int VAR_12 = 0;


 if (FUNC_3(VAR_7->frame_control))
  return 0;

 FUNC_10();
 VAR_12 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_12)
  goto endlookup;


 VAR_9 = FUNC_8(VAR_5, VAR_11);
 if (!VAR_9) {
  VAR_9 = FUNC_6(VAR_5, VAR_11);
  if (FUNC_1(VAR_9)) {
   FUNC_7(VAR_5, VAR_6);
   VAR_12 = FUNC_2(VAR_9);
   goto endlookup;
  }
 }

 if (!(VAR_9->flags & VAR_3))
  FUNC_9(VAR_9, VAR_4);

 if (FUNC_13(&VAR_9->frame_queue) >= VAR_2)
  VAR_10 = FUNC_12(&VAR_9->frame_queue);

 VAR_8->flags |= VAR_1;
 FUNC_4(VAR_5, VAR_6);
 FUNC_14(&VAR_9->frame_queue, VAR_6);
 VAR_12 = -VAR_0;
 if (VAR_10)
  FUNC_7(VAR_5, VAR_10);

endlookup:
 FUNC_11();
 return VAR_12;
}
