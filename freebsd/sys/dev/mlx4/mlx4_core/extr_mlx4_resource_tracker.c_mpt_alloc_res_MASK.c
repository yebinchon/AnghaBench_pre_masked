
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
 int VAR_3 ;


 int FUNC_0 (struct mlx4_dev*,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_6 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,int,int,int ,struct res_mpt**) ;
 int FUNC_9 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_10 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_4, int VAR_5, int VAR_6, int VAR_7,
    u64 VAR_8, u64 *VAR_9)
{
 int VAR_10 = -VAR_0;
 int VAR_11;
 int VAR_12;
 struct res_mpt *VAR_13;

 switch (VAR_6) {
 case 128:
  VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_2, 1, 0);
  if (VAR_10)
   break;

  VAR_11 = FUNC_2(VAR_4);
  if (VAR_11 == -1) {
   FUNC_6(VAR_4, VAR_5, VAR_2, 1, 0);
   break;
  }
  VAR_12 = VAR_11 & FUNC_7(VAR_4);

  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_12, 1, VAR_2, VAR_11);
  if (VAR_10) {
   FUNC_6(VAR_4, VAR_5, VAR_2, 1, 0);
   FUNC_1(VAR_4, VAR_11);
   break;
  }
  FUNC_11(VAR_9, VAR_11);
  break;
 case 129:
  VAR_11 = FUNC_4(&VAR_8);
  VAR_12 = VAR_11 & FUNC_7(VAR_4);
  VAR_10 = FUNC_8(VAR_4, VAR_5, VAR_12,
        VAR_3, &VAR_13);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_0(VAR_4, VAR_13->key, VAR_1);
  if (VAR_10) {
   FUNC_9(VAR_4, VAR_5, VAR_2, VAR_12);
   return VAR_10;
  }

  FUNC_10(VAR_4, VAR_5, VAR_2, VAR_12);
  break;
 }
 return VAR_10;
}
