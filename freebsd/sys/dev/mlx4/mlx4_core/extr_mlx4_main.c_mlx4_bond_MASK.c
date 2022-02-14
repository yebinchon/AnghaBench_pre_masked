
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_priv {int bond_mutex; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,char*) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*,char*,...) ;
 int FUNC_3 (struct mlx4_dev*) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx4_dev *VAR_0)
{
 int VAR_1 = 0;
 struct mlx4_priv *VAR_2 = FUNC_6(VAR_0);

 FUNC_7(&VAR_2->bond_mutex);

 if (!FUNC_3(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0, 1);
  if (VAR_1)
   FUNC_2(VAR_0, "Failed to bond device: %d\n", VAR_1);
  if (!VAR_1 && FUNC_4(VAR_0)) {
   VAR_1 = FUNC_5(VAR_0);
   if (VAR_1) {
    FUNC_2(VAR_0, "bond for multifunction failed\n");
    FUNC_1(VAR_0, 0);
   }
  }
 }

 FUNC_8(&VAR_2->bond_mutex);
 if (!VAR_1)
  FUNC_0(VAR_0, "Device is bonded\n");

 return VAR_1;
}
