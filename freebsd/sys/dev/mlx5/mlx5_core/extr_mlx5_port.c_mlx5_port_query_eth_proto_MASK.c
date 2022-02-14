
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5e_port_eth_proto {void* oper; void* admin; void* cap; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlx5_core_dev*,int *,int,int ,int ) ;
 int VAR_5 ;

int FUNC_3(struct mlx5_core_dev *VAR_6, u8 VAR_7, bool VAR_8,
         struct mlx5e_port_eth_proto *VAR_9)
{
 u32 VAR_10[FUNC_1(VAR_5)];
 int VAR_11;

 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_6, VAR_10, sizeof(VAR_10), VAR_1, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_9->cap = FUNC_0(VAR_5, VAR_10, VAR_8,
        VAR_3);
 VAR_9->admin = FUNC_0(VAR_5, VAR_10, VAR_8, VAR_2);
 VAR_9->oper = FUNC_0(VAR_5, VAR_10, VAR_8, VAR_4);
 return 0;
}
