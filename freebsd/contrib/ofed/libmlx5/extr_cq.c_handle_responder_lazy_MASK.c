
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct mlx5_wq {int tail; int wqe_cnt; int * wrid; } ;
struct mlx5_srq {int * wrid; } ;
struct mlx5_resource {scalar_t__ type; } ;
struct mlx5_qp {int qp_cap_cache; struct mlx5_wq rq; } ;
struct mlx5_cqe64 {int op_own; int byte_cnt; int wqe_counter; } ;
struct TYPE_3__ {int wr_id; } ;
struct mlx5_cq {TYPE_1__ ibv_cq; int flags; } ;
struct TYPE_4__ {struct mlx5_wq rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mlx5_srq*,size_t,struct mlx5_cqe64*,int ) ;
 int FUNC_4 (struct mlx5_qp*,size_t,struct mlx5_cqe64*,int ) ;
 int FUNC_5 (struct mlx5_srq*,size_t) ;
 struct mlx5_qp* FUNC_6 (struct mlx5_resource*) ;
 TYPE_2__* FUNC_7 (struct mlx5_resource*) ;

__attribute__((used)) static inline int FUNC_8(struct mlx5_cq *VAR_6, struct mlx5_cqe64 *VAR_7,
     struct mlx5_resource *VAR_8, struct mlx5_srq *VAR_9)
{
 uint16_t VAR_10;
 struct mlx5_wq *VAR_11;
 struct mlx5_qp *VAR_12 = FUNC_6(VAR_8);
 int VAR_13 = VAR_0;

 if (VAR_9) {
  VAR_10 = FUNC_0(VAR_7->wqe_counter);
  VAR_6->ibv_cq.wr_id = VAR_9->wrid[VAR_10];
  FUNC_5(VAR_9, VAR_10);
  if (VAR_7->op_own & VAR_2)
   VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_7,
          FUNC_1(VAR_7->byte_cnt));
  else if (VAR_7->op_own & VAR_3)
   VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_7 - 1,
          FUNC_1(VAR_7->byte_cnt));
 } else {
  if (FUNC_2(VAR_8->type == VAR_4)) {
   VAR_11 = &VAR_12->rq;
   if (VAR_12->qp_cap_cache & VAR_5)
    VAR_6->flags |= VAR_1;
  } else {
   VAR_11 = &(FUNC_7(VAR_8)->rq);
  }

  VAR_10 = VAR_11->tail & (VAR_11->wqe_cnt - 1);
  VAR_6->ibv_cq.wr_id = VAR_11->wrid[VAR_10];
  ++VAR_11->tail;
  if (VAR_7->op_own & VAR_2)
   VAR_13 = FUNC_4(VAR_12, VAR_10, VAR_7,
          FUNC_1(VAR_7->byte_cnt));
  else if (VAR_7->op_own & VAR_3)
   VAR_13 = FUNC_4(VAR_12, VAR_10, VAR_7 - 1,
          FUNC_1(VAR_7->byte_cnt));
 }

 return VAR_13;
}
