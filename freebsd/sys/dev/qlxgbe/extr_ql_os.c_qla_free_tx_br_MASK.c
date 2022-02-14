
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_5__ {int tx_mtx; int * tx_br; } ;
typedef TYPE_1__ qla_tx_fp_t ;
struct TYPE_6__ {struct ifnet* ifp; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mbuf* FUNC_1 (struct ifnet*,int *) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(qla_host_t *VAR_1, qla_tx_fp_t *VAR_2)
{
        struct mbuf *VAR_3;
        struct ifnet *VAR_4 = VAR_1->ifp;

        if (FUNC_4(&VAR_2->tx_mtx)) {

                if (VAR_2->tx_br != ((void*)0)) {

                        FUNC_5(&VAR_2->tx_mtx);

                        while ((VAR_3 = FUNC_1(VAR_4, VAR_2->tx_br)) != ((void*)0)) {
                                FUNC_2(VAR_3);
                        }

                        FUNC_6(&VAR_2->tx_mtx);

                        FUNC_0(VAR_2->tx_br, VAR_0);
                        VAR_2->tx_br = ((void*)0);
                }
                FUNC_3(&VAR_2->tx_mtx);
        }
        return;
}
