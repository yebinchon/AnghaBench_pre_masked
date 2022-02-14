
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_txq {int defrtask; int tq; int br; } ;
struct netfront_info {int num_queues; struct netfront_txq* txq; } ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {struct netfront_info* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct netfront_txq*) ;
 int FUNC_3 (struct netfront_txq*) ;
 int VAR_2 ;
 int FUNC_4 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_5 (struct netfront_info*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct netfront_txq*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_3, struct mbuf *VAR_4)
{
 struct netfront_info *VAR_5;
 struct netfront_txq *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_3->if_softc;
 VAR_8 = VAR_5->num_queues;

 if (!FUNC_5(VAR_5))
  return (VAR_0);

 FUNC_0(VAR_8 != 0, ("called with 0 available queues"));


 if (FUNC_1(VAR_4) != VAR_1)
  VAR_7 = VAR_4->m_pkthdr.flowid % VAR_8;
 else
  VAR_7 = VAR_2 % VAR_8;

 VAR_6 = &VAR_5->txq[VAR_7];

 if (FUNC_2(VAR_6) != 0) {
  VAR_9 = FUNC_7(VAR_6, VAR_4);
  FUNC_3(VAR_6);
 } else {
  VAR_9 = FUNC_4(VAR_3, VAR_6->br, VAR_4);
  FUNC_6(VAR_6->tq, &VAR_6->defrtask);
 }

 return (VAR_9);
}
