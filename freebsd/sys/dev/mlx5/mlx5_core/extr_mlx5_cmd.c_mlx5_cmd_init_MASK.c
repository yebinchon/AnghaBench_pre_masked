
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_cmd {int log_sz; int log_stride; int checksum_disabled; int max_reg_cmds; int bitmask; int cmdif_rev; int mode; scalar_t__ dma; int pages_sem; int sem; TYPE_2__* stats; int token_lock; int alloc_lock; } ;
struct mlx5_core_dev {TYPE_1__* iseg; struct mlx5_cmd cmd; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int cmdq_addr_l_sz; int cmdq_addr_h; int cmdif_rev_fw_sub; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_cmd*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_cmd*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct mlx5_cmd*,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,unsigned long long) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;

int FUNC_13(struct mlx5_core_dev *VAR_7)
{
 struct mlx5_cmd *VAR_8 = &VAR_7->cmd;
 u32 VAR_9, VAR_10;
 u16 VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_7(VAR_8, 0, sizeof(*VAR_8));
 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11 != VAR_0) {
  FUNC_9(VAR_7,
      "Driver cmdif rev(%d) differs from firmware's(%d)\n",
      VAR_0, VAR_11);
  return -VAR_1;
 }

 VAR_12 = FUNC_1(VAR_7, VAR_8);
 if (VAR_12)
  goto err_free_pool;

 VAR_10 = FUNC_5(&VAR_7->iseg->cmdq_addr_l_sz) & 0xff;
 VAR_8->log_sz = VAR_10 >> 4 & 0xf;
 VAR_8->log_stride = VAR_10 & 0xf;
 if (1 << VAR_8->log_sz > VAR_6) {
  FUNC_9(VAR_7,
      "firmware reports too many outstanding commands %d\n",
      1 << VAR_8->log_sz);
  VAR_12 = -VAR_1;
  goto err_free_page;
 }

 if (VAR_8->log_sz + VAR_8->log_stride > VAR_4) {
  FUNC_9(VAR_7,
      "command queue size overflow\n");
  VAR_12 = -VAR_1;
  goto err_free_page;
 }

 VAR_8->checksum_disabled = 1;
 VAR_8->max_reg_cmds = (1 << VAR_8->log_sz) - 1;
 VAR_8->bitmask = (1 << VAR_8->max_reg_cmds) - 1;

 VAR_8->cmdif_rev = FUNC_5(&VAR_7->iseg->cmdif_rev_fw_sub) >> 16;
 if (VAR_8->cmdif_rev > VAR_0) {
  FUNC_9(VAR_7,
      "driver does not support command interface version. driver %d, firmware %d\n",
      VAR_0, VAR_8->cmdif_rev);
  VAR_12 = -VAR_3;
  goto err_free_page;
 }

 FUNC_11(&VAR_8->alloc_lock);
 FUNC_11(&VAR_8->token_lock);
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->stats); VAR_13++)
  FUNC_11(&VAR_8->stats[VAR_13].lock);

 FUNC_10(&VAR_8->sem, VAR_8->max_reg_cmds);
 FUNC_10(&VAR_8->pages_sem, 1);

 VAR_9 = (u32)((u64)(VAR_8->dma) >> 32);
 VAR_10 = (u32)(VAR_8->dma);
 if (VAR_10 & 0xfff) {
  FUNC_9(VAR_7, "invalid command queue address\n");
  VAR_12 = -VAR_2;
  goto err_free_page;
 }

 FUNC_6(VAR_9, &VAR_7->iseg->cmdq_addr_h);
 FUNC_6(VAR_10, &VAR_7->iseg->cmdq_addr_l_sz);


 FUNC_12();

 FUNC_8(VAR_7, "descriptor at dma 0x%llx\n", (unsigned long long)(VAR_8->dma));

 VAR_8->mode = VAR_5;

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12) {
  FUNC_9(VAR_7, "failed to create command cache\n");
  goto err_free_page;
 }
 return 0;

err_free_page:
 FUNC_4(VAR_7, VAR_8);

err_free_pool:
 return VAR_12;
}
