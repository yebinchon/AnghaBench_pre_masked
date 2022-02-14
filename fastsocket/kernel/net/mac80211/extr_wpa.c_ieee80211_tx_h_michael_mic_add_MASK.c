
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
struct sk_buff {int len; int * data; } ;
struct TYPE_8__ {int * hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ control; } ;
struct ieee80211_tx_data {TYPE_5__* key; TYPE_2__* local; struct sk_buff* skb; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_9__ {scalar_t__ cipher; int flags; int * key; } ;
struct TYPE_10__ {TYPE_4__ conf; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ set_frag_threshold; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct ieee80211_hdr*,int *,size_t,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

ieee80211_tx_result
FUNC_9(struct ieee80211_tx_data *VAR_10)
{
 u8 *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14;
 unsigned int VAR_15;
 struct ieee80211_hdr *VAR_16;
 struct sk_buff *VAR_17 = VAR_10->skb;
 struct ieee80211_tx_info *VAR_18 = FUNC_0(VAR_17);
 int VAR_19;

 VAR_16 = (struct ieee80211_hdr *)VAR_17->data;
 if (!VAR_10->key || VAR_10->key->conf.cipher != VAR_9 ||
     VAR_17->len < 24 || !FUNC_3(VAR_16->frame_control))
  return VAR_7;

 VAR_15 = FUNC_2(VAR_16->frame_control);
 if (VAR_17->len < VAR_15)
  return VAR_8;

 VAR_11 = VAR_17->data + VAR_15;
 VAR_14 = VAR_17->len - VAR_15;

 if (FUNC_8(VAR_18->flags & VAR_2)) {

  VAR_18->control.hw_key = ((void*)0);
 }

 if (VAR_18->control.hw_key &&
     (VAR_18->flags & VAR_1 ||
      VAR_10->local->ops->set_frag_threshold) &&
     !(VAR_10->key->conf.flags & VAR_0)) {

  return VAR_7;
 }

 VAR_19 = VAR_3;
 if (!VAR_18->control.hw_key)
  VAR_19 += VAR_5;

 if (FUNC_1(FUNC_7(VAR_17) < VAR_19 ||
      FUNC_5(VAR_17) < VAR_6))
  return VAR_8;

 VAR_12 = &VAR_10->key->conf.key[VAR_4];
 VAR_13 = FUNC_6(VAR_17, VAR_3);
 FUNC_4(VAR_12, VAR_16, VAR_11, VAR_14, VAR_13);
 if (FUNC_8(VAR_18->flags & VAR_2))
  VAR_13[0]++;

 return VAR_7;
}
