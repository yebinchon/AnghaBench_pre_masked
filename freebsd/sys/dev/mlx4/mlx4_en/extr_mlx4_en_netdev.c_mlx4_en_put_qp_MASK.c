
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_en_priv {int base_qpn; int flags; int port; int dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx4_en_priv *VAR_3)
{
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 struct mlx4_dev *VAR_5 = VAR_4->dev;
 int VAR_6 = VAR_3->base_qpn;

 if (VAR_5->caps.steering_mode == VAR_2) {
  u64 VAR_7 = FUNC_2(FUNC_0(VAR_3->dev));
  FUNC_1(VAR_0, VAR_3, "Registering MAC: %pM for deleting\n",
         FUNC_0(VAR_3->dev));
  FUNC_4(VAR_5, VAR_3->port, VAR_7);
 } else {
  FUNC_1(VAR_0, VAR_3, "Releasing qp: port %d, qpn %d\n",
         VAR_3->port, VAR_6);
  FUNC_3(VAR_5, VAR_6, 1);
  VAR_3->flags &= ~VAR_1;
 }
}
