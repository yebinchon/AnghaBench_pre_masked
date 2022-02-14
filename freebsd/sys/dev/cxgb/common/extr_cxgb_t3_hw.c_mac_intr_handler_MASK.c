
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int xaui_pcs_align_change; int xaui_pcs_ctc_err; int serdes_signal_loss; int rx_fifo_ovfl; int tx_fifo_urun; int rx_fifo_parity_err; int tx_fifo_parity_err; } ;
struct cmac {scalar_t__ offset; TYPE_1__ stats; } ;
struct port_info {int link_fault; struct cmac mac; } ;
typedef int adapter_t ;
struct TYPE_4__ {unsigned int nports0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 struct port_info* FUNC_4 (int *,unsigned int) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct port_info*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__,int,int ) ;
 int FUNC_10 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_11(adapter_t *VAR_12, unsigned int VAR_13)
{
 u32 VAR_14;
 struct port_info *VAR_15;
 struct cmac *VAR_16;

 VAR_13 = VAR_13 == 0 ? 0 : FUNC_5(VAR_12)->nports0;
 VAR_15 = FUNC_4(VAR_12, VAR_13);
 VAR_16 = &VAR_15->mac;







 VAR_14 = (FUNC_8(VAR_12, VAR_0 + VAR_16->offset)
   & ~(VAR_2));

 if (VAR_14 & FUNC_3(VAR_10)) {
  VAR_16->stats.tx_fifo_parity_err++;
  FUNC_0(VAR_12, "port%d: MAC TX FIFO parity error\n", VAR_13);
 }
 if (VAR_14 & FUNC_1(VAR_8)) {
  VAR_16->stats.rx_fifo_parity_err++;
  FUNC_0(VAR_12, "port%d: MAC RX FIFO parity error\n", VAR_13);
 }
 if (VAR_14 & VAR_3)
  VAR_16->stats.tx_fifo_urun++;
 if (VAR_14 & VAR_2)
  VAR_16->stats.rx_fifo_ovfl++;
 if (VAR_14 & FUNC_2(VAR_9))
  VAR_16->stats.serdes_signal_loss++;
 if (VAR_14 & VAR_5)
  VAR_16->stats.xaui_pcs_ctc_err++;
 if (VAR_14 & VAR_4)
  VAR_16->stats.xaui_pcs_align_change++;
 if (VAR_14 & VAR_6 &
     FUNC_8(VAR_12, VAR_1 + VAR_16->offset)) {
  FUNC_9(VAR_12, VAR_1 + VAR_16->offset,
      VAR_6, 0);


  VAR_15->link_fault = VAR_7;
  FUNC_7(VAR_15);
 }

 if (VAR_14 & VAR_11)
  FUNC_6(VAR_12);

 FUNC_10(VAR_12, VAR_0 + VAR_16->offset, VAR_14);
 return VAR_14 != 0;
}
