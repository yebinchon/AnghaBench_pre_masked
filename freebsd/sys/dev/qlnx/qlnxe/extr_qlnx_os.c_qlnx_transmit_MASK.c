
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct qlnx_fastpath {int fp_task; int * fp_taskqueue; int * tx_br; int tx_mtx; scalar_t__ tx_pkts_completed; int tx_pkts_compl_ctx; scalar_t__ tx_pkts_transmitted; int tx_pkts_trans_ctx; } ;
struct TYPE_4__ {int flowid; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_5__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (struct ifnet*,int *,struct mbuf*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ifnet*,struct qlnx_fastpath*,struct mbuf*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_4, struct mbuf *VAR_5)
{
        qlnx_host_t *VAR_6 = (qlnx_host_t *)VAR_4->if_softc;
        struct qlnx_fastpath *VAR_7;
        int VAR_8 = 0, VAR_9 = 0;





        FUNC_1(VAR_6, "enter\n");




        if (VAR_5->m_flags & VAR_2)

                VAR_8 = (VAR_5->m_pkthdr.flowid % VAR_0) %
     VAR_6->num_rss;

        VAR_7 = &VAR_6->fp_array[VAR_8];

        if (VAR_7->tx_br == ((void*)0)) {
                VAR_9 = VAR_1;
                goto qlnx_transmit_exit;
        }

        if (FUNC_3(&VAR_7->tx_mtx)) {






                        VAR_9 = FUNC_5(VAR_4, VAR_7, VAR_5);





                        FUNC_4(&VAR_7->tx_mtx);
        } else {
                if (VAR_5 != ((void*)0) && (VAR_7->fp_taskqueue != ((void*)0))) {
                        VAR_9 = FUNC_2(VAR_4, VAR_7->tx_br, VAR_5);
                        FUNC_6(VAR_7->fp_taskqueue, &VAR_7->fp_task);
                }
        }

qlnx_transmit_exit:

        FUNC_1(VAR_6, "exit ret = %d\n", VAR_9);
        return VAR_9;
}
