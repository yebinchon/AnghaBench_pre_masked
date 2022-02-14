
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fcs_err; int ucast_tx_pkts; int ucast_rx_pkts; } ;
union ecore_mcp_protocol_stats {TYPE_2__ lan_stats; } ;
struct TYPE_5__ {int tx_ucast_pkts; int rx_ucast_pkts; } ;
struct ecore_eth_stats {TYPE_1__ common; } ;
struct ecore_dev {int dummy; } ;
struct TYPE_7__ {int err_get_proto_invalid_type; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef enum ecore_mcp_protocol_type { ____Placeholder_ecore_mcp_protocol_type } ecore_mcp_protocol_type ;



 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_eth_stats*) ;

void
FUNC_2(void *VAR_0, int VAR_1, void *VAR_2)
{
 enum ecore_mcp_protocol_type VAR_3;
 union ecore_mcp_protocol_stats *VAR_4;
 struct ecore_eth_stats VAR_5;
 qlnx_host_t *VAR_6;

 VAR_6 = VAR_0;
 VAR_4 = VAR_2;
 VAR_3 = VAR_1;

        switch (VAR_3) {

        case 128:
                FUNC_1((struct ecore_dev *)VAR_0, &VAR_5);
                VAR_4->lan_stats.ucast_rx_pkts = VAR_5.common.rx_ucast_pkts;
                VAR_4->lan_stats.ucast_tx_pkts = VAR_5.common.tx_ucast_pkts;
                VAR_4->lan_stats.fcs_err = -1;
                break;

 default:
  VAR_6->err_get_proto_invalid_type++;

  FUNC_0(VAR_6, "invalid protocol type 0x%x\n", VAR_3);
  break;
 }
 return;
}
