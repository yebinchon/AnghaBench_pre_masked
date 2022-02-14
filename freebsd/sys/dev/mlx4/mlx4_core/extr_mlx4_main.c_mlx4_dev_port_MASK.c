
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_port_cap {int dummy; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int,struct mlx4_port_cap*) ;
 int FUNC_1 (struct mlx4_dev*,char*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_0, int VAR_1,
    struct mlx4_port_cap *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0, "QUERY_PORT command failed.\n");

 return VAR_3;
}
