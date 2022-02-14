
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {size_t security_idx; TYPE_6__* key; TYPE_7__* sdata; int tkip_iv16; int tkip_iv32; struct sk_buff* skb; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_rx_result ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_14__ {TYPE_1__ vif; } ;
struct TYPE_12__ {scalar_t__ cipher; int keyidx; int * key; } ;
struct TYPE_10__ {int mic_failures; TYPE_2__* rx; } ;
struct TYPE_11__ {TYPE_3__ tkip; } ;
struct TYPE_13__ {TYPE_5__ conf; TYPE_4__ u; } ;
struct TYPE_9__ {int iv16; int iv32; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int,void*,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,struct ieee80211_hdr*,int *,size_t,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

ieee80211_rx_result
FUNC_8(struct ieee80211_rx_data *VAR_11)
{
 u8 *VAR_12, *VAR_13 = ((void*)0);
 size_t VAR_14;
 unsigned int VAR_15;
 u8 VAR_16[VAR_1];
 struct sk_buff *VAR_17 = VAR_11->skb;
 struct ieee80211_rx_status *VAR_18 = FUNC_0(VAR_17);
 struct ieee80211_hdr *VAR_19 = (struct ieee80211_hdr *)VAR_17->data;





 if (!FUNC_2(VAR_19->frame_control))
  return VAR_4;







 if (VAR_18->flag & (VAR_9 | VAR_7)) {
  if (VAR_18->flag & VAR_8)
   goto mic_fail_no_key;

  if (!(VAR_18->flag & VAR_7) && VAR_11->key &&
      VAR_11->key->conf.cipher == VAR_10)
   goto update_iv;

  return VAR_4;
 }






 if (!VAR_11->key || VAR_11->key->conf.cipher != VAR_10 ||
     !(VAR_18->flag & VAR_6))
  return VAR_4;

 if (VAR_11->sdata->vif.type == VAR_2 && VAR_11->key->conf.keyidx) {






  return VAR_5;
 }

 if (VAR_18->flag & VAR_8)
  goto mic_fail;

 VAR_15 = FUNC_1(VAR_19->frame_control);
 if (VAR_17->len < VAR_15 + VAR_1)
  return VAR_5;

 if (FUNC_6(VAR_11->skb))
  return VAR_5;
 VAR_19 = (void *)VAR_17->data;

 VAR_12 = VAR_17->data + VAR_15;
 VAR_14 = VAR_17->len - VAR_15 - VAR_1;
 VAR_13 = &VAR_11->key->conf.key[VAR_3];
 FUNC_5(VAR_13, VAR_19, VAR_12, VAR_14, VAR_16);
 if (FUNC_4(VAR_16, VAR_12 + VAR_14, VAR_1) != 0)
  goto mic_fail;


 FUNC_7(VAR_17, VAR_17->len - VAR_1);

update_iv:

 VAR_11->key->u.tkip.rx[VAR_11->security_idx].iv32 = VAR_11->tkip_iv32;
 VAR_11->key->u.tkip.rx[VAR_11->security_idx].iv16 = VAR_11->tkip_iv16;

 return VAR_4;

mic_fail:
 VAR_11->key->u.tkip.mic_failures++;

mic_fail_no_key:





 FUNC_3(VAR_11->sdata,
     VAR_11->key ? VAR_11->key->conf.keyidx : -1,
     (void *) VAR_17->data, ((void*)0), VAR_0);
 return VAR_5;
}
