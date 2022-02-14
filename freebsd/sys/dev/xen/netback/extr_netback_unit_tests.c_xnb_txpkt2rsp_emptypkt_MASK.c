
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int txs_backup ;
typedef int txb_backup ;
struct xnb_pkt {scalar_t__ list_len; } ;
struct TYPE_8__ {int req_cons; } ;
typedef TYPE_1__ netif_tx_sring_t ;
typedef TYPE_1__ netif_tx_back_ring_t ;
struct TYPE_9__ {TYPE_1__* txs; TYPE_1__ txb; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (struct xnb_pkt*,TYPE_1__*,int ) ;
 int FUNC_3 (struct xnb_pkt*,TYPE_1__*,int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 struct xnb_pkt VAR_4;
 netif_tx_back_ring_t VAR_5 = VAR_0.txb;
 netif_tx_sring_t VAR_6 = *VAR_0.txs;
 VAR_4.list_len = 0;


 VAR_3 = FUNC_2(&VAR_4, &VAR_0.txb,
                             VAR_0.txb.req_cons);
 FUNC_3(&VAR_4, &VAR_0.txb, 0);
 FUNC_0(
     FUNC_1(&VAR_5, &VAR_0.txb, sizeof(VAR_5)) == 0);
 FUNC_0(
     FUNC_1(&VAR_6, VAR_0.txs, sizeof(VAR_6)) == 0);
}
