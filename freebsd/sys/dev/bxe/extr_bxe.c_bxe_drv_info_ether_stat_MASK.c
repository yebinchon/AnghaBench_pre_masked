
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct eth_stats_info {int rxq_size; int txq_size; scalar_t__ promiscuous_mode; int feature_flags; int mtu_size; scalar_t__ mac_local; int version; } ;
struct bxe_softc {int rx_ring_size; int tx_ring_size; int ifp; int mtu; TYPE_3__* sp_objs; TYPE_2__* sp; } ;
struct TYPE_8__ {int (* get_n_elements ) (struct bxe_softc*,TYPE_4__*,int ,scalar_t__,scalar_t__,int ) ;} ;
struct TYPE_7__ {TYPE_4__ mac_obj; } ;
struct TYPE_5__ {struct eth_stats_info ether_stat; } ;
struct TYPE_6__ {TYPE_1__ drv_info_to_mcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,TYPE_4__*,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_9)
{
    struct eth_stats_info *VAR_10 =
        &VAR_9->sp->drv_info_to_mcp.ether_stat;

    FUNC_1(VAR_10->version, VAR_0,
            VAR_3);


    VAR_9->sp_objs[0].mac_obj.get_n_elements(VAR_9, &VAR_9->sp_objs[0].mac_obj,
                                          VAR_1,
                                          VAR_10->mac_local + VAR_8,
                                          VAR_8, VAR_2);

    VAR_10->mtu_size = VAR_9->mtu;

    VAR_10->feature_flags |= VAR_4;
    if (FUNC_0(VAR_9->ifp) & (VAR_6 | VAR_7)) {
        VAR_10->feature_flags |= VAR_5;
    }



    VAR_10->promiscuous_mode = 0;

    VAR_10->txq_size = VAR_9->tx_ring_size;
    VAR_10->rxq_size = VAR_9->rx_ring_size;
}
