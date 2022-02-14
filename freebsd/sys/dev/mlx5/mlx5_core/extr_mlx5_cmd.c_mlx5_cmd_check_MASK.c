
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (void*,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_1, void *VAR_2, void *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 FUNC_3(VAR_3, &VAR_5, &VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_7);

 FUNC_5(VAR_1,
        "%s(0x%x) op_mod(0x%x) failed, status %s(0x%x), syndrome (0x%x)\n",
         FUNC_4(VAR_6),
         VAR_6, VAR_7,
         FUNC_1(VAR_5),
         VAR_5,
         VAR_4);

 return FUNC_2(VAR_5);
}
