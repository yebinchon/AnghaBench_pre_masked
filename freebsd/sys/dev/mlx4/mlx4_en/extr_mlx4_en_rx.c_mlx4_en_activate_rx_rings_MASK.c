
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* ifp; } ;
struct mlx4_en_rx_ring {int buf; int buf_size; int size; scalar_t__ actual_size; scalar_t__ size_mask; TYPE_6__ lro; void* rx_mr_key_be; int log_stride; int rx_mb_size; int cqn; scalar_t__ cons; scalar_t__ prod; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {int rx_ring_num; struct mlx4_en_rx_ring** rx_ring; TYPE_5__* dev; TYPE_4__* mdev; int rx_mb_size; TYPE_2__** rx_cq; } ;
typedef void* __be32 ;
struct TYPE_11__ {int if_capenable; } ;
struct TYPE_9__ {int key; } ;
struct TYPE_10__ {TYPE_3__ mr; } ;
struct TYPE_7__ {int cqn; } ;
struct TYPE_8__ {TYPE_1__ mcq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct mlx4_en_priv*) ;
 int FUNC_4 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_5 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int) ;
 int FUNC_6 (struct mlx4_en_rx_ring*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;

int FUNC_8(struct mlx4_en_priv *VAR_3)
{
 struct mlx4_en_rx_ring *VAR_4;



 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_num; VAR_5++) {
  VAR_4 = VAR_3->rx_ring[VAR_5];

  VAR_4->prod = 0;
  VAR_4->cons = 0;
  VAR_4->actual_size = 0;
  VAR_4->cqn = VAR_3->rx_cq[VAR_5]->mcq.cqn;
                VAR_4->rx_mb_size = VAR_3->rx_mb_size;

  if (sizeof(struct mlx4_en_rx_desc) <= VAR_2) {

   __be32 *VAR_7 = (__be32 *)VAR_4->buf;
   __be32 VAR_8 = FUNC_0(1 << VAR_1);
   *VAR_7 = VAR_8;

   VAR_4->buf += VAR_2;
  }

  VAR_4->log_stride = FUNC_1(sizeof(struct mlx4_en_rx_desc));
  VAR_4->buf_size = VAR_4->size * sizeof(struct mlx4_en_rx_desc);

  FUNC_2(VAR_4->buf, 0, VAR_4->buf_size);
  FUNC_6(VAR_4);






  VAR_4->rx_mr_key_be = FUNC_0(VAR_3->mdev->mr.key);
 }


 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  goto err_buffers;

 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_num; VAR_5++) {
  VAR_4 = VAR_3->rx_ring[VAR_5];

  VAR_4->size_mask = VAR_4->actual_size - 1;
  FUNC_6(VAR_4);
 }

 return 0;

err_buffers:
 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_num; VAR_5++)
  FUNC_4(VAR_3, VAR_3->rx_ring[VAR_5]);

 VAR_5 = VAR_3->rx_ring_num - 1;

 while (VAR_5 >= 0) {
  VAR_4 = VAR_3->rx_ring[VAR_5];
  if (sizeof(struct mlx4_en_rx_desc) <= VAR_2)
   VAR_4->buf -= VAR_2;
  VAR_5--;
 }

 return VAR_6;
}
