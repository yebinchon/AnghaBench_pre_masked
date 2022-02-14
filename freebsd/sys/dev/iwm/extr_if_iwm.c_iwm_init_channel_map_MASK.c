
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct iwm_softc {TYPE_1__* cfg; struct iwm_nvm_data* nvm_data; } ;
struct iwm_nvm_data {scalar_t__ sku_cap_band_52GHz_enable; } ;
struct ieee80211com {struct iwm_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwm_softc*,struct ieee80211_channel*,int,int*,size_t,size_t,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_8, int VAR_9, int *VAR_10,
    struct ieee80211_channel VAR_11[])
{
 struct iwm_softc *VAR_12 = VAR_8->ic_softc;
 struct iwm_nvm_data *VAR_13 = VAR_12->nvm_data;
 uint8_t VAR_14[VAR_3];
 size_t VAR_15;

 FUNC_2(VAR_14, 0, sizeof(VAR_14));

 FUNC_4(VAR_14, VAR_1);
 FUNC_4(VAR_14, VAR_2);
 FUNC_1(VAR_12, VAR_11, VAR_9, VAR_10, 0,
     VAR_5 - 1, VAR_14);


 FUNC_0(VAR_14, VAR_2);
 FUNC_1(VAR_12, VAR_11, VAR_9, VAR_10,
     VAR_5 - 1, VAR_5, VAR_14);

 if (VAR_13->sku_cap_band_52GHz_enable) {
  if (VAR_12->cfg->device_family == VAR_4)
   VAR_15 = FUNC_3(VAR_6);
  else
   VAR_15 = FUNC_3(VAR_7);
  FUNC_2(VAR_14, 0, sizeof(VAR_14));
  FUNC_4(VAR_14, VAR_0);
  FUNC_1(VAR_12, VAR_11, VAR_9, VAR_10,
      VAR_5, VAR_15, VAR_14);
 }
}
