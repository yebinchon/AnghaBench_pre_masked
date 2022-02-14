
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sge_qset {TYPE_5__* txq; } ;
struct TYPE_6__ {int link_ok; } ;
struct port_info {int first_qset; int nqsets; TYPE_4__* adapter; TYPE_1__ link_config; } ;
struct TYPE_7__ {int flowid; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; struct port_info* if_softc; } ;
struct TYPE_10__ {int txq_mr; } ;
struct TYPE_8__ {struct sge_qset* qs; } ;
struct TYPE_9__ {TYPE_3__ sge; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (struct sge_qset*) ;
 int FUNC_3 (struct ifnet*,struct sge_qset*,struct mbuf*) ;
 int FUNC_4 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;

int
FUNC_6(struct ifnet *VAR_3, struct mbuf *VAR_4)
{
 struct sge_qset *VAR_5;
 struct port_info *VAR_6 = VAR_3->if_softc;
 int VAR_7, VAR_8 = VAR_6->first_qset;

 if ((VAR_3->if_drv_flags & VAR_0) == 0
     ||(!VAR_6->link_config.link_ok)) {
  FUNC_5(VAR_4);
  return (0);
 }


 if (FUNC_0(VAR_4) != VAR_1)
  VAR_8 = (VAR_4->m_pkthdr.flowid % VAR_6->nqsets) + VAR_6->first_qset;

 VAR_5 = &VAR_6->adapter->sge.qs[VAR_8];

 if (FUNC_1(VAR_5)) {

  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_4);
  FUNC_2(VAR_5);
 } else
  VAR_7 = FUNC_4(VAR_3, VAR_5->txq[VAR_2].txq_mr, VAR_4);
 return (VAR_7);
}
