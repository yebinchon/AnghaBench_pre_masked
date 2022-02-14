
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int,int) ;
 int FUNC_1 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(struct mlx4_dev *VAR_5, int VAR_6, int VAR_7)
{
 u64 VAR_8 = 0;
 int VAR_9;

 if (FUNC_2(VAR_5)) {
  FUNC_5(&VAR_8, VAR_6);
  FUNC_4(&VAR_8, VAR_7);
  VAR_9 = FUNC_1(VAR_5, VAR_8, VAR_4, VAR_3,
          VAR_0,
          VAR_1, VAR_2);
  if (VAR_9) {
   FUNC_3(VAR_5, "Failed to release qp range base:%d cnt:%d\n",
      VAR_6, VAR_7);
  }
 } else
   FUNC_0(VAR_5, VAR_6, VAR_7);
}
