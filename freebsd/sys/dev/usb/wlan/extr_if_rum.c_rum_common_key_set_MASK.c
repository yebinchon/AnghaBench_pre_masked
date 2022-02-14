
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct rum_softc {int dummy; } ;
struct ieee80211_key {int wk_keylen; int wk_rxmic; int wk_txmic; TYPE_1__* wk_cipher; int wk_key; } ;
struct TYPE_2__ {scalar_t__ ic_cipher; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct rum_softc*,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct rum_softc *VAR_3, struct ieee80211_key *VAR_4,
    uint16_t VAR_5)
{

 if (FUNC_0(VAR_3, VAR_5, VAR_4->wk_key, VAR_4->wk_keylen))
  return VAR_0;

 if (VAR_4->wk_cipher->ic_cipher == VAR_1) {
  if (FUNC_0(VAR_3, VAR_5 + VAR_2,
      VAR_4->wk_txmic, 8))
   return VAR_0;
  if (FUNC_0(VAR_3, VAR_5 + VAR_2 + 8,
      VAR_4->wk_rxmic, 8))
   return VAR_0;
 }

 return 0;
}
