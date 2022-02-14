
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mac_stats {int rx_fifo_ovfl; int rx_pause; int rx_frames; int tx_frames; } ;
struct cmac {unsigned int offset; int txen; scalar_t__ toggle_cnt; int rx_ocnt; void* rx_xcnt; int rx_pause; int rx_mcnt; void* tx_xcnt; int tx_tcnt; int tx_mcnt; int ext_port; scalar_t__ multiport; struct mac_stats stats; TYPE_2__* adapter; } ;
struct TYPE_7__ {scalar_t__ rev; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct cmac*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;

int FUNC_7(struct cmac *VAR_14, int VAR_15)
{
 int VAR_16 = FUNC_2(VAR_14);
 adapter_t *VAR_17 = VAR_14->adapter;
 unsigned int VAR_18 = VAR_14->offset;
 struct mac_stats *VAR_19 = &VAR_14->stats;

 if (VAR_14->multiport)
  return FUNC_5(VAR_17, VAR_14->ext_port, VAR_15);

 if (VAR_15 & VAR_12) {
  FUNC_6(VAR_17, VAR_0, VAR_2 + VAR_16);
  FUNC_6(VAR_17, VAR_1,
        VAR_17->params.rev == VAR_13 ?
        0xc4ffff01 : 0xc0ede401);
  FUNC_6(VAR_17, VAR_0, VAR_4);
  FUNC_4(VAR_17, VAR_1, 1 << VAR_16,
     VAR_17->params.rev == VAR_13 ?
     0 : 1 << VAR_16);

  FUNC_6(VAR_17, VAR_7 + VAR_18, VAR_10);

  FUNC_6(VAR_17, VAR_0, VAR_3 + VAR_16);
  VAR_14->tx_mcnt = VAR_19->tx_frames;
  VAR_14->tx_tcnt = (FUNC_0(FUNC_3(VAR_17,
              VAR_1)));
  VAR_14->tx_xcnt = (FUNC_1(FUNC_3(VAR_17,
      VAR_8 +
      VAR_18)));
  VAR_14->rx_mcnt = VAR_19->rx_frames;
  VAR_14->rx_pause = VAR_19->rx_pause;
  VAR_14->rx_xcnt = (FUNC_1(FUNC_3(VAR_17,
      VAR_6 +
      VAR_18)));
  VAR_14->rx_ocnt = VAR_19->rx_fifo_ovfl;
  VAR_14->txen = VAR_10;
  VAR_14->toggle_cnt = 0;
 }
 if (VAR_15 & VAR_11)
  FUNC_6(VAR_17, VAR_5 + VAR_18, VAR_9);
 return 0;
}
