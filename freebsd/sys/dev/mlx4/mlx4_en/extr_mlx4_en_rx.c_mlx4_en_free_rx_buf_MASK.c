
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_en_rx_ring {int cons; int prod; scalar_t__ actual_size; int size_mask; scalar_t__ mbuf; } ;
struct mlx4_en_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int,...) ;
 int FUNC_2 (struct mlx4_en_rx_ring*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_rx_ring *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1, "Freeing Rx buf - cons:%d prod:%d\n",
        VAR_2->cons, VAR_2->prod);


 FUNC_0((u32) (VAR_2->prod - VAR_2->cons) > VAR_2->actual_size);
 while (VAR_2->cons != VAR_2->prod) {
  VAR_3 = VAR_2->cons & VAR_2->size_mask;
  FUNC_1(VAR_0, VAR_1, "Processing descriptor:%d\n", VAR_3);
  FUNC_2(VAR_2, VAR_2->mbuf + VAR_3);
  ++VAR_2->cons;
 }
}
