
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;
typedef enum mlxsw_reg_mcc_instruction { ____Placeholder_mlxsw_reg_mcc_instruction } mlxsw_reg_mcc_instruction ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int*,int,int*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_3,
       enum mlxsw_reg_mcc_instruction VAR_4,
       u16 VAR_5, u32 VAR_6,
       u32 VAR_7)
{
 u32 VAR_8[FUNC_1(VAR_2)];
 u32 VAR_9[FUNC_1(VAR_2)];

 FUNC_2(VAR_9, 0, sizeof(VAR_9));

 FUNC_0(VAR_2, VAR_9, VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_9, VAR_5, VAR_5);
 FUNC_0(VAR_2, VAR_9, VAR_6, VAR_6);
 FUNC_0(VAR_2, VAR_9, VAR_7, VAR_7);

 return FUNC_3(VAR_3, VAR_9, sizeof(VAR_9), VAR_8,
        sizeof(VAR_8), VAR_0, 0, 1);
}
