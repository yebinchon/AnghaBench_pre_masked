
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_general_context {int phv_en; int v_ignore_fcs; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_general_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mlx4_cmd_mailbox* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_5(struct mlx4_dev *VAR_7, u8 VAR_8, u8 VAR_9)
{



 struct mlx4_cmd_mailbox *VAR_10;
 struct mlx4_set_port_general_context *VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_7);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 VAR_11 = VAR_10->buf;

 VAR_11->v_ignore_fcs |= 0x10;
 if (VAR_9)
  VAR_11->phv_en |= 0x80;

 VAR_12 = VAR_4 << 8 | VAR_8;
 VAR_13 = FUNC_3(VAR_7, VAR_10->dma, VAR_12, VAR_3,
         VAR_1, VAR_2,
         VAR_0);

 FUNC_4(VAR_7, VAR_10);
 return VAR_13;
}
