
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_5__ {int switch_sem; scalar_t__ use_events; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {int state; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 TYPE_3__* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mlx4_dev *VAR_2, u64 VAR_3, u64 *VAR_4,
        int VAR_5, u32 VAR_6, u8 VAR_7,
        u16 VAR_8, unsigned long VAR_9, int VAR_10)
{
 if (FUNC_9(VAR_2->persist->pdev))
  return FUNC_2(VAR_2, VAR_8, VAR_7, -VAR_0);

 if (!FUNC_6(VAR_2) || (VAR_10 && FUNC_5(VAR_2))) {
  int VAR_11;

  if (VAR_2->persist->state & VAR_1)
   return FUNC_4(VAR_2, VAR_8,
         VAR_7);
  FUNC_0(&FUNC_7(VAR_2)->cmd.switch_sem);
  if (FUNC_7(VAR_2)->cmd.use_events)
   VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_9);
  else
   VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_9);

  FUNC_10(&FUNC_7(VAR_2)->cmd.switch_sem);
  return VAR_11;
 }
 return FUNC_8(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9);
}
