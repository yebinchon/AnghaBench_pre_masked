
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_en_rx_ring {scalar_t__ buf; } ;
struct mlx4_en_rx_desc {TYPE_3__* data; } ;
struct mlx4_en_priv {TYPE_2__* mdev; scalar_t__ rx_mb_size; } ;
struct TYPE_6__ {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct TYPE_4__ {scalar_t__ key; } ;
struct TYPE_5__ {TYPE_1__ mr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_3,
     struct mlx4_en_rx_ring *VAR_4,
     int VAR_5)
{
 struct mlx4_en_rx_desc *VAR_6 =
     ((struct mlx4_en_rx_desc *)VAR_4->buf) + VAR_5;
 int VAR_7;


 VAR_6->data[0].byte_count = FUNC_0(VAR_3->rx_mb_size - VAR_2);
 VAR_6->data[0].lkey = FUNC_0(VAR_3->mdev->mr.key);






 for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
  VAR_6->data[VAR_7].byte_count = 0;
  VAR_6->data[VAR_7].lkey = FUNC_0(VAR_1);
  VAR_6->data[VAR_7].addr = 0;
 }
}
