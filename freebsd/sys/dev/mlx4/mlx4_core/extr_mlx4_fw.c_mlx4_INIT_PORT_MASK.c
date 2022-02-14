
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* vl_cap; int* port_width_cap; int* ib_mtu_cap; int* gid_table_len; int* pkey_table_len; } ;
struct mlx4_dev {int flags; TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;

int FUNC_7(struct mlx4_dev *VAR_11, int VAR_12)
{
 struct mlx4_cmd_mailbox *VAR_13;
 u32 *VAR_14;
 int VAR_15;
 u32 VAR_16;
 u16 VAR_17;

 if (VAR_11->flags & VAR_10) {
  VAR_13 = FUNC_3(VAR_11);
  if (FUNC_0(VAR_13))
   return FUNC_2(VAR_13);
  VAR_14 = VAR_13->buf;

  VAR_16 = 0;
  VAR_16 |= (VAR_11->caps.vl_cap[VAR_12] & 0xf) << 4;
  VAR_16 |= (VAR_11->caps.port_width_cap[VAR_12] & 0xf) << 8;
  FUNC_1(VAR_14, VAR_16, 0x00);

  VAR_17 = 128 << VAR_11->caps.ib_mtu_cap[VAR_12];
  FUNC_1(VAR_14, VAR_17, 0x04);
  VAR_17 = VAR_11->caps.gid_table_len[VAR_12];
  FUNC_1(VAR_14, VAR_17, 0x06);
  VAR_17 = VAR_11->caps.pkey_table_len[VAR_12];
  FUNC_1(VAR_14, VAR_17, 0x0a);

  VAR_15 = FUNC_4(VAR_11, VAR_13->dma, VAR_12, 0, VAR_6,
          VAR_8, VAR_7);

  FUNC_5(VAR_11, VAR_13);
 } else
  VAR_15 = FUNC_4(VAR_11, 0, VAR_12, 0, VAR_6,
          VAR_8, VAR_9);

 if (!VAR_15)
  FUNC_6(VAR_11);

 return VAR_15;
}
