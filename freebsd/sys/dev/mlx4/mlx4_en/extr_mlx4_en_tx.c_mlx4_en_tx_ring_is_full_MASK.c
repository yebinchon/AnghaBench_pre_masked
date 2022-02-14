
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int size; int prod; int cons; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct mlx4_en_tx_ring *VAR_2)
{
 int VAR_3;
 VAR_3 = VAR_2->size - (VAR_2->prod - VAR_2->cons);
 return (VAR_3 < (VAR_0 + (2 * VAR_1)));
}
