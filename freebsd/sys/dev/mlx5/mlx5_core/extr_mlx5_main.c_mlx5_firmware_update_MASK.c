
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 struct firmware* FUNC_1 (char*) ;
 int FUNC_2 (struct firmware const*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mlx5_core_dev*,struct firmware const*) ;

__attribute__((used)) static int
FUNC_4(struct mlx5_core_dev *VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;

 FUNC_0("hw.mlx5.auto_fw_update", &VAR_2);
 if (!VAR_2)
  return (0);
 VAR_4 = FUNC_1("mlx5fw_mfa");
 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  FUNC_2(VAR_4, VAR_1);
 }
 else
  return (-VAR_0);

 return VAR_5;
}
