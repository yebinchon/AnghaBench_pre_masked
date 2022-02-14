
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wc {int dummy; } ;
struct ib_grh {int dummy; } ;


 int FUNC_0 (int ,void const*,void*,int,int) ;

int FUNC_1(struct mlx5_ib_dev *VAR_0, int VAR_1, int VAR_2,
   u8 VAR_3, const struct ib_wc *VAR_4, const struct ib_grh *VAR_5,
   const void *VAR_6, void *VAR_7)
{
 u8 VAR_8 = 0;




 if (VAR_1 || !VAR_4)
  VAR_8 |= 0x1;
 if (VAR_2 || !VAR_4)
  VAR_8 |= 0x2;

 return FUNC_0(VAR_0->mdev, VAR_6, VAR_7, VAR_8, VAR_3);
}
