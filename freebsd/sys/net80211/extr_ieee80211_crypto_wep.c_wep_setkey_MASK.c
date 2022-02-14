
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_key {int wk_keylen; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ieee80211_key *VAR_1)
{
 return VAR_1->wk_keylen >= 40/VAR_0;
}
