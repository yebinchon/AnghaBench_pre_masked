
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_en_priv {int base_qpn; int port; int dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int*,int ) ;
 int FUNC_6 (struct mlx4_dev*,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mlx4_en_priv *VAR_3)
{
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 struct mlx4_dev *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int *VAR_8 = &VAR_3->base_qpn;
 u64 VAR_9 = FUNC_4(FUNC_0(VAR_3->dev));

 FUNC_1(VAR_0, VAR_3, "Registering MAC: %pM for adding\n",
        FUNC_0(VAR_3->dev));
 VAR_6 = FUNC_6(VAR_5, VAR_3->port, VAR_9);
 if (VAR_6 < 0) {
  VAR_7 = VAR_6;
  FUNC_2(VAR_3, "Failed adding MAC: %pM\n",
         FUNC_0(VAR_3->dev));
  return VAR_7;
 }

 if (VAR_5->caps.steering_mode == VAR_2) {
  int VAR_10 = FUNC_3(VAR_5, VAR_3->port);
  *VAR_8 = VAR_10 + VAR_6;
  return 0;
 }

 VAR_7 = FUNC_5(VAR_5, 1, 1, VAR_8, VAR_1);
 FUNC_1(VAR_0, VAR_3, "Reserved qp %d\n", *VAR_8);
 if (VAR_7) {
  FUNC_2(VAR_3, "Failed to reserve qp for mac registration\n");
  FUNC_7(VAR_5, VAR_3->port, VAR_9);
  return VAR_7;
 }

 return 0;
}
