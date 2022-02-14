
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_udma_q_params {int cdesc_size; int adapter_rev_id; } ;
struct al_udma {int * udma_q; } ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; int rev_id; struct al_udma rx_udma; struct al_udma tx_udma; int name; } ;
typedef enum al_udma_type { ____Placeholder_al_udma_type } al_udma_type ;
struct TYPE_3__ {int out_cfg; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct al_udma*,size_t,struct al_udma_q_params*) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(struct al_hal_eth_adapter *VAR_5, enum al_udma_type VAR_6, uint32_t VAR_7,
        struct al_udma_q_params *VAR_8)
{
 struct al_udma *VAR_9;
 int VAR_10;

 FUNC_1("eth [%s]: config UDMA %s queue %d\n", VAR_5->name,
   VAR_6 == VAR_4 ? "Tx" : "Rx", VAR_7);

 if (VAR_6 == VAR_4) {
  VAR_9 = &VAR_5->tx_udma;
 } else {
  VAR_9 = &VAR_5->rx_udma;
 }

 VAR_8->adapter_rev_id = VAR_5->rev_id;

 VAR_10 = FUNC_3(VAR_9, VAR_7, VAR_8);

 if (VAR_10)
  return VAR_10;

 if (VAR_6 == VAR_3) {
  VAR_10 = FUNC_4(&VAR_9->udma_q[VAR_7],
    VAR_1, VAR_0);

  FUNC_0(VAR_8->cdesc_size <= 32);

  if (VAR_8->cdesc_size > 16)
   FUNC_2(&VAR_5->ec_regs_base->rfw.out_cfg,
     VAR_2, 2);
 }
 return VAR_10;
}
