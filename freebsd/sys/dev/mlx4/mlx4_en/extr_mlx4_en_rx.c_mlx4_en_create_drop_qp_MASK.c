
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_en_priv {TYPE_1__* mdev; int drop_qp; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int,int *,int ) ;

int FUNC_4(struct mlx4_en_priv *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_3(VAR_1->mdev->dev, 1, 1, &VAR_3, 0);
 if (VAR_2) {
  FUNC_0(VAR_1, "Failed reserving drop qpn\n");
  return VAR_2;
 }
 VAR_2 = FUNC_1(VAR_1->mdev->dev, VAR_3, &VAR_1->drop_qp, VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "Failed allocating drop qp\n");
  FUNC_2(VAR_1->mdev->dev, VAR_3, 1);
  return VAR_2;
 }

 return 0;
}
