
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vi_info {size_t first_txq; int ntxq; int rsrv_noflowq; struct port_info* pi; } ;
struct sge_txq {int r; } ;
struct TYPE_5__ {int link_ok; } ;
struct port_info {int tx_parse_error; TYPE_1__ link_cfg; struct adapter* adapter; } ;
struct TYPE_7__ {int csum_flags; int flowid; TYPE_4__* snd_tag; } ;
struct mbuf {TYPE_3__ m_pkthdr; int * m_nextpkt; } ;
struct ifnet {struct vi_info* if_softc; } ;
struct cxgbe_snd_tag {scalar_t__ type; } ;
struct TYPE_6__ {struct sge_txq* txq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_8__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (int ,void**,int,int) ;
 struct cxgbe_snd_tag* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct adapter*,struct mbuf**) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_4, struct mbuf *VAR_5)
{
 struct vi_info *VAR_6 = VAR_4->if_softc;
 struct port_info *VAR_7 = VAR_6->pi;
 struct adapter *VAR_8 = VAR_7->adapter;
 struct sge_txq *VAR_9;



 void *VAR_10[1];
 int VAR_11;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5->m_nextpkt == ((void*)0));





 if (FUNC_3(VAR_7->link_cfg.link_ok == 0)) {
  FUNC_6(VAR_5);
  return (VAR_1);
 }

 VAR_11 = FUNC_9(VAR_8, &VAR_5);
 if (FUNC_3(VAR_11 != 0)) {
  FUNC_0(VAR_5 == ((void*)0));
  FUNC_4(&VAR_7->tx_parse_error, 1);
  return (VAR_11);
 }
 VAR_9 = &VAR_8->sge.txq[VAR_6->first_txq];
 if (FUNC_2(VAR_5) != VAR_3)
  VAR_9 += ((VAR_5->m_pkthdr.flowid % (VAR_6->ntxq - VAR_6->rsrv_noflowq)) +
      VAR_6->rsrv_noflowq);

 VAR_10[0] = VAR_5;
 VAR_11 = FUNC_7(VAR_9->r, VAR_10, 1, 4096);
 if (FUNC_3(VAR_11 != 0))
  FUNC_6(VAR_5);

 return (VAR_11);
}
