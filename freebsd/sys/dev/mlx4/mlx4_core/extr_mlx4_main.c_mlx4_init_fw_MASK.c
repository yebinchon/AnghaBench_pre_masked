
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mod_stat_cfg {int log_pg_sz_m; scalar_t__ log_pg_sz; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_mod_stat_cfg*) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*) ;
 int FUNC_3 (struct mlx4_dev*,char*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,char*) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_1)
{
 struct mlx4_mod_stat_cfg VAR_2;
 int VAR_3 = 0;

 if (!FUNC_4(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3) {
   if (VAR_3 == -VAR_0)
    FUNC_3(VAR_1, "non-primary physical function, skipping\n");
   else
    FUNC_2(VAR_1, "QUERY_FW command failed, aborting\n");
   return VAR_3;
  }

  VAR_3 = FUNC_5(VAR_1);
  if (VAR_3) {
   FUNC_2(VAR_1, "Failed to start FW, aborting\n");
   return VAR_3;
  }

  VAR_2.log_pg_sz_m = 1;
  VAR_2.log_pg_sz = 0;
  VAR_3 = FUNC_0(VAR_1, &VAR_2);
  if (VAR_3)
   FUNC_6(VAR_1, "Failed to override log_pg_sz parameter\n");
 }

 return VAR_3;
}
