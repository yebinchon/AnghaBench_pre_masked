
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_rx_ring {int actual_size; scalar_t__ mbuf; int prod; } ;
struct mlx4_en_priv {int rx_ring_num; struct mlx4_en_rx_ring** rx_ring; TYPE_1__* prof; } ;
struct TYPE_2__ {int rx_ring_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int,int) ;
 int FUNC_2 (struct mlx4_en_rx_ring*,scalar_t__) ;
 int FUNC_3 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_1)
{
 struct mlx4_en_rx_ring *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1->prof->rx_ring_size; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_num; VAR_3++) {
   VAR_2 = VAR_1->rx_ring[VAR_3];

   VAR_6 = FUNC_3(VAR_1, VAR_2,
            VAR_2->actual_size);
   if (VAR_6) {
    if (VAR_2->actual_size == 0) {
     FUNC_0(VAR_1, "Failed to allocate "
           "enough rx buffers\n");
     return -VAR_0;
    } else {
     VAR_5 =
      FUNC_4(VAR_2->actual_size);
     FUNC_1(VAR_1, "Only %d buffers allocated "
            "reducing ring size to %d\n",
      VAR_2->actual_size, VAR_5);
     goto reduce_rings;
    }
   }
   VAR_2->actual_size++;
   VAR_2->prod++;
  }
 }
 return 0;

reduce_rings:
 for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_num; VAR_3++) {
  VAR_2 = VAR_1->rx_ring[VAR_3];
  while (VAR_2->actual_size > VAR_5) {
   VAR_2->actual_size--;
   VAR_2->prod--;
   FUNC_2(VAR_2,
       VAR_2->mbuf + VAR_2->actual_size);
  }
 }

 return 0;
}
