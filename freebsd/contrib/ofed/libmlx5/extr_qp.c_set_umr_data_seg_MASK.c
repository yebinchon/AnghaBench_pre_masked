
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mlx5_wqe_umr_klm_seg {int address; void* mkey; void* byte_count; } ;
struct mlx5_qp {int dummy; } ;
struct ibv_mw_bind_info {int addr; TYPE_1__* mr; int length; } ;
typedef int int32_t ;
typedef enum ibv_mw_type { ____Placeholder_ibv_mw_type } ibv_mw_type ;
struct TYPE_2__ {int lkey; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_wqe_umr_klm_seg*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_qp *VAR_0, enum ibv_mw_type VAR_1,
        int32_t VAR_2, struct ibv_mw_bind_info *VAR_3,
        uint32_t VAR_4, void **VAR_5, int *VAR_6)
{
 union {
  struct mlx5_wqe_umr_klm_seg klm;
  uint8_t reserved[64];
 } *VAR_7 = *VAR_5;

 VAR_7->klm.byte_count = FUNC_0(VAR_3->length);
 VAR_7->klm.mkey = FUNC_0(VAR_3->mr->lkey);
 VAR_7->klm.address = FUNC_1(VAR_3->addr);

 FUNC_2(&VAR_7->klm + 1, 0, sizeof(VAR_7->reserved) -
        sizeof(VAR_7->klm));

 *VAR_5 += sizeof(*VAR_7);
 *VAR_6 += (sizeof(*VAR_7) / 16);
}
