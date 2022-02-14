
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_trans_priv {TYPE_1__* user_trans; } ;
struct mlx5_fpga_dma_buf {TYPE_2__* sg; } ;
struct mlx5_fpga_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ size; int data; } ;
struct TYPE_3__ {size_t direction; size_t size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 size_t VAR_1 ;


 size_t VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 struct mlx5_fpga_trans_priv* FUNC_3 (struct mlx5_fpga_device*,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,scalar_t__) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int,...) ;
 int FUNC_7 (struct mlx5_fpga_device*,struct mlx5_fpga_trans_priv*,int) ;

void FUNC_8(void *VAR_5, struct mlx5_fpga_dma_buf *VAR_6)
{
 struct mlx5_fpga_device *VAR_7 = VAR_5;
 struct mlx5_fpga_trans_priv *VAR_8;
 size_t VAR_9;
 u8 VAR_10 = 0;
 u8 VAR_11, VAR_12;

 FUNC_5(VAR_7, "Rx QP message on core conn; %u bytes\n",
        VAR_6->sg[0].size);

 if (VAR_6->sg[0].size < FUNC_2(VAR_4)) {
  FUNC_6(VAR_7, "Short message %u bytes from device\n",
          VAR_6->sg[0].size);
  goto out;
 }
 VAR_9 = VAR_6->sg[0].size - FUNC_2(VAR_4);

 VAR_11 = FUNC_1(VAR_4, VAR_6->sg[0].data, VAR_11);
 VAR_8 = FUNC_3(VAR_7, VAR_11);
 if (!VAR_8)
  goto out;

 VAR_12 = FUNC_1(VAR_4, VAR_6->sg[0].data, VAR_12);
 switch (VAR_12) {
 case 129:
  if (VAR_8->user_trans->direction != VAR_1) {
   FUNC_6(VAR_7, "Wrong answer type %u to a %u transaction\n",
           VAR_12, VAR_8->user_trans->direction);
   VAR_10 = -VAR_0;
   goto complete;
  }
  if (VAR_9 != VAR_8->user_trans->size) {
   FUNC_6(VAR_7, "Incorrect transaction payload length %zu expected %zu\n",
           VAR_9,
           VAR_8->user_trans->size);
   goto complete;
  }
  FUNC_4(VAR_8->user_trans->data,
         FUNC_0(VAR_4, VAR_6->sg[0].data,
        VAR_3), VAR_9);
  break;
 case 128:
  if (VAR_8->user_trans->direction != VAR_2) {
   FUNC_6(VAR_7, "Wrong answer type %u to a %u transaction\n",
           VAR_12, VAR_8->user_trans->direction);
   VAR_10 = -VAR_0;
   goto complete;
  }
  break;
 default:
  FUNC_6(VAR_7, "Unexpected message type %u len %u from device\n",
          VAR_12, VAR_6->sg[0].size);
  VAR_10 = -VAR_0;
  goto complete;
 }

complete:
 FUNC_7(VAR_7, VAR_8, VAR_10);
out:
 return;
}
