
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ath_softc {TYPE_2__* sc_ah; int sc_dev; } ;
struct TYPE_3__ {int ah_debug; int ah_ar5416_biasadj; int ah_dma_beacon_response_time; int ah_sw_beacon_response_time; int ah_additional_swba_backoff; int ah_force_full_reset; int ah_serialise_reg_war; } ;
struct TYPE_4__ {TYPE_1__ ah_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

void
FUNC_5(struct ath_softc *VAR_3)
{
 struct sysctl_oid *VAR_4 = FUNC_4(VAR_3->sc_dev);
 struct sysctl_ctx_list *VAR_5 = FUNC_3(VAR_3->sc_dev);
 struct sysctl_oid_list *VAR_6 = FUNC_2(VAR_4);

 VAR_4 = FUNC_1(VAR_5, VAR_6, VAR_2, "hal", VAR_0,
     ((void*)0), "Atheros HAL parameters");
 VAR_6 = FUNC_2(VAR_4);

 VAR_3->sc_ah->ah_config.ah_debug = 0;
 FUNC_0(VAR_5, VAR_6, VAR_2, "debug", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_debug, 0, "Atheros HAL debugging printfs");

 VAR_3->sc_ah->ah_config.ah_ar5416_biasadj = 0;
 FUNC_0(VAR_5, VAR_6, VAR_2, "ar5416_biasadj", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_ar5416_biasadj, 0,
     "Enable 2GHz AR5416 direction sensitivity bias adjust");

 VAR_3->sc_ah->ah_config.ah_dma_beacon_response_time = 2;
 FUNC_0(VAR_5, VAR_6, VAR_2, "dma_brt", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_dma_beacon_response_time, 0,
     "Atheros HAL DMA beacon response time");

 VAR_3->sc_ah->ah_config.ah_sw_beacon_response_time = 10;
 FUNC_0(VAR_5, VAR_6, VAR_2, "sw_brt", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_sw_beacon_response_time, 0,
     "Atheros HAL software beacon response time");

 VAR_3->sc_ah->ah_config.ah_additional_swba_backoff = 0;
 FUNC_0(VAR_5, VAR_6, VAR_2, "swba_backoff", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_additional_swba_backoff, 0,
     "Atheros HAL additional SWBA backoff time");

 VAR_3->sc_ah->ah_config.ah_force_full_reset = 0;
 FUNC_0(VAR_5, VAR_6, VAR_2, "force_full_reset", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_force_full_reset, 0,
     "Force full chip reset rather than a warm reset");




 FUNC_0(VAR_5, VAR_6, VAR_2, "serialise_reg_war", VAR_1,
     &VAR_3->sc_ah->ah_config.ah_serialise_reg_war, 0,
     "Force register access serialisation");
}
