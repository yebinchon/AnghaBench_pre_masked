
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ alloc_res_qp_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int ,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(struct mlx4_dev *VAR_5, int VAR_6, int VAR_7,
     int *VAR_8, u8 VAR_9)
{
 u64 VAR_10 = 0;
 u64 VAR_11;
 int VAR_12;


 VAR_9 &= VAR_5->caps.alloc_res_qp_mask;

 if (FUNC_3(VAR_5)) {
  FUNC_5(&VAR_10, (((u32)VAR_9) << 24) | (u32)VAR_6);
  FUNC_4(&VAR_10, VAR_7);
  VAR_12 = FUNC_2(VAR_5, VAR_10, &VAR_11,
       VAR_4, VAR_3,
       VAR_0,
       VAR_1, VAR_2);
  if (VAR_12)
   return VAR_12;

  *VAR_8 = FUNC_1(&VAR_11);
  return 0;
 }
 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
