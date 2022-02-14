
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tx_pkts; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_8__ {scalar_t__ prod; scalar_t__ zero_fill1; TYPE_2__ header; } ;
struct TYPE_7__ {TYPE_4__ data; } ;
struct bxe_fastpath {TYPE_1__ eth_q_stats; scalar_t__ tx_bd_cons; scalar_t__ tx_bd_prod; scalar_t__ tx_pkt_cons; scalar_t__ tx_pkt_prod; TYPE_3__ tx_db; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bxe_fastpath *VAR_1)
{
    FUNC_0(VAR_1->tx_db.data.header.data, VAR_0, 1);
    VAR_1->tx_db.data.zero_fill1 = 0;
    VAR_1->tx_db.data.prod = 0;

    VAR_1->tx_pkt_prod = 0;
    VAR_1->tx_pkt_cons = 0;
    VAR_1->tx_bd_prod = 0;
    VAR_1->tx_bd_cons = 0;
    VAR_1->eth_q_stats.tx_pkts = 0;
}
