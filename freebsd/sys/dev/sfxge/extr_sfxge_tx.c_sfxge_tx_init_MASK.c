
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sfxge_intr {scalar_t__ state; int n_alloc; } ;
struct sfxge_softc {int txq_count; scalar_t__ txq_dynamic_cksum_toggle_supported; int * txqs_node; int dev; int tso_fw_assisted; struct sfxge_intr intr; int enp; } ;
struct TYPE_3__ {int enc_features; int enc_fw_assisted_tso_v2_enabled; int enc_fw_assisted_tso_enabled; } ;
typedef TYPE_1__ efx_nic_cfg_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sfxge_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_2 (int ,int ,int ,char*,int ,int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,scalar_t__) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (struct sfxge_softc*,int) ;
 int FUNC_9 (struct sfxge_softc*,int,int,int) ;
 int FUNC_10 (struct sfxge_softc*) ;

int
FUNC_11(struct sfxge_softc *VAR_21)
{
 const efx_nic_cfg_t *VAR_22 = FUNC_6(VAR_21->enp);
 struct sfxge_intr *VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_23 = &VAR_21->intr;

 FUNC_0(VAR_23->state == VAR_10,
     ("intr->state != SFXGE_INTR_INITIALIZED"));

 if (VAR_18 <= 0) {
  FUNC_7(VAR_6, "%s=%d must be greater than 0",
      VAR_11, VAR_18);
  VAR_25 = VAR_4;
  goto fail_tx_dpl_get_max;
 }
 if (VAR_19 <= 0) {
  FUNC_7(VAR_6, "%s=%d must be greater than 0",
      VAR_12,
      VAR_19);
  VAR_25 = VAR_4;
  goto fail_tx_dpl_get_non_tcp_max;
 }
 if (VAR_20 < 0) {
  FUNC_7(VAR_6, "%s=%d must be greater or equal to 0",
      VAR_13, VAR_20);
  VAR_25 = VAR_4;
  goto fail_tx_dpl_put_max;
 }

 VAR_21->txq_count = FUNC_1(VAR_21) - 1 + VAR_21->intr.n_alloc;

 VAR_21->tso_fw_assisted = VAR_17;
 if ((~VAR_22->enc_features & VAR_2) ||
     (!VAR_22->enc_fw_assisted_tso_enabled))
  VAR_21->tso_fw_assisted &= ~VAR_8;
 if ((~VAR_22->enc_features & VAR_3) ||
     (!VAR_22->enc_fw_assisted_tso_v2_enabled))
  VAR_21->tso_fw_assisted &= ~VAR_9;

 VAR_21->txqs_node = FUNC_2(
  FUNC_4(VAR_21->dev),
  FUNC_3(FUNC_5(VAR_21->dev)),
  VAR_7, "txq", VAR_1, ((void*)0), "Tx queues");
 if (VAR_21->txqs_node == ((void*)0)) {
  VAR_25 = VAR_5;
  goto fail_txq_node;
 }


 if (VAR_21->txq_dynamic_cksum_toggle_supported == VAR_0) {
  if ((VAR_25 = FUNC_9(VAR_21, VAR_16,
      VAR_16, 0)) != 0)
   goto fail;

  if ((VAR_25 = FUNC_9(VAR_21, VAR_14,
      VAR_14, 0)) != 0)
   goto fail2;
 }

 for (VAR_24 = 0;
      VAR_24 < VAR_21->txq_count - FUNC_1(VAR_21) + 1;
      VAR_24++) {
  if ((VAR_25 = FUNC_9(VAR_21, FUNC_1(VAR_21) - 1 + VAR_24,
      VAR_15, VAR_24)) != 0)
   goto fail3;
 }

 FUNC_10(VAR_21);

 return (0);

fail3:
 while (--VAR_24 >= 0)
  FUNC_8(VAR_21, VAR_15 + VAR_24);

 FUNC_8(VAR_21, VAR_14);

fail2:
 FUNC_8(VAR_21, VAR_16);

fail:
fail_txq_node:
 VAR_21->txq_count = 0;
fail_tx_dpl_put_max:
fail_tx_dpl_get_non_tcp_max:
fail_tx_dpl_get_max:
 return (VAR_25);
}
