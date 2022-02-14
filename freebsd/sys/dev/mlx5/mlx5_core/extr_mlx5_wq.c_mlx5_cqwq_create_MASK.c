
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_wq_param {int buf_numa_node; int db_numa_node; scalar_t__ linear; } ;
struct TYPE_6__ {int db; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_7__ {TYPE_1__ direct; } ;
struct mlx5_wq_ctrl {TYPE_2__ db; struct mlx5_core_dev* mdev; TYPE_4__ buf; } ;
struct mlx5_cqwq {int log_sz; int sz_m1; int db; int buf; void* log_stride; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int,TYPE_4__*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_cqwq*) ;
 int FUNC_4 (struct mlx5_core_dev*,TYPE_2__*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,TYPE_2__*) ;

int FUNC_6(struct mlx5_core_dev *VAR_3, struct mlx5_wq_param *VAR_4,
       void *VAR_5, struct mlx5_cqwq *VAR_6,
       struct mlx5_wq_ctrl *VAR_7)
{
 int VAR_8 = VAR_4->linear ? VAR_0 : 0;
 int VAR_9;

 VAR_6->log_stride = 6 + FUNC_0(VAR_5, VAR_5, VAR_1);
 VAR_6->log_sz = FUNC_0(VAR_5, VAR_5, VAR_2);
 VAR_6->sz_m1 = (1 << VAR_6->log_sz) - 1;

 VAR_9 = FUNC_4(VAR_3, &VAR_7->db, VAR_4->db_numa_node);
 if (VAR_9) {
  FUNC_2(VAR_3, "mlx5_db_alloc() failed, %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_3, FUNC_3(VAR_6),
      VAR_8, &VAR_7->buf,
      VAR_4->buf_numa_node);
 if (VAR_9) {
  FUNC_2(VAR_3, "mlx5_buf_alloc() failed, %d\n", VAR_9);
  goto err_db_free;
 }

 VAR_6->buf = VAR_7->buf.direct.buf;
 VAR_6->db = VAR_7->db.db;

 VAR_7->mdev = VAR_3;

 return 0;

err_db_free:
 FUNC_5(VAR_3, &VAR_7->db);

 return VAR_9;
}
