
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq_ex {int dummy; } ;
struct mlx4_cq {int arm_sn; int flags; int buf; scalar_t__* set_ci_db; struct ibv_cq_ex ibv_cq; scalar_t__* arm_db; int cqe_size; int lock; scalar_t__ cons_index; } ;
struct mlx4_context {int cqe_size; } ;
struct ibv_cq_init_attr_ex {int cqe; int comp_mask; int flags; int wc_flags; } ;
struct ibv_context {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int FUNC_1 (struct mlx4_cq*) ;
 struct mlx4_cq* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int ) ;
 scalar_t__* FUNC_4 (struct mlx4_context*,int ) ;
 int FUNC_5 (struct ibv_context*,struct ibv_cq_init_attr_ex*,struct mlx4_cq*) ;
 int FUNC_6 (struct ibv_context*,struct ibv_cq_init_attr_ex*,struct mlx4_cq*) ;
 int FUNC_7 (struct mlx4_cq*,struct ibv_cq_init_attr_ex*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx4_context*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 struct mlx4_context* FUNC_11 (struct ibv_context*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static struct ibv_cq_ex *FUNC_13(struct ibv_context *VAR_15,
       struct ibv_cq_init_attr_ex *VAR_16,
       int VAR_17)
{
 struct mlx4_cq *VAR_18;
 int VAR_19;
 struct mlx4_context *VAR_20 = FUNC_11(VAR_15);


 if (VAR_16->cqe > 0x3fffff) {
  VAR_14 = VAR_3;
  return ((void*)0);
 }

 if (VAR_16->comp_mask & ~VAR_0) {
  VAR_14 = VAR_4;
  return ((void*)0);
 }

 if (VAR_16->comp_mask & VAR_5 &&
     VAR_16->flags & ~VAR_1) {
  VAR_14 = VAR_4;
  return ((void*)0);
 }

 if (VAR_16->wc_flags & ~VAR_2)
  return ((void*)0);




 if ((VAR_16->wc_flags & (VAR_9 | VAR_8)) &&
     (VAR_16->wc_flags & VAR_7)) {
  VAR_14 = VAR_4;
  return ((void*)0);
 }

 VAR_18 = FUNC_2(sizeof *VAR_18);
 if (!VAR_18)
  return ((void*)0);

 VAR_18->cons_index = 0;

 if (FUNC_10(&VAR_18->lock, VAR_13))
  goto err;

 VAR_16->cqe = FUNC_0(VAR_16->cqe + 1);

 if (FUNC_3(FUNC_12(VAR_15->device), &VAR_18->buf, VAR_16->cqe, VAR_20->cqe_size))
  goto err;

 VAR_18->cqe_size = VAR_20->cqe_size;
 VAR_18->set_ci_db = FUNC_4(FUNC_11(VAR_15), VAR_12);
 if (!VAR_18->set_ci_db)
  goto err_buf;

 VAR_18->arm_db = VAR_18->set_ci_db + 1;
 *VAR_18->arm_db = 0;
 VAR_18->arm_sn = 1;
 *VAR_18->set_ci_db = 0;
 VAR_18->flags = VAR_17;

 if (VAR_16->comp_mask & VAR_5 &&
     VAR_16->flags & VAR_6)
  VAR_18->flags |= VAR_11;

 --VAR_16->cqe;
 if (VAR_17 & VAR_10)
  VAR_19 = FUNC_6(VAR_15, VAR_16, VAR_18);
 else
  VAR_19 = FUNC_5(VAR_15, VAR_16, VAR_18);

 if (VAR_19)
  goto err_db;


 if (VAR_17 & VAR_10)
  FUNC_7(VAR_18, VAR_16);

 return &VAR_18->ibv_cq;

err_db:
 FUNC_9(FUNC_11(VAR_15), VAR_12, VAR_18->set_ci_db);

err_buf:
 FUNC_8(&VAR_18->buf);

err:
 FUNC_1(VAR_18);

 return ((void*)0);
}
