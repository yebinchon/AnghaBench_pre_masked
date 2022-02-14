
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_fastpath {int tx_mtx; int tx_pkts_freed; scalar_t__ tx_br; } ;
struct mbuf {int dummy; } ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_3__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 struct mbuf* FUNC_1 (struct ifnet*,scalar_t__) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0)
{
 int VAR_1;
 struct qlnx_fastpath *VAR_2;
 struct mbuf *VAR_3;
 qlnx_host_t *VAR_4;

 VAR_4 = (qlnx_host_t *)VAR_0->if_softc;

 FUNC_0(VAR_4, "enter\n");

 for (VAR_1 = 0; VAR_1 < VAR_4->num_rss; VAR_1++) {

  VAR_2 = &VAR_4->fp_array[VAR_1];

  if (VAR_2 == ((void*)0))
   continue;

  if (VAR_2->tx_br) {
   FUNC_3(&VAR_2->tx_mtx);

   while ((VAR_3 = FUNC_1(VAR_0, VAR_2->tx_br)) != ((void*)0)) {
    VAR_2->tx_pkts_freed++;
    FUNC_2(VAR_3);
   }
   FUNC_4(&VAR_2->tx_mtx);
  }
 }
 FUNC_0(VAR_4, "exit\n");

 return;
}
