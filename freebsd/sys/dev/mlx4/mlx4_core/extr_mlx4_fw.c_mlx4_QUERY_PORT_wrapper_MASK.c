
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_vhcr {int in_modifier; scalar_t__ op_modifier; } ;
struct TYPE_10__ {TYPE_3__* vf_oper; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct mlx4_port_cap {int link_state; } ;
struct TYPE_12__ {int function; int* port_type; int* pkey_table_len; } ;
struct mlx4_dev {TYPE_6__ caps; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_9__ {TYPE_2__* vport; } ;
struct TYPE_7__ {int mac; } ;
struct TYPE_8__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mlx4_dev*,int,struct mlx4_port_cap*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int,int) ;

int FUNC_7(struct mlx4_dev *VAR_11, int VAR_12,
       struct mlx4_vhcr *VAR_13,
       struct mlx4_cmd_mailbox *VAR_14,
       struct mlx4_cmd_mailbox *VAR_15,
       struct mlx4_cmd_info *VAR_16)
{
 struct mlx4_priv *VAR_17 = FUNC_5(VAR_11);
 u64 VAR_18;
 u8 VAR_19;
 u16 VAR_20;
 int VAR_21;
 int VAR_22 = FUNC_6(VAR_11, VAR_12,
        VAR_13->in_modifier & 0xFF);






 if (VAR_22 < 0)
  return -VAR_0;




 if (VAR_13->op_modifier || VAR_13->in_modifier & ~0xFF)
  return -VAR_0;

 VAR_13->in_modifier = VAR_22;

 VAR_21 = FUNC_3(VAR_11, 0, VAR_15->dma, VAR_13->in_modifier, 0,
      VAR_2, VAR_3,
      VAR_1);

 if (!VAR_21 && VAR_11->caps.function != VAR_12) {
  VAR_18 = VAR_17->mfunc.master.vf_oper[VAR_12].vport[VAR_13->in_modifier].state.mac;
  FUNC_1(VAR_15->buf, VAR_18, VAR_9);


  FUNC_0(VAR_19, VAR_15->buf,
    VAR_10);


  VAR_19 &= 0xE0;

  VAR_19 |= (VAR_11->caps.port_type[VAR_13->in_modifier] & 0x3);

  if (0 )
   VAR_19 |= 0x80;
  else if (1 )
   VAR_19 &= ~0x80;
  else if (0 ) {
   int VAR_23 = (VAR_22 == 1) ? 2 : 1;
   struct mlx4_port_cap VAR_24;

   VAR_21 = FUNC_2(VAR_11, VAR_23, &VAR_24);
   if (VAR_21)
    goto out;
   VAR_19 |= (VAR_24.link_state << 7);
  }

  FUNC_1(VAR_15->buf, VAR_19,
    VAR_10);

  if (VAR_11->caps.port_type[VAR_13->in_modifier] == VAR_5)
   VAR_20 = FUNC_4(VAR_11, VAR_12, VAR_22);
  else
   VAR_20 = 1;
  FUNC_1(VAR_15->buf, VAR_20,
    0x0e);

  VAR_20 = VAR_11->caps.pkey_table_len[VAR_13->in_modifier];
  FUNC_1(VAR_15->buf, VAR_20,
    0x0c);
 }
out:
 return VAR_21;
}
