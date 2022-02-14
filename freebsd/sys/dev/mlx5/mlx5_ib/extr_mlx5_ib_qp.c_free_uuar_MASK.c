
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int num_uars; int num_low_latency_uuars; int lock; int * count; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_uuar_info*,int) ;
 int FUNC_1 (struct mlx5_uuar_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5_uuar_info *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->num_uars * VAR_0;
 int VAR_4 = VAR_3 - VAR_1->num_low_latency_uuars;

 FUNC_2(&VAR_1->lock);
 if (VAR_2 == 0) {
  --VAR_1->count[VAR_2];
  goto out;
 }

 if (VAR_2 < VAR_4) {
  FUNC_1(VAR_1, VAR_2);
  goto out;
 }

 FUNC_0(VAR_1, VAR_2);

out:
 FUNC_3(&VAR_1->lock);
}
