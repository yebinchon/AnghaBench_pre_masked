
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {int wq; } ;
struct TYPE_6__ {int nop; } ;
struct TYPE_5__ {scalar_t__ sz_m1; } ;
struct mlx5e_sq {scalar_t__ cc; scalar_t__ cev_factor; TYPE_4__ cq; TYPE_3__* mbuf; int dma_tag; TYPE_2__ stats; TYPE_1__ wq; } ;
struct mlx5_cqe64 {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_7__ {scalar_t__ num_bytes; scalar_t__ num_wqebbs; int dma_map; struct mbuf* mbuf; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx5_cqe64* FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_7(struct mlx5e_sq *VAR_1, int VAR_2)
{
 u16 VAR_3;





 VAR_3 = VAR_1->cc;

 while (VAR_2 > 0) {
  struct mlx5_cqe64 *VAR_4;
  struct mbuf *VAR_5;
  u16 VAR_6;
  u16 VAR_7;

  VAR_4 = FUNC_6(&VAR_1->cq);
  if (!VAR_4)
   break;

  FUNC_4(&VAR_1->cq.wq);


  VAR_2 -= VAR_1->cev_factor;

  for (VAR_6 = 0; VAR_6 != VAR_1->cev_factor; VAR_6++) {
   VAR_7 = VAR_3 & VAR_1->wq.sz_m1;
   VAR_5 = VAR_1->mbuf[VAR_7].mbuf;
   VAR_1->mbuf[VAR_7].mbuf = ((void*)0);

   if (VAR_5 == ((void*)0)) {
    if (VAR_1->mbuf[VAR_7].num_bytes == 0) {

     VAR_1->stats.nop++;
    }
   } else {
    FUNC_1(VAR_1->dma_tag, VAR_1->mbuf[VAR_7].dma_map,
        VAR_0);
    FUNC_2(VAR_1->dma_tag, VAR_1->mbuf[VAR_7].dma_map);


    FUNC_3(VAR_5);
   }
   VAR_3 += VAR_1->mbuf[VAR_7].num_wqebbs;
  }
 }

 FUNC_5(&VAR_1->cq.wq);


 FUNC_0();

 VAR_1->cc = VAR_3;
}
