
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_vap {int color; int id; } ;
struct iwm_softc {int sc_dev; } ;
struct TYPE_2__ {int ni_bssid; int ni_vap; } ;
struct iwm_node {TYPE_1__ in_ni; } ;
struct iwm_mvm_add_sta_cmd {int add_modify; int station_flags; int addr; int tfd_queue_msk; int tid_disable_tx; int station_flags_msk; int mac_id_n_color; int sta_id; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iwm_vap* FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int* VAR_10 ;
 int FUNC_7 (struct iwm_softc*) ;
 int FUNC_8 (struct iwm_softc*,int ,int ,struct iwm_mvm_add_sta_cmd*,int*) ;

int
FUNC_9(struct iwm_softc *VAR_11, struct iwm_node *VAR_12,
 boolean_t VAR_13)
{
 struct iwm_vap *VAR_14 = FUNC_3(VAR_12->in_ni.ni_vap);
 struct iwm_mvm_add_sta_cmd VAR_15 = {
  .sta_id = VAR_4,
  .mac_id_n_color =
      FUNC_6(FUNC_2(VAR_14->id, VAR_14->color)),
  .add_modify = VAR_13 ? 1 : 0,
  .station_flags_msk = FUNC_6(VAR_6 |
          VAR_8),
  .tid_disable_tx = FUNC_5(0xffff),
 };
 int VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18 = 0, VAR_19 = 0;

 if (!VAR_13) {
  int VAR_20;
  for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
   VAR_15.tfd_queue_msk |=
       FUNC_6(1 << VAR_10[VAR_20]);
  }
  FUNC_0(&VAR_15.addr, VAR_12->in_ni.ni_bssid);
 }

 VAR_15.station_flags |=
  FUNC_6(VAR_18 << VAR_7);
 VAR_15.station_flags |=
  FUNC_6(VAR_19 << VAR_5);

 VAR_17 = 128;
 VAR_16 = FUNC_8(VAR_11, VAR_1,
       FUNC_7(VAR_11),
       &VAR_15, &VAR_17);
 if (VAR_16)
  return VAR_16;

 switch (VAR_17 & VAR_2) {
 case 128:
  FUNC_1(VAR_11, VAR_3, "IWM_ADD_STA PASSED\n");
  break;
 default:
  VAR_16 = VAR_0;
  FUNC_4(VAR_11->sc_dev, "IWM_ADD_STA failed\n");
  break;
 }

 return VAR_16;
}
