
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int num_uars; struct mlx5_ib_ucontext* uars; struct mlx5_ib_ucontext* bitmap; struct mlx5_ib_ucontext* count; } ;
struct mlx5_ib_ucontext {int index; int tdn; struct mlx5_uuar_info uuari; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_ucontext {int device; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_ib_ucontext*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,int ) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;
 struct mlx5_ib_ucontext* FUNC_6 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_7(struct ib_ucontext *VAR_1)
{
 struct mlx5_ib_ucontext *VAR_2 = FUNC_6(VAR_1);
 struct mlx5_ib_dev *VAR_3 = FUNC_5(VAR_1->device);
 struct mlx5_uuar_info *VAR_4 = &VAR_2->uuari;
 int VAR_5;

 if (FUNC_0(VAR_3->mdev, VAR_0))
  FUNC_3(VAR_3->mdev, VAR_2->tdn);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_uars; VAR_5++) {
  if (FUNC_2(VAR_3->mdev, VAR_4->uars[VAR_5].index))
   FUNC_4(VAR_3, "failed to free UAR 0x%x\n", VAR_4->uars[VAR_5].index);
 }

 FUNC_1(VAR_4->count);
 FUNC_1(VAR_4->bitmap);
 FUNC_1(VAR_4->uars);
 FUNC_1(VAR_2);

 return 0;
}
