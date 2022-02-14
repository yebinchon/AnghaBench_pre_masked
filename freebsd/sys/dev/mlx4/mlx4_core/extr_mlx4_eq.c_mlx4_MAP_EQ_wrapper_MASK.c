
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long long u64 ;
typedef int u32 ;
struct mlx4_vhcr {int in_modifier; long long in_param; } ;
struct mlx4_slave_event_eq_info {int eqn; } ;
struct TYPE_6__ {TYPE_1__* slave_state; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct TYPE_8__ {int function; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_5__ {struct mlx4_slave_event_eq_info* event_eq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,long long,int,int ,int ,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_4, int VAR_5,
   struct mlx4_vhcr *VAR_6,
   struct mlx4_cmd_mailbox *VAR_7,
   struct mlx4_cmd_mailbox *VAR_8,
   struct mlx4_cmd_info *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_1(VAR_4);
 struct mlx4_slave_event_eq_info *VAR_11 =
  VAR_10->mfunc.master.slave_state[VAR_5].event_eq;
 u32 VAR_12 = VAR_6->in_modifier;
 u32 VAR_13 = VAR_12 & 0x3FF;
 u64 VAR_14 = VAR_6->in_param;
 int VAR_15 = 0;
 int VAR_16;

 if (VAR_5 == VAR_4->caps.function)
  VAR_15 = FUNC_0(VAR_4, VAR_14, (VAR_12 & 0x80000000) | VAR_13,
          0, VAR_0, VAR_2,
          VAR_1);
 if (!VAR_15)
  for (VAR_16 = 0; VAR_16 < VAR_3; ++VAR_16)
   if (VAR_14 & (1LL << VAR_16))
    VAR_11[VAR_16].eqn = VAR_12 >> 31 ? -1 : VAR_13;

 return VAR_15;
}
