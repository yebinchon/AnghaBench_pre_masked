
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mge_softc {int mge_ver; int mge_mtu; int mge_tfut_ipg_max; int mge_rx_ipg_max; int mge_tx_arb_cfg; int mge_tx_tok_cfg; int mge_tx_tok_cnt; int mge_intr_cnt; int mge_hw_csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void
FUNC_1(struct mge_softc *VAR_11)
{
 uint32_t VAR_12, VAR_13;

 FUNC_0(&VAR_12, &VAR_13);
 if (VAR_12 == VAR_0 || VAR_12 == VAR_2 ||
     VAR_12 == VAR_1 ||
     VAR_12 == VAR_6 ||
     VAR_12 == VAR_7 ||
     (VAR_12 & VAR_5) == VAR_4) {
  VAR_11->mge_ver = 2;
  VAR_11->mge_mtu = 0x4e8;
  VAR_11->mge_tfut_ipg_max = 0xFFFF;
  VAR_11->mge_rx_ipg_max = 0xFFFF;
  VAR_11->mge_tx_arb_cfg = 0xFC0000FF;
  VAR_11->mge_tx_tok_cfg = 0xFFFF7FFF;
  VAR_11->mge_tx_tok_cnt = 0x3FFFFFFF;
 } else {
  VAR_11->mge_ver = 1;
  VAR_11->mge_mtu = 0x458;
  VAR_11->mge_tfut_ipg_max = 0x3FFF;
  VAR_11->mge_rx_ipg_max = 0x3FFF;
  VAR_11->mge_tx_arb_cfg = 0x000000FF;
  VAR_11->mge_tx_tok_cfg = 0x3FFFFFFF;
  VAR_11->mge_tx_tok_cnt = 0x3FFFFFFF;
 }
 if (VAR_12 == VAR_3)
  VAR_11->mge_intr_cnt = 1;
 else
  VAR_11->mge_intr_cnt = 2;

 if (VAR_12 == VAR_8 || VAR_12 == VAR_9 || VAR_12 == VAR_10)
  VAR_11->mge_hw_csum = 0;
 else
  VAR_11->mge_hw_csum = 1;
}
