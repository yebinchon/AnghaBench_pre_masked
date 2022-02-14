
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int num_queues; int unit; struct bxe_fastpath* fp; } ;
struct bxe_fastpath {int rx_mtx_name; int rx_mtx; int tx_mtx_name; int tx_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_1)
{
    int VAR_2;
    struct bxe_fastpath *VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++) {

        VAR_3 = &VAR_1->fp[VAR_2];

        FUNC_1(VAR_3->tx_mtx_name, sizeof(VAR_3->tx_mtx_name),
            "bxe%d_fp%d_tx_lock", VAR_1->unit, VAR_2);
        FUNC_0(&VAR_3->tx_mtx, VAR_3->tx_mtx_name, ((void*)0), VAR_0);

        FUNC_1(VAR_3->rx_mtx_name, sizeof(VAR_3->rx_mtx_name),
            "bxe%d_fp%d_rx_lock", VAR_1->unit, VAR_2);
        FUNC_0(&VAR_3->rx_mtx, VAR_3->rx_mtx_name, ((void*)0), VAR_0);
    }
}
