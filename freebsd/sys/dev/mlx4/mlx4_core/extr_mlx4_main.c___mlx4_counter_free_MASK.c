
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int counters_bitmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_dev*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;

void FUNC_4(struct mlx4_dev *VAR_2, u32 VAR_3)
{
 if (!(VAR_2->caps.flags & VAR_0))
  return;

 if (VAR_3 == FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_2, VAR_3);

 FUNC_2(&FUNC_3(VAR_2)->counters_bitmap, VAR_3, VAR_1);
 return;
}
