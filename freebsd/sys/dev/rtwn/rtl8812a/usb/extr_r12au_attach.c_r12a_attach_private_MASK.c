
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int rs_flags; int ampdu_max_time; int rs_iq_calib_sw; int rs_iq_calib_fw_supported; int rs_crystalcap_write; int rs_init_ampdu_fwhw; int rs_init_burstlen; int rs_set_band_5ghz; int rs_set_band_2ghz; int rs_fix_spur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r12a_softc* FUNC_0 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_13)
{
 struct r12a_softc *VAR_14;

 VAR_14 = FUNC_0(sizeof(struct r12a_softc), VAR_0, VAR_1 | VAR_2);

 VAR_14->rs_flags = VAR_4 | VAR_3;

 VAR_14->rs_fix_spur = VAR_6;
 VAR_14->rs_set_band_2ghz = VAR_9;
 VAR_14->rs_set_band_5ghz = VAR_10;
 VAR_14->rs_init_burstlen = VAR_12;
 VAR_14->rs_init_ampdu_fwhw = VAR_11;
 VAR_14->rs_crystalcap_write = VAR_5;

 VAR_14->rs_iq_calib_fw_supported = VAR_7;

 VAR_14->rs_iq_calib_sw = VAR_8;

 VAR_14->ampdu_max_time = 0x70;

 VAR_13->sc_priv = VAR_14;
}
