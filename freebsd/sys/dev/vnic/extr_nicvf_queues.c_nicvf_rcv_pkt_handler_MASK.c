
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lro_cnt; } ;
struct rcv_queue {TYPE_3__ lro; scalar_t__ lro_enabled; } ;
struct nicvf {int dev; TYPE_1__* qs; } ;
struct TYPE_5__ {int csum_flags; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct cqe_rx_t {int rq_idx; scalar_t__ l3_type; scalar_t__ l4_type; int rb_cnt; } ;
struct cmp_queue {int rx_br; } ;
struct TYPE_4__ {struct rcv_queue* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct nicvf*,struct cmp_queue*,struct cqe_rx_t*) ;
 struct mbuf* FUNC_4 (struct nicvf*,struct cqe_rx_t*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_6(struct nicvf *VAR_4, struct cmp_queue *VAR_5,
    struct cqe_rx_t *VAR_6, int VAR_7)
{
 struct mbuf *VAR_8;
 struct rcv_queue *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_6->rq_idx;
 VAR_9 = &VAR_4->qs->rq[VAR_10];


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_11 && !VAR_6->rb_cnt)
  return (0);

 VAR_8 = FUNC_4(VAR_4, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_4->dev, "Packet not received\n");
  return (0);
 }


 if (VAR_11 != 0) {
  FUNC_2(VAR_8);
  return (0);
 }

 if (VAR_9->lro_enabled &&
     ((VAR_6->l3_type == VAR_2) && (VAR_6->l4_type == VAR_3)) &&
     (VAR_8->m_pkthdr.csum_flags & (VAR_0 | VAR_1)) ==
            (VAR_0 | VAR_1)) {





  if ((VAR_9->lro.lro_cnt != 0) &&
      (FUNC_5(&VAR_9->lro, VAR_8, 0) == 0))
   return (0);
 }




 VAR_11 = FUNC_0(VAR_5->rx_br, VAR_8);
 if (VAR_11 != 0) {




  return (VAR_11);
 }

 return (0);
}
