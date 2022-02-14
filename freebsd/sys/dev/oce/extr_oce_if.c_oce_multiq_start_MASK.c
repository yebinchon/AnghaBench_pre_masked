
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oce_wq {int tx_lock; } ;
struct TYPE_3__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {TYPE_2__* if_softc; } ;
struct TYPE_4__ {int nwqs; struct oce_wq** wq; int link_status; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*,struct mbuf*,struct oce_wq*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 POCE_SOFTC VAR_4 = VAR_2->if_softc;
 struct oce_wq *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_4->link_status)
  return VAR_0;

 if (FUNC_1(VAR_3) != VAR_1)
  VAR_6 = VAR_3->m_pkthdr.flowid % VAR_4->nwqs;

 VAR_5 = VAR_4->wq[VAR_6];

 FUNC_0(&VAR_5->tx_lock);
 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5);
 FUNC_2(&VAR_5->tx_lock);

 return VAR_7;

}
