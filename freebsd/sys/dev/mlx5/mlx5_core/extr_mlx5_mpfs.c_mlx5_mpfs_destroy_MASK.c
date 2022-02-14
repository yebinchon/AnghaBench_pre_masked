
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int spinlock; int bitmap; } ;
struct mlx5_core_dev {TYPE_1__ mpfs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,scalar_t__) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct mlx5_core_dev *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1->mpfs.bitmap, VAR_0);
 if (VAR_2 != 0)
  FUNC_1(VAR_1, "Leaking %u MPFS MAC table entries\n", VAR_2);

 FUNC_2(&VAR_1->mpfs.spinlock);
}
