
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_data {TYPE_3__* key; int local; } ;
struct ieee80211_key_conf {int flags; } ;
struct TYPE_5__ {int keyidx; int keylen; int key; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_tx_data *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_key_conf *VAR_5 = VAR_4->control.hw_key;

 if (!VAR_5) {
  if (FUNC_2(VAR_2->local, VAR_3, VAR_2->key->conf.key,
       VAR_2->key->conf.keylen,
       VAR_2->key->conf.keyidx))
   return -1;
 } else if ((VAR_5->flags & VAR_0) ||
     (VAR_5->flags & VAR_1)) {
  if (!FUNC_1(VAR_2->local, VAR_3,
       VAR_2->key->conf.keylen,
       VAR_2->key->conf.keyidx))
   return -1;
 }

 return 0;
}
