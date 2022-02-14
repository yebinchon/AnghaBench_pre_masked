
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_mpt {int key; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int ,struct res_mpt**) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int ,struct res_mpt**) ;
 int FUNC_7 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_8 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_9 (struct mlx4_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_10(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6,
   u64 VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9;
 int VAR_10;
 struct res_mpt *VAR_11;

 switch (VAR_5) {
 case 128:
  VAR_9 = FUNC_2(&VAR_7);
  VAR_10 = VAR_9 & FUNC_5(VAR_3);
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_10, VAR_1, &VAR_11);
  if (VAR_8)
   break;
  VAR_9 = VAR_11->key;
  FUNC_7(VAR_3, VAR_4, VAR_10, VAR_1);

  VAR_8 = FUNC_8(VAR_3, VAR_4, VAR_10, 1, VAR_1, 0);
  if (VAR_8)
   break;
  FUNC_4(VAR_3, VAR_4, VAR_1, 1, 0);
  FUNC_1(VAR_3, VAR_9);
  break;
 case 129:
  VAR_9 = FUNC_2(&VAR_7);
  VAR_10 = VAR_9 & FUNC_5(VAR_3);
  VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_10,
        VAR_2, &VAR_11);
  if (VAR_8)
   return VAR_8;

  FUNC_0(VAR_3, VAR_11->key);
  FUNC_9(VAR_3, VAR_4, VAR_1, VAR_10);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
