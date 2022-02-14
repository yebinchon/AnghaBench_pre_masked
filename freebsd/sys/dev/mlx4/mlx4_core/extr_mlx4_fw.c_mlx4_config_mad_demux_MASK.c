
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags2; } ;
struct mlx4_dev {int flags; TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mlx4_cmd_mailbox* FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*,char*,...) ;

int FUNC_7(struct mlx4_dev *VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 int VAR_10;


 if (!(VAR_8->caps.flags2 & VAR_6))
  return 0;

 VAR_9 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_6(VAR_8, "Failed to allocate mailbox for cmd MAD_DEMUX");
  return -VAR_0;
 }


 VAR_10 = FUNC_4(VAR_8, 0, VAR_9->dma, 0x01 ,
      VAR_3, VAR_1,
      VAR_5, VAR_4);
 if (VAR_10) {
  FUNC_6(VAR_8, "MLX4_CMD_MAD_DEMUX: query restrictions failed (%d)\n",
     VAR_10);
  goto out;
 }

 if (FUNC_2(VAR_8, VAR_9))
  VAR_8->flags |= VAR_7;


 VAR_10 = FUNC_3(VAR_8, VAR_9->dma, 0x01 ,
         VAR_2, VAR_1,
         VAR_5, VAR_4);
 if (VAR_10) {
  FUNC_6(VAR_8, "MLX4_CMD_MAD_DEMUX: configure failed (%d)\n", VAR_10);
  goto out;
 }

 if (VAR_8->flags & VAR_7)
  FUNC_6(VAR_8, "HCA operating in secure-host mode. SMP firewall activated.\n");
out:
 FUNC_5(VAR_8, VAR_9);
 return VAR_10;
}
