
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int txr_idx; int * tx_br; int tx_mtx; int tx_mtx_name; } ;
typedef TYPE_1__ qla_tx_fp_t ;
struct TYPE_7__ {int pci_func; int pci_dev; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(qla_host_t *VAR_5, qla_tx_fp_t *VAR_6)
{
        FUNC_3(VAR_6->tx_mtx_name, sizeof(VAR_6->tx_mtx_name),
                "qla%d_fp%d_tx_mq_lock", VAR_5->pci_func, VAR_6->txr_idx);

        FUNC_2(&VAR_6->tx_mtx, VAR_6->tx_mtx_name, ((void*)0), VAR_1);

        VAR_6->tx_br = FUNC_1(VAR_4, VAR_2,
                                   VAR_3, &VAR_6->tx_mtx);
        if (VAR_6->tx_br == ((void*)0)) {
            FUNC_0(VAR_5, (VAR_5->pci_dev, "buf_ring_alloc failed for "
                " fp[%d, %d]\n", VAR_5->pci_func, VAR_6->txr_idx));
            return (-VAR_0);
        }
        return 0;
}
