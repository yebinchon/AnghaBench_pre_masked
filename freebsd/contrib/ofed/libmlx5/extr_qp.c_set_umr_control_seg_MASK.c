
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_wqe_umr_ctrl_seg {int flags; void* klm_octowords; int mkey_mask; int rsvd1; int rsvd0; scalar_t__ translation_offset; } ;
struct mlx5_qp {int dummy; } ;
struct ibv_mw_bind_info {scalar_t__ length; } ;
typedef int int32_t ;
typedef enum ibv_mw_type { ____Placeholder_ibv_mw_type } ibv_mw_type ;


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
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5_qp *VAR_14, enum ibv_mw_type VAR_15,
           int32_t VAR_16, struct ibv_mw_bind_info *VAR_17,
           uint32_t VAR_18, void **VAR_19, int *VAR_20)
{
 struct mlx5_wqe_umr_ctrl_seg *VAR_21 = *VAR_19;

 VAR_21->flags = VAR_4 |
  VAR_3;
 VAR_21->mkey_mask = FUNC_1(VAR_9 |
         VAR_11);
 VAR_21->translation_offset = 0;
 FUNC_2(VAR_21->rsvd0, 0, sizeof(VAR_21->rsvd0));
 FUNC_2(VAR_21->rsvd1, 0, sizeof(VAR_21->rsvd1));

 if (VAR_15 == VAR_0)
  VAR_21->mkey_mask |= FUNC_1(VAR_12);

 if (VAR_17->length) {
  VAR_21->klm_octowords = FUNC_0(1);
  if (VAR_15 == VAR_0)
   VAR_21->flags |= VAR_1;
  VAR_21->mkey_mask |= FUNC_1(VAR_10 |
           VAR_13 |
           VAR_6 |
           VAR_7 |
           VAR_8 |
           VAR_5);
 } else {
  VAR_21->klm_octowords = FUNC_0(0);
  if (VAR_15 == VAR_0)
   VAR_21->flags |= VAR_2;
 }

 *VAR_19 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_20 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
}
