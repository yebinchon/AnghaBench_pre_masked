
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rtwn_softc {struct r12a_softc* sc_priv; int sc_dev; } ;
struct r12a_softc {int rs_flags; int ampdu_max_time; int ac_usb_dma_size; int ac_usb_dma_time; int rs_iq_calib_sw; int rs_iq_calib_fw_supported; int rs_crystalcap_write; int rs_init_ampdu_fwhw; int rs_init_burstlen; int rs_set_band_5ghz; int rs_set_band_2ghz; int rs_fix_spur; scalar_t__ rs_radar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,scalar_t__*,scalar_t__,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 struct r12a_softc* FUNC_4 (int,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_15)
{
 struct sysctl_ctx_list *VAR_16 = FUNC_2(VAR_15->sc_dev);
 struct sysctl_oid *VAR_17 = FUNC_3(VAR_15->sc_dev);
 struct r12a_softc *VAR_18;

 VAR_18 = FUNC_4(sizeof(struct r12a_softc), VAR_1, VAR_2 | VAR_3);

 VAR_18->rs_flags = VAR_6 | VAR_5;

 VAR_18->rs_radar = 0;
 FUNC_0(VAR_16, FUNC_1(VAR_17), VAR_4,
     "radar_detection", VAR_0, &VAR_18->rs_radar,
     VAR_18->rs_radar, "Enable radar detection (untested)");

 VAR_18->rs_fix_spur = VAR_14;
 VAR_18->rs_set_band_2ghz = VAR_12;
 VAR_18->rs_set_band_5ghz = VAR_13;
 VAR_18->rs_init_burstlen = VAR_7;
 VAR_18->rs_init_ampdu_fwhw = VAR_9;
 VAR_18->rs_crystalcap_write = VAR_8;

 VAR_18->rs_iq_calib_fw_supported = VAR_10;

 VAR_18->rs_iq_calib_sw = VAR_11;

 VAR_18->ampdu_max_time = 0x5e;

 VAR_18->ac_usb_dma_size = 0x01;
 VAR_18->ac_usb_dma_time = 0x10;

 VAR_15->sc_priv = VAR_18;
}
