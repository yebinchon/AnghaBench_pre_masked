
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hwrm_port_qstats_input {void* tx_stat_host_addr; void* rx_stat_host_addr; int port_id; int member_0; } ;
struct TYPE_4__ {int idi_paddr; } ;
struct TYPE_6__ {int idi_paddr; } ;
struct TYPE_5__ {int port_id; } ;
struct bnxt_softc {TYPE_1__ hw_tx_port_stats; TYPE_3__ hw_rx_port_stats; TYPE_2__ pf; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_port_qstats_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_port_qstats_input*,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_1)
{
 struct hwrm_port_qstats_input VAR_2 = {0};
 int VAR_3 = 0;

 FUNC_3(VAR_1, &VAR_2, VAR_0);

 VAR_2.port_id = FUNC_4(VAR_1->pf.port_id);
 VAR_2.rx_stat_host_addr = FUNC_5(VAR_1->hw_rx_port_stats.idi_paddr);
 VAR_2.tx_stat_host_addr = FUNC_5(VAR_1->hw_tx_port_stats.idi_paddr);

 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
 FUNC_1(VAR_1);

 return VAR_3;
}
