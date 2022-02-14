
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_17__ {int n_scan_channels; } ;
struct TYPE_18__ {TYPE_6__ ucode_capa; } ;
struct TYPE_12__ {struct ieee80211_scan_state* ic_scan; } ;
struct iwm_softc {TYPE_7__ sc_fw; TYPE_1__ sc_ic; } ;
struct iwm_scan_req_umac_tail {TYPE_10__* schedule; int preq; TYPE_9__* direct_scan; } ;
struct TYPE_15__ {void* count; scalar_t__ flags; } ;
struct TYPE_16__ {int active_dwell; int passive_dwell; int fragmented_dwell; int extended_dwell; scalar_t__ data; TYPE_4__ channel; void* scan_priority; } ;
struct TYPE_13__ {void* count; scalar_t__ flags; } ;
struct TYPE_14__ {int active_dwell; int passive_dwell; int fragmented_dwell; int adwell_default_n_aps_social; int adwell_default_n_aps; scalar_t__ data; TYPE_2__ channel; void* scan_priority; void* adwell_max_budget; } ;
struct iwm_scan_req_umac {TYPE_5__ v1; TYPE_3__ v7; void* ooc_priority; void* general_flags; } ;
struct iwm_scan_channel_cfg_umac {int dummy; } ;
struct iwm_host_cmd {int* len; void** data; int flags; int id; } ;
struct ieee80211_scan_state {TYPE_8__* ss_ssid; int ss_nssid; } ;
struct TYPE_20__ {void* len; int ssid; int id; } ;
struct TYPE_19__ {int ssid; int len; } ;
struct TYPE_11__ {int iter_count; scalar_t__ interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwm_softc*,int ,char*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct iwm_scan_req_umac*,int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct iwm_softc*,int ) ;
 int FUNC_7 (struct iwm_softc*,int *) ;
 scalar_t__ FUNC_8 (struct iwm_softc*) ;
 size_t FUNC_9 (struct iwm_softc*) ;
 scalar_t__ FUNC_10 (struct iwm_softc*) ;
 void* FUNC_11 (struct iwm_softc*,struct iwm_scan_channel_cfg_umac*,scalar_t__) ;
 int FUNC_12 (struct iwm_softc*,struct iwm_host_cmd*) ;
 struct iwm_scan_req_umac* FUNC_13 (size_t,int ,int) ;
 int FUNC_14 (int ,int ,void*) ;

int
FUNC_15(struct iwm_softc *VAR_23)
{
 struct iwm_host_cmd VAR_24 = {
  .id = FUNC_5(VAR_12, VAR_3, 0),
  .len = 0, 
  .data = ((void*)0), 
  .flags = VAR_4,
 };
 struct ieee80211_scan_state *VAR_25 = VAR_23->sc_ic.ic_scan;
 struct iwm_scan_req_umac *VAR_26;
 struct iwm_scan_req_umac_tail *VAR_27;
 size_t VAR_28;
 uint16_t VAR_29;
 uint8_t VAR_30, VAR_31, VAR_32;
 int VAR_33;

 VAR_28 = FUNC_9(VAR_23);
 if (VAR_28 > VAR_6)
  return VAR_0;
 VAR_26 = FUNC_13(VAR_28, VAR_20, VAR_21 | VAR_22);
 if (VAR_26 == ((void*)0))
  return VAR_0;

 VAR_24.len[0] = (uint16_t)VAR_28;
 VAR_24.data[0] = (void *)VAR_26;

 FUNC_0(VAR_23, VAR_5, "Handling ieee80211 scan request\n");

 VAR_32 = FUNC_1(VAR_25->ss_nssid, VAR_7);

 VAR_29 = VAR_17 |
     VAR_15;
 if (!FUNC_6(VAR_23, VAR_13))
  VAR_29 |= VAR_14;
 if (FUNC_8(VAR_23))
  VAR_29 |= VAR_19;
 if (VAR_32 != 0)
  VAR_29 |= VAR_18;
 else
  VAR_29 |= VAR_16;

 VAR_30 = 0;
 if (FUNC_10(VAR_23))
  VAR_30 = VAR_9 |
      VAR_10 |
      VAR_8;

 VAR_26->general_flags = FUNC_3(VAR_29);
 VAR_26->ooc_priority = FUNC_4(VAR_11);


 if (FUNC_6(VAR_23, VAR_13)) {
  VAR_26->v7.active_dwell = 10;
  VAR_26->v7.passive_dwell = 110;
  VAR_26->v7.fragmented_dwell = 44;
  VAR_26->v7.adwell_default_n_aps_social = 10;
  VAR_26->v7.adwell_default_n_aps = 2;
  VAR_26->v7.adwell_max_budget = FUNC_3(300);
  VAR_26->v7.scan_priority = FUNC_4(VAR_11);
  VAR_26->v7.channel.flags = VAR_30;
  VAR_26->v7.channel.count = FUNC_11(VAR_23,
      (struct iwm_scan_channel_cfg_umac *)VAR_26->v7.data, VAR_32);

  VAR_27 = (void *)((char *)&VAR_26->v7.data +
      sizeof(struct iwm_scan_channel_cfg_umac) *
      VAR_23->sc_fw.ucode_capa.n_scan_channels);
 } else {
  VAR_26->v1.active_dwell = 10;
  VAR_26->v1.passive_dwell = 110;
  VAR_26->v1.fragmented_dwell = 44;
  VAR_26->v1.extended_dwell = 90;
  VAR_26->v1.scan_priority = FUNC_4(VAR_11);
  VAR_26->v1.channel.flags = VAR_30;
  VAR_26->v1.channel.count = FUNC_11(VAR_23,
      (struct iwm_scan_channel_cfg_umac *)VAR_26->v1.data, VAR_32);

  VAR_27 = (void *)((char *)&VAR_26->v1.data +
      sizeof(struct iwm_scan_channel_cfg_umac) *
      VAR_23->sc_fw.ucode_capa.n_scan_channels);
 }


 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++) {
  VAR_27->direct_scan[VAR_31].id = VAR_1;
  VAR_27->direct_scan[VAR_31].len = FUNC_1(VAR_25->ss_ssid[VAR_31].len,
      VAR_2);
  FUNC_14(VAR_27->direct_scan[VAR_31].ssid, VAR_25->ss_ssid[VAR_31].ssid,
      VAR_27->direct_scan[VAR_31].len);

 }

 VAR_33 = FUNC_7(VAR_23, &VAR_27->preq);
 if (VAR_33) {
  FUNC_2(VAR_26, VAR_20);
  return VAR_33;
 }


 VAR_27->schedule[0].interval = 0;
 VAR_27->schedule[0].iter_count = 1;

 VAR_33 = FUNC_12(VAR_23, &VAR_24);
 if (!VAR_33)
  FUNC_0(VAR_23, VAR_5,
      "Scan request was sent successfully\n");
 FUNC_2(VAR_26, VAR_20);
 return VAR_33;
}
