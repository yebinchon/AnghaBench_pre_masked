
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct pfil_head {int dummy; } ;
struct TYPE_19__ {int next_wqe_index; } ;
struct mlx5e_rx_wqe {TYPE_6__ next; } ;
struct TYPE_13__ {int wq; } ;
struct TYPE_20__ {scalar_t__ lro_cnt; } ;
struct TYPE_17__ {int packets; int bytes; int wqe_err; } ;
struct mlx5e_rq {TYPE_11__ cq; int wq; TYPE_9__* ifp; TYPE_7__ lro; TYPE_4__ stats; TYPE_3__* mbuf; int dma_tag; TYPE_2__* channel; } ;
struct mlx5_cqe64 {int op_own; int byte_cnt; int wqe_counter; } ;
struct TYPE_18__ {scalar_t__ csum_flags; int numa_domain; } ;
struct mbuf {TYPE_5__ m_pkthdr; int m_data; scalar_t__ m_len; } ;
typedef int __be16 ;
struct TYPE_21__ {int if_capenable; int (* if_input ) (TYPE_9__*,struct mbuf*) ;int if_numa_domain; int if_vnet; } ;
struct TYPE_16__ {int dma_map; struct mbuf* mbuf; int data; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {struct pfil_head* pfil; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 scalar_t__ FUNC_4 (struct pfil_head*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

 int FUNC_5 () ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 size_t FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_12 ;
 struct mbuf* FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct mlx5_cqe64*) ;
 struct mlx5e_rx_wqe* FUNC_15 (int *,size_t) ;
 int FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (struct mlx5_cqe64*,struct mlx5e_rq*,struct mbuf*,scalar_t__) ;
 int FUNC_18 (TYPE_11__*) ;
 struct mlx5_cqe64* FUNC_19 (TYPE_11__*) ;
 int FUNC_20 (struct mbuf*,int ) ;
 struct mbuf* FUNC_21 (int ) ;
 int FUNC_22 (struct pfil_head*,int ,TYPE_9__*,scalar_t__,int *) ;
 int FUNC_23 (TYPE_9__*,struct mbuf*) ;
 int FUNC_24 (TYPE_7__*,struct mbuf*) ;
 scalar_t__ FUNC_25 (TYPE_7__*,struct mbuf*,int ) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static int
FUNC_27(struct mlx5e_rq *VAR_13, int VAR_14)
{
 struct pfil_head *VAR_15;
 int VAR_16, VAR_17;

 FUNC_1(VAR_13->ifp->if_vnet);
 VAR_15 = VAR_13->channel->priv->pfil;
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  struct mlx5e_rx_wqe *VAR_18;
  struct mlx5_cqe64 *VAR_19;
  struct mbuf *VAR_20;
  __be16 VAR_21;
  u16 VAR_22;
  u32 VAR_23, VAR_24;

  VAR_19 = FUNC_19(&VAR_13->cq);
  if (!VAR_19)
   break;

  if (FUNC_14(VAR_19) == VAR_5)
   FUNC_18(&VAR_13->cq);

  FUNC_12(&VAR_13->cq.wq);

  VAR_21 = VAR_19->wqe_counter;
  VAR_22 = FUNC_7(VAR_21);
  VAR_18 = FUNC_15(&VAR_13->wq, VAR_22);
  VAR_23 = FUNC_8(VAR_19->byte_cnt);

  FUNC_9(VAR_13->dma_tag,
      VAR_13->mbuf[VAR_22].dma_map,
      VAR_0);

  if (FUNC_26((VAR_19->op_own >> 4) != VAR_6)) {
   VAR_13->stats.wqe_err++;
   goto wq_ll_pop;
  }
  if (VAR_15 != ((void*)0) && FUNC_4(VAR_15)) {
   VAR_24 = FUNC_3(VAR_23, VAR_3);
   VAR_17 = FUNC_22(VAR_13->channel->priv->pfil,
       VAR_13->mbuf[VAR_22].data, VAR_13->ifp,
       VAR_24 | VAR_10 | VAR_9, ((void*)0));

   switch (VAR_17) {
   case 129:
   case 130:





    VAR_13->stats.packets++;
    goto wq_ll_pop;
   case 128:





    VAR_20 = FUNC_21(VAR_13->mbuf[VAR_22].data);
    goto rx_common;
   default:




    FUNC_2(VAR_17 == VAR_11,
     ("Filter returned %d!\n", VAR_17));
   }
  }
  if ((VAR_2 - VAR_4) >= VAR_23 &&
      (VAR_20 = FUNC_11(VAR_8, VAR_7)) != ((void*)0)) {

   VAR_20->m_len = VAR_2 - VAR_4;

   VAR_20->m_data += VAR_4;

   FUNC_6(VAR_13->mbuf[VAR_22].data, FUNC_20(VAR_20, VAR_12),
       VAR_23);
  } else {
   VAR_20 = VAR_13->mbuf[VAR_22].mbuf;
   VAR_13->mbuf[VAR_22].mbuf = ((void*)0);

   FUNC_10(VAR_13->dma_tag,
       VAR_13->mbuf[VAR_22].dma_map);
  }
rx_common:
  FUNC_17(VAR_19, VAR_13, VAR_20, VAR_23);
  VAR_13->stats.bytes += VAR_23;
  VAR_13->stats.packets++;





  FUNC_24(&VAR_13->lro, VAR_20);
wq_ll_pop:
  FUNC_16(&VAR_13->wq, VAR_21,
      &VAR_18->next.next_wqe_index);
 }
 FUNC_0();

 FUNC_13(&VAR_13->cq.wq);


 FUNC_5();
 return (VAR_16);
}
