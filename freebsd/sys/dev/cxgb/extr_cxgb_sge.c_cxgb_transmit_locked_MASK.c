
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int c_cpu; } ;
struct sge_txq {int size; int in_use; TYPE_3__ txq_timer; int txq_direct_bytes; int txq_direct_packets; scalar_t__ db_pending; struct buf_ring* txq_mr; } ;
struct sge_qset {struct sge_txq* txq; struct port_info* port; } ;
struct TYPE_6__ {scalar_t__ link_ok; } ;
struct port_info {TYPE_2__ link_config; int adapter; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
struct buf_ring {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sge_qset*) ;
 int FUNC_1 (struct sge_qset*) ;
 int FUNC_2 (struct sge_qset*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int ,struct sge_qset*,int ) ;
 scalar_t__ FUNC_5 (struct sge_qset*) ;
 int FUNC_6 (int ,struct sge_txq*,int) ;
 int FUNC_7 (struct sge_qset*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_9 (struct ifnet*,struct buf_ring*) ;
 int FUNC_10 (struct sge_qset*,int ,size_t) ;
 scalar_t__ FUNC_11 (struct sge_qset*,struct mbuf**) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_4, struct sge_qset *VAR_5, struct mbuf *VAR_6)
{
 struct port_info *VAR_7 = VAR_5->port;
 struct sge_txq *VAR_8 = &VAR_5->txq[VAR_0];
 struct buf_ring *VAR_9 = VAR_8->txq_mr;
 int VAR_10, VAR_11;

 VAR_11 = VAR_8->size - VAR_8->in_use;
 FUNC_0(VAR_5);
 if (FUNC_5(VAR_5) == 0 &&
     !FUNC_2(VAR_5) && VAR_11 > VAR_1) {
  if (FUNC_11(VAR_5, &VAR_6)) {
   if (VAR_6 != ((void*)0) &&
       (VAR_10 = FUNC_8(VAR_4, VAR_9, VAR_6)) != 0)
    return (VAR_10);
  } else {
   if (VAR_8->db_pending)
    FUNC_6(VAR_7->adapter, VAR_8, 1);





   VAR_8->txq_direct_packets++;
   VAR_8->txq_direct_bytes += VAR_6->m_pkthdr.len;
  }
 } else if ((VAR_10 = FUNC_8(VAR_4, VAR_9, VAR_6)) != 0)
  return (VAR_10);

 FUNC_10(VAR_5, VAR_2, VAR_0);
 if (!FUNC_1(VAR_5) && VAR_7->link_config.link_ok &&
     (!FUNC_5(VAR_5) || (FUNC_9(VAR_4, VAR_9) >= 7)))
  FUNC_7(VAR_5);
 else if (!FUNC_1(VAR_5) && !FUNC_3(&VAR_8->txq_timer))
  FUNC_4(&VAR_8->txq_timer, 1, VAR_3,
      VAR_5, VAR_8->txq_timer.c_cpu);
 return (0);
}
