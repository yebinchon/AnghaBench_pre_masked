
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
typedef int u64 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_8__ {TYPE_2__* hw_key; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct ieee80211_tx_data {struct ieee80211_key* key; } ;
struct TYPE_9__ {int tfm; int tx_pn; } ;
struct TYPE_10__ {TYPE_4__ ccmp; } ;
struct TYPE_6__ {int keyidx; } ;
struct ieee80211_key {TYPE_5__ u; TYPE_1__ conf; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (struct sk_buff*,int*,int*,int ) ;
 int FUNC_5 (int ,int*,int*,int,int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int* FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_tx_data *VAR_5, struct sk_buff *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *) VAR_6->data;
 struct ieee80211_key *VAR_8 = VAR_5->key;
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_6);
 int VAR_10, VAR_11, VAR_12;
 u8 *VAR_13;
 u8 VAR_14[6];
 u64 VAR_15;
 u8 VAR_16[6 * VAR_0];

 if (VAR_9->control.hw_key &&
     !(VAR_9->control.hw_key->flags & VAR_3) &&
     !(VAR_9->control.hw_key->flags & VAR_4)) {




  return 0;
 }

 VAR_10 = FUNC_6(VAR_7->frame_control);
 VAR_11 = VAR_6->len - VAR_10;

 if (VAR_9->control.hw_key)
  VAR_12 = 0;
 else
  VAR_12 = VAR_2;

 if (FUNC_1(FUNC_13(VAR_6) < VAR_12 ||
      FUNC_8(VAR_6) < VAR_1))
  return -1;

 VAR_13 = FUNC_10(VAR_6, VAR_1);
 FUNC_7(VAR_13, VAR_13 + VAR_1, VAR_10);
 FUNC_12(VAR_6, FUNC_9(VAR_6) + VAR_1);


 if (VAR_9->control.hw_key &&
     (VAR_9->control.hw_key->flags & VAR_4))
  return 0;

 VAR_7 = (struct ieee80211_hdr *) VAR_13;
 VAR_13 += VAR_10;

 VAR_15 = FUNC_2(&VAR_8->u.ccmp.tx_pn);

 VAR_14[5] = VAR_15;
 VAR_14[4] = VAR_15 >> 8;
 VAR_14[3] = VAR_15 >> 16;
 VAR_14[2] = VAR_15 >> 24;
 VAR_14[1] = VAR_15 >> 32;
 VAR_14[0] = VAR_15 >> 40;

 FUNC_3(VAR_13, VAR_14, VAR_8->conf.keyidx);


 if (VAR_9->control.hw_key)
  return 0;

 VAR_13 += VAR_1;
 FUNC_4(VAR_6, VAR_14, VAR_16, 0);
 FUNC_5(VAR_8->u.ccmp.tfm, VAR_16, VAR_13, VAR_11,
      VAR_13, FUNC_11(VAR_6, VAR_2));

 return 0;
}
