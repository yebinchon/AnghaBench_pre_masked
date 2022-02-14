
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_fastpath {int tx_mtx; scalar_t__ tx_pkts_completed; int tx_pkts_compl_fp; scalar_t__ tx_pkts_transmitted; int tx_pkts_trans_fp; int tx_br; scalar_t__ edev; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_3__ {struct ifnet* ifp; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct ifnet*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ifnet*,struct qlnx_fastpath*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, int VAR_4)
{
        struct qlnx_fastpath *VAR_5;
        qlnx_host_t *VAR_6;
        struct ifnet *VAR_7;

        VAR_5 = VAR_3;

        if (VAR_5 == ((void*)0))
                return;

 VAR_6 = (qlnx_host_t *)VAR_5->edev;

 VAR_7 = VAR_6->ifp;

        if(VAR_7->if_drv_flags & VAR_0) {

                if (!FUNC_1(VAR_7, VAR_5->tx_br)) {

                        if(FUNC_2(&VAR_5->tx_mtx)) {






                                FUNC_4(VAR_7, VAR_5, ((void*)0));







                                FUNC_3(&VAR_5->tx_mtx);
                        }
                }
        }

        FUNC_0(VAR_6, "exit \n");
        return;
}
