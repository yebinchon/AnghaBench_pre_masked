
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211com {int ic_flags; struct ieee80211_rateset* ic_sup_rates; int ic_macaddr; int ic_vaps; } ;
struct iwm_softc {TYPE_2__* nvm_data; struct ieee80211com sc_ic; } ;
struct TYPE_8__ {void* len; void* offset; } ;
struct TYPE_5__ {void* len; scalar_t__ offset; } ;
struct iwm_scan_probe_req {TYPE_4__ common_data; TYPE_3__* band_data; TYPE_1__ mac_header; scalar_t__ buf; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct ieee80211_rateset {int rs_nrates; } ;
struct ieee80211_frame {int* i_fc; int * i_seq; int * i_dur; int i_addr3; int i_addr2; int i_addr1; } ;
struct TYPE_7__ {void* len; void* offset; } ;
struct TYPE_6__ {scalar_t__ sku_cap_band_52GHz_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 struct ieee80211vap* FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 int * FUNC_3 (int *,struct ieee80211com*) ;
 int * FUNC_4 (int *,struct ieee80211_rateset*) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,struct ieee80211_rateset*) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct iwm_softc*) ;
 int FUNC_8 (struct iwm_scan_probe_req*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct iwm_softc *VAR_11, struct iwm_scan_probe_req *VAR_12)
{
 struct ieee80211com *VAR_13 = &VAR_11->sc_ic;
 struct ieee80211vap *VAR_14 = FUNC_1(&VAR_13->ic_vaps);
 struct ieee80211_frame *VAR_15 = (struct ieee80211_frame *)VAR_12->buf;
 struct ieee80211_rateset *VAR_16;
 size_t VAR_17 = sizeof(VAR_12->buf);
 uint8_t *VAR_18, *VAR_19;

 FUNC_8(VAR_12, 0, sizeof(*VAR_12));


 if (VAR_17 < sizeof(*VAR_15) + 2)
  return VAR_0;





 VAR_15->i_fc[0] = VAR_4 | VAR_3 |
     VAR_2;
 VAR_15->i_fc[1] = VAR_5;
 FUNC_0(VAR_15->i_addr1, VAR_10);
 FUNC_0(VAR_15->i_addr2, VAR_14 ? VAR_14->iv_myaddr : VAR_13->ic_macaddr);
 FUNC_0(VAR_15->i_addr3, VAR_10);
 *(uint16_t *)&VAR_15->i_dur[0] = 0;
 *(uint16_t *)&VAR_15->i_seq[0] = 0;

 VAR_18 = (uint8_t *)(VAR_15 + 1);
 VAR_18 = FUNC_5(VAR_18, ((void*)0), 0);


 VAR_12->mac_header.offset = 0;
 VAR_12->mac_header.len = FUNC_2(VAR_18 - (uint8_t *)VAR_15);
 VAR_17 -= VAR_18 - (uint8_t *)VAR_15;


 VAR_16 = &VAR_13->ic_sup_rates[VAR_8];
 if (VAR_16->rs_nrates > VAR_9) {
  if (VAR_17 < 4 + VAR_16->rs_nrates)
   return VAR_0;
 } else if (VAR_17 < 2 + VAR_16->rs_nrates) {
  return VAR_0;
 }
 VAR_12->band_data[0].offset = FUNC_2(VAR_18 - (uint8_t *)VAR_15);
 VAR_19 = VAR_18;
 VAR_18 = FUNC_4(VAR_18, VAR_16);
 if (VAR_16->rs_nrates > VAR_9)
  VAR_18 = FUNC_6(VAR_18, VAR_16);
 VAR_12->band_data[0].len = FUNC_2(VAR_18 - VAR_19);
 VAR_17 -= VAR_18 - VAR_19;

 if (FUNC_7(VAR_11)) {
  if (VAR_17 < 3)
   return VAR_0;
  *VAR_18++ = VAR_1;
  *VAR_18++ = 1;
  *VAR_18++ = 0;
  VAR_17 -= 3;
 }

 if (VAR_11->nvm_data->sku_cap_band_52GHz_enable) {

  VAR_16 = &VAR_13->ic_sup_rates[VAR_7];
  if (VAR_16->rs_nrates > VAR_9) {
   if (VAR_17 < 4 + VAR_16->rs_nrates)
    return VAR_0;
  } else if (VAR_17 < 2 + VAR_16->rs_nrates) {
   return VAR_0;
  }
  VAR_12->band_data[1].offset = FUNC_2(VAR_18 - (uint8_t *)VAR_15);
  VAR_19 = VAR_18;
  VAR_18 = FUNC_4(VAR_18, VAR_16);
  if (VAR_16->rs_nrates > VAR_9)
   VAR_18 = FUNC_6(VAR_18, VAR_16);
  VAR_12->band_data[1].len = FUNC_2(VAR_18 - VAR_19);
  VAR_17 -= VAR_18 - VAR_19;
 }


 VAR_12->common_data.offset = FUNC_2(VAR_18 - (uint8_t *)VAR_15);
 VAR_19 = VAR_18;
 VAR_12->common_data.len = FUNC_2(VAR_18 - VAR_19);

 return 0;
}
