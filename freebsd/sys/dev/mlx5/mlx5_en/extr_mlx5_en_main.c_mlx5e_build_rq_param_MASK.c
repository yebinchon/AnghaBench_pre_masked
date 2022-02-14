
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_rx_wqe {int dummy; } ;
struct TYPE_4__ {int linear; scalar_t__ db_numa_node; scalar_t__ buf_numa_node; } ;
struct mlx5e_rq_param {TYPE_2__ wq; void* rqc; } ;
struct TYPE_3__ {int log_rq_size; } ;
struct mlx5e_priv {int pdn; TYPE_1__ params; } ;
struct mlx5_wqe_data_seg {int dummy; } ;


 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct mlx5e_priv*,int*,int*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_priv *VAR_8,
    struct mlx5e_rq_param *VAR_9)
{
 void *VAR_10 = VAR_9->rqc;
 void *VAR_11 = FUNC_0(VAR_10, VAR_10, VAR_11);
 u32 VAR_12, VAR_13;

 FUNC_3(VAR_8, &VAR_12, &VAR_13);
 FUNC_1(VAR_11, VAR_11, VAR_7, VAR_1);
 FUNC_1(VAR_11, VAR_11, VAR_2, VAR_0);
 FUNC_1(VAR_11, VAR_11, VAR_3, FUNC_2(sizeof(struct mlx5e_rx_wqe) +
     VAR_13 * sizeof(struct mlx5_wqe_data_seg)));
 FUNC_1(VAR_11, VAR_11, VAR_4, VAR_8->params.log_rq_size);
 FUNC_1(VAR_11, VAR_11, VAR_5, VAR_8->pdn);

 VAR_9->wq.buf_numa_node = 0;
 VAR_9->wq.db_numa_node = 0;
 VAR_9->wq.linear = 1;
}
