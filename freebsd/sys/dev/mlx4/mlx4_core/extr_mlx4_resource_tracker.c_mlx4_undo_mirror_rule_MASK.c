
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int res_id; int owner; } ;
struct res_fs_rule {TYPE_1__ com; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_4, struct res_fs_rule *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_5->com.owner, VAR_5->com.res_id, 1, VAR_3, 0);
 if (VAR_6) {
  FUNC_1(VAR_4, "Fail to remove flow steering resources\n");
  return VAR_6;
 }

 FUNC_0(VAR_4, VAR_5->com.res_id, 0, 0, VAR_2,
   VAR_1, VAR_0);
 return 0;
}
