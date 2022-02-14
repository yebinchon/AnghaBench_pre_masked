
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlx4_en_query_port_context {int link_up; int link_speed; int autoneg; int transceiver; } ;
struct mlx4_en_port_state {int link_state; int link_speed; int flags; int transceiver; } ;
struct mlx4_en_priv {struct mlx4_en_port_state port_state; } ;
struct mlx4_en_dev {int dev; int * pndev; } ;
struct mlx4_cmd_mailbox {struct mlx4_en_query_port_context* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,size_t,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct mlx4_cmd_mailbox*) ;
 struct mlx4_en_priv* FUNC_5 (int ) ;

int FUNC_6(struct mlx4_en_dev *VAR_9, u8 VAR_10)
{
 struct mlx4_en_query_port_context *VAR_11;
 struct mlx4_en_priv *VAR_12 = FUNC_5(VAR_9->pndev[VAR_10]);
 struct mlx4_en_port_state *VAR_13 = &VAR_12->port_state;
 struct mlx4_cmd_mailbox *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_9->dev);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);
 VAR_15 = FUNC_3(VAR_9->dev, 0, VAR_14->dma, VAR_10, 0,
      VAR_0, VAR_1,
      VAR_2);
 if (VAR_15)
  goto out;
 VAR_11 = VAR_14->buf;



 VAR_13->link_state = !!(VAR_11->link_up & VAR_5);
 switch (VAR_11->link_speed & VAR_8) {
 case 134:
  VAR_13->link_speed = 100;
  break;
 case 131:
  VAR_13->link_speed = 1000;
  break;
 case 133:
 case 132:
  VAR_13->link_speed = 10000;
  break;
 case 130:
  VAR_13->link_speed = 20000;
  break;
 case 129:
  VAR_13->link_speed = 40000;
  break;
 case 128:
  VAR_13->link_speed = 56000;
  break;
 default:
  VAR_13->link_speed = -1;
  break;
 }

 VAR_13->transceiver = VAR_11->transceiver;

 VAR_13->flags = 0;
 VAR_13->flags |= (VAR_11->link_up & VAR_3) ?
  VAR_6 : 0;
 VAR_13->flags |= (VAR_11->autoneg & VAR_4) ?
  VAR_7 : 0;

out:
 FUNC_4(VAR_9->dev, VAR_14);
 return VAR_15;
}
