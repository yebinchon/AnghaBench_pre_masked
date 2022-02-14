
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx4_ib_dev {int dev; } ;
struct mlx4_ib_cq {int mcq; } ;
struct ib_cq {int device; } ;


 int FUNC_0 (int ,int *,int ,int ) ;
 struct mlx4_ib_cq* FUNC_1 (struct ib_cq*) ;
 struct mlx4_ib_dev* FUNC_2 (int ) ;

int FUNC_3(struct ib_cq *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct mlx4_ib_cq *VAR_3 = FUNC_1(VAR_0);
 struct mlx4_ib_dev *VAR_4 = FUNC_2(VAR_0->device);

 return FUNC_0(VAR_4->dev, &VAR_3->mcq, VAR_1, VAR_2);
}
