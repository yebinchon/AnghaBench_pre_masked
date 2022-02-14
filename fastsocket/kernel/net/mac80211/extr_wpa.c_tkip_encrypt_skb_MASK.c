
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
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_4__* hw_key; } ;
struct ieee80211_tx_info {TYPE_5__ control; } ;
struct ieee80211_tx_data {TYPE_6__* local; struct ieee80211_key* key; } ;
struct TYPE_7__ {scalar_t__ iv16; int iv32; } ;
struct TYPE_8__ {int txlock; TYPE_1__ tx; } ;
struct TYPE_9__ {TYPE_2__ tkip; } ;
struct ieee80211_key {TYPE_3__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_12__ {int wep_tx_tfm; } ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int * FUNC_3 (int *,struct ieee80211_key*) ;
 int FUNC_4 (int ,struct ieee80211_key*,struct sk_buff*,int *,int) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int * FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_tx_data *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *) VAR_5->data;
 struct ieee80211_key *VAR_7 = VAR_4->key;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9;
 int VAR_10, VAR_11;
 u8 *VAR_12;

 if (VAR_8->control.hw_key &&
     !(VAR_8->control.hw_key->flags & VAR_0) &&
     !(VAR_8->control.hw_key->flags & VAR_1)) {

  return 0;
 }

 VAR_9 = FUNC_2(VAR_6->frame_control);
 VAR_10 = VAR_5->len - VAR_9;

 if (VAR_8->control.hw_key)
  VAR_11 = 0;
 else
  VAR_11 = VAR_2;

 if (FUNC_1(FUNC_11(VAR_5) < VAR_11 ||
      FUNC_6(VAR_5) < VAR_3))
  return -1;

 VAR_12 = FUNC_8(VAR_5, VAR_3);
 FUNC_5(VAR_12, VAR_12 + VAR_3, VAR_9);
 FUNC_10(VAR_5, FUNC_7(VAR_5) + VAR_3);
 VAR_12 += VAR_9;


 if (VAR_8->control.hw_key &&
     (VAR_8->control.hw_key->flags & VAR_1))
  return 0;


 FUNC_12(&VAR_7->u.tkip.txlock);
 VAR_7->u.tkip.tx.iv16++;
 if (VAR_7->u.tkip.tx.iv16 == 0)
  VAR_7->u.tkip.tx.iv32++;
 VAR_12 = FUNC_3(VAR_12, VAR_7);
 FUNC_13(&VAR_7->u.tkip.txlock);


 if (VAR_8->control.hw_key)
  return 0;


 FUNC_9(VAR_5, VAR_2);

 return FUNC_4(VAR_4->local->wep_tx_tfm,
        VAR_7, VAR_5, VAR_12, VAR_10);
}
