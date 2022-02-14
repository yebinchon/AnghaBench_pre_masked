
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iwm_softc {int sc_dev; TYPE_1__* cfg; } ;
struct iwm_mvm_add_sta_cmd {scalar_t__ sta_id; int addr; int tid_disable_tx; void* tfd_queue_msk; int station_type; void* mac_id_n_color; } ;
struct iwm_int_sta {scalar_t__ sta_id; int tfd_queue_msk; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ mqrx_supported; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwm_softc*,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct iwm_softc*) ;
 int FUNC_7 (struct iwm_softc*,int ,int ,struct iwm_mvm_add_sta_cmd*,int*) ;
 int FUNC_8 (struct iwm_mvm_add_sta_cmd*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct iwm_softc *VAR_6, struct iwm_int_sta *VAR_7,
    const uint8_t *VAR_8, uint16_t VAR_9, uint16_t VAR_10)
{
 struct iwm_mvm_add_sta_cmd VAR_11;
 int VAR_12;
 uint32_t VAR_13;

 FUNC_8(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.sta_id = VAR_7->sta_id;
 VAR_11.mac_id_n_color = FUNC_5(FUNC_2(VAR_9, VAR_10));
 if (VAR_7->sta_id == VAR_3 && VAR_6->cfg->mqrx_supported)
  VAR_11.station_type = VAR_5;

 VAR_11.tfd_queue_msk = FUNC_5(VAR_7->tfd_queue_msk);
 VAR_11.tid_disable_tx = FUNC_4(0xffff);

 if (VAR_8)
  FUNC_0(VAR_11.addr, VAR_8);

 VAR_12 = FUNC_7(VAR_6, VAR_1,
       FUNC_6(VAR_6),
       &VAR_11, &VAR_13);
 if (VAR_12)
  return VAR_12;

 switch (VAR_13 & VAR_2) {
 case 128:
  FUNC_1(VAR_6, VAR_4, "Internal station added.\n");
  return 0;
 default:
  VAR_12 = VAR_0;
  FUNC_3(VAR_6->sc_dev,
      "Add internal station failed, status=0x%x\n", VAR_13);
  break;
 }
 return VAR_12;
}
