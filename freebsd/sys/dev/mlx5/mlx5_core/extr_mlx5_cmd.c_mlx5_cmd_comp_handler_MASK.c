
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
struct mlx5_cmd {int* ent_mode; int checksum_disabled; struct mlx5_cmd_work_ent** ent_arr; TYPE_3__* cmd_page; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;
struct mlx5_cmd_work_ent {int status; int idx; scalar_t__ ret; TYPE_2__* lay; TYPE_3__* out; int ts2; int cb_timeout_work; scalar_t__ callback; } ;
typedef enum mlx5_cmd_mode { ____Placeholder_mlx5_cmd_mode } mlx5_cmd_mode ;
struct TYPE_4__ {int data; } ;
struct TYPE_6__ {TYPE_1__ first; } ;
struct TYPE_5__ {int status_own; int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_cmd_work_ent*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_cmd_work_ent*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct mlx5_cmd*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,scalar_t__,int ,int) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (struct mlx5_cmd_work_ent*) ;

void FUNC_11(struct mlx5_core_dev *VAR_2, u64 VAR_3,
    enum mlx5_cmd_mode VAR_4)
{
 struct mlx5_cmd *VAR_5 = &VAR_2->cmd;
 struct mlx5_cmd_work_ent *VAR_6;
 bool VAR_7 = (VAR_3 & VAR_1) ? 1 : 0;
 u32 VAR_8 = VAR_3;
 int VAR_9;


 FUNC_9(VAR_5->cmd_page);

 while (VAR_8 != 0) {
  VAR_9 = FUNC_4(VAR_8) - 1;
  VAR_8 &= ~(1U << VAR_9);

  if (VAR_5->ent_mode[VAR_9] != VAR_4)
   continue;
  VAR_6 = VAR_5->ent_arr[VAR_9];

  if (VAR_6 == ((void*)0))
   continue;
                if (VAR_6->callback)
                        FUNC_0(&VAR_6->cb_timeout_work);
  VAR_6->ts2 = FUNC_6();
  FUNC_7(VAR_6->out->first.data, VAR_6->lay->out,
         sizeof(VAR_6->lay->out));

  FUNC_9(VAR_6->out);
  FUNC_3(VAR_2, VAR_6, 0);
  if (!VAR_6->ret) {
   if (!VAR_5->checksum_disabled)
    VAR_6->ret = FUNC_10(VAR_6);
   else
    VAR_6->ret = 0;

   if (VAR_7)
    VAR_6->status = VAR_0;
   else
    VAR_6->status = VAR_6->lay->status_own >> 1;

   FUNC_8(VAR_2,
          "FW command ret 0x%x, status %s(0x%x)\n",
          VAR_6->ret,
          FUNC_2(VAR_6->status),
          VAR_6->status);
  }
  FUNC_5(VAR_5, VAR_6->idx);
  FUNC_1(VAR_6);
 }
}
