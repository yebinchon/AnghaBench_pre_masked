
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int enabled; int key; } ;
struct mlx4_fmr {TYPE_2__ mr; scalar_t__ maps; } ;
struct TYPE_3__ {int num_mpts; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,int *,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(struct mlx4_dev *VAR_1, struct mlx4_fmr *VAR_2,
      u32 *VAR_3, u32 *VAR_4)
{
 struct mlx4_cmd_mailbox *VAR_5;
 int VAR_6;

 if (!VAR_2->maps)
  return;

 VAR_2->maps = 0;

 VAR_5 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_6("mlx4_ib: mlx4_alloc_cmd_mailbox failed (%d)\n", VAR_6);
  return;
 }

 VAR_6 = FUNC_3(VAR_1, ((void*)0),
        FUNC_2(VAR_2->mr.key) &
        (VAR_1->caps.num_mpts - 1));
 FUNC_5(VAR_1, VAR_5);
 if (VAR_6) {
  FUNC_6("mlx4_ib: mlx4_HW2SW_MPT failed (%d)\n", VAR_6);
  return;
 }
 VAR_2->mr.enabled = VAR_0;
}
