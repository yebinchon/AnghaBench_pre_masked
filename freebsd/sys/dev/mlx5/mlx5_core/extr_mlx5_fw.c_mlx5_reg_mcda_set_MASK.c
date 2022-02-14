
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__,int *,int) ;
 int FUNC_8 (struct mlx5_core_dev*,int*,int,int*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_4,
        u32 VAR_5,
        u32 VAR_6, u16 VAR_7,
        u8 *VAR_8)
{
 int VAR_9, VAR_10 = FUNC_2(VAR_3) + VAR_7;
 u32 VAR_11[FUNC_3(VAR_3)];
 int VAR_12, VAR_13, VAR_14 = VAR_7 >> 2;
 __be32 VAR_15;
 u32 *VAR_16;

 VAR_16 = FUNC_6(VAR_10, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_16, VAR_5, VAR_5);
 FUNC_1(VAR_3, VAR_16, VAR_6, VAR_6);
 FUNC_1(VAR_3, VAR_16, VAR_7, VAR_7);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_13 = VAR_12 * 4;
  VAR_15 = FUNC_4(*(u32 *)&VAR_8[VAR_13]);
  FUNC_7(FUNC_0(VAR_3, VAR_16, VAR_8) + VAR_13, &VAR_15, 4);
 }

 VAR_9 = FUNC_8(VAR_4, VAR_16, VAR_10, VAR_11,
       sizeof(VAR_11), VAR_2, 0, 1);
 FUNC_5(VAR_16);
 return VAR_9;
}
