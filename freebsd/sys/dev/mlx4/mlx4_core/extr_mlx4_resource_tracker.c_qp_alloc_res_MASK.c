
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int alloc_res_qp_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int*,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_8 (struct mlx4_dev*,int,int ,int,int ) ;
 int FUNC_9 (struct mlx4_dev*,int,int,int ,int *,int) ;
 int FUNC_10 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_11 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_14(struct mlx4_dev *VAR_4, int VAR_5, int VAR_6, int VAR_7,
   u64 VAR_8, u64 *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 u8 VAR_15;

 switch (VAR_6) {
 case 128:
  VAR_11 = FUNC_6(&VAR_8) & 0xffffff;



  VAR_15 = (FUNC_6(&VAR_8) >> 24) & VAR_4->caps.alloc_res_qp_mask;
  VAR_12 = FUNC_5(&VAR_8);
  VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_2, VAR_11, 0);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_4, VAR_11, VAR_12, &VAR_13, VAR_15);
  if (VAR_10) {
   FUNC_8(VAR_4, VAR_5, VAR_2, VAR_11, 0);
   return VAR_10;
  }

  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_13, VAR_11, VAR_2, 0);
  if (VAR_10) {
   FUNC_8(VAR_4, VAR_5, VAR_2, VAR_11, 0);
   FUNC_1(VAR_4, VAR_13, VAR_11);
   return VAR_10;
  }
  FUNC_12(VAR_9, VAR_13);
  break;
 case 129:
  VAR_14 = FUNC_6(&VAR_8) & 0x7fffff;
  if (FUNC_13(VAR_4, VAR_5, VAR_14)) {
   VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_14, 1, VAR_2, 0);
   if (VAR_10)
    return VAR_10;
  }

  VAR_10 = FUNC_9(VAR_4, VAR_5, VAR_14, VAR_3,
        ((void*)0), 1);
  if (VAR_10)
   return VAR_10;

  if (!FUNC_4(VAR_4, VAR_14)) {
   VAR_10 = FUNC_0(VAR_4, VAR_14, VAR_1);
   if (VAR_10) {
    FUNC_10(VAR_4, VAR_5, VAR_2, VAR_14);
    return VAR_10;
   }
  }

  FUNC_11(VAR_4, VAR_5, VAR_2, VAR_14);
  break;

 default:
  VAR_10 = -VAR_0;
  break;
 }
 return VAR_10;
}
