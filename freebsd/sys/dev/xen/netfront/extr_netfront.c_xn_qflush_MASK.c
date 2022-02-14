
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {int br; } ;
struct netfront_info {int num_queues; struct netfront_txq* txq; } ;
struct mbuf {int dummy; } ;
struct ifnet {struct netfront_info* if_softc; } ;


 int FUNC_0 (struct netfront_txq*) ;
 int FUNC_1 (struct netfront_txq*) ;
 struct mbuf* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0)
{
 struct netfront_info *VAR_1;
 struct netfront_txq *VAR_2;
 struct mbuf *VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->if_softc;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_queues; VAR_4++) {
  VAR_2 = &VAR_1->txq[VAR_4];

  FUNC_0(VAR_2);
  while ((VAR_3 = FUNC_2(VAR_2->br)) != ((void*)0))
   FUNC_4(VAR_3);
  FUNC_1(VAR_2);
 }

 FUNC_3(VAR_0);
}
