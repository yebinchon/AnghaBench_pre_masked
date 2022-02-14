
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int num_tx_rings; int num_rds_rings; int num_sds_rings; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;
typedef int qla_drvr_state_tx_t ;
typedef int qla_drvr_state_sds_t ;
typedef int qla_drvr_state_rx_t ;
typedef int qla_drvr_state_hdr_t ;
typedef int q80_tx_cmd_t ;
typedef int q80_stat_desc_t ;
typedef int q80_recv_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5;

 VAR_5 = sizeof (qla_drvr_state_hdr_t);
 VAR_4 = FUNC_0(VAR_5, 64);

 VAR_5 = VAR_3->hw.num_tx_rings * (sizeof (qla_drvr_state_tx_t));
 VAR_4 += FUNC_0(VAR_5, 64);

 VAR_5 = VAR_3->hw.num_rds_rings * (sizeof (qla_drvr_state_rx_t));
 VAR_4 += FUNC_0(VAR_5, 64);

 VAR_5 = VAR_3->hw.num_sds_rings * (sizeof (qla_drvr_state_sds_t));
 VAR_4 += FUNC_0(VAR_5, 64);

 VAR_5 = sizeof(q80_tx_cmd_t) * VAR_2 * VAR_3->hw.num_tx_rings;
 VAR_4 += FUNC_0(VAR_5, 64);

 VAR_5 = sizeof(q80_recv_desc_t) * VAR_0 * VAR_3->hw.num_rds_rings;
 VAR_4 += FUNC_0(VAR_5, 64);

 VAR_5 = sizeof(q80_stat_desc_t) * VAR_1 *
   VAR_3->hw.num_sds_rings;
 VAR_4 += FUNC_0(VAR_5, 64);

 return (VAR_4);
}
