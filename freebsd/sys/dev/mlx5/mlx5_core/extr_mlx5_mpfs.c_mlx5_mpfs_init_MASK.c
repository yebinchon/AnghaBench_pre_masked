
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitmap; int spinlock; } ;
struct mlx5_core_dev {TYPE_1__ mpfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct mlx5_core_dev *VAR_1)
{

 FUNC_1(&VAR_1->mpfs.spinlock);
 FUNC_0(VAR_1->mpfs.bitmap, VAR_0);
 return (0);
}
