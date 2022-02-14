
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int complete; TYPE_1__* sg; } ;
typedef TYPE_2__ u32 ;
struct mlx5_fpga_transaction {int size; scalar_t__ direction; TYPE_2__* data; int addr; int complete1; struct mlx5_fpga_conn* conn; } ;
struct mlx5_fpga_trans_priv {int tid; TYPE_2__ buf; int state; TYPE_2__* header; struct mlx5_fpga_transaction const* user_trans; } ;
struct mlx5_fpga_conn {TYPE_3__* fdev; } ;
struct TYPE_13__ {int shell_conn; } ;
struct TYPE_11__ {int size; TYPE_2__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mlx5_fpga_trans_priv* FUNC_2 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_3__*,struct mlx5_fpga_trans_priv*) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_11 ;

int FUNC_8(const struct mlx5_fpga_transaction *VAR_12)
{
 struct mlx5_fpga_conn *VAR_13 = VAR_12->conn;
 struct mlx5_fpga_trans_priv *VAR_14;
 u32 *VAR_15;
 int VAR_16;

 if (!VAR_12->complete1) {
  FUNC_6(VAR_13->fdev, "Transaction must have a completion callback\n");
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_16 = FUNC_7(VAR_13->fdev, VAR_12->addr, VAR_12->size);
 if (VAR_16)
  goto out;

 VAR_14 = FUNC_2(VAR_13->fdev);
 if (!VAR_14) {
  VAR_16 = -VAR_0;
  goto out;
 }
 VAR_14->user_trans = VAR_12;
 VAR_15 = VAR_14->header;

 FUNC_4(VAR_15, 0, sizeof(VAR_14->header));
 FUNC_4(&VAR_14->buf, 0, sizeof(VAR_14->buf));
 FUNC_0(VAR_7, VAR_15, VAR_11,
   (VAR_12->direction == VAR_4) ?
   VAR_3 :
   VAR_2);
 FUNC_0(VAR_7, VAR_15, VAR_9, VAR_14->tid);
 FUNC_0(VAR_7, VAR_15, VAR_8, VAR_12->size);
 FUNC_1(VAR_7, VAR_15, VAR_6, VAR_12->addr);

 VAR_14->buf.sg[0].data = VAR_15;
 VAR_14->buf.sg[0].size = sizeof(VAR_14->header);
 if (VAR_12->direction == VAR_4) {
  VAR_14->buf.sg[1].data = VAR_12->data;
  VAR_14->buf.sg[1].size = VAR_12->size;
 }

 VAR_14->buf.complete = VAR_10;
 VAR_14->state = VAR_5;





 VAR_16 = 0;

 if (VAR_16)
  goto out_buf_tid;
 goto out;

out_buf_tid:
 FUNC_3(VAR_13->fdev, VAR_14);
out:
 return VAR_16;
}
