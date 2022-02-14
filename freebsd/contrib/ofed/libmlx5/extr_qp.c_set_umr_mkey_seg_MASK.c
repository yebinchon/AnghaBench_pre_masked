
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_wqe_mkey_context_seg {scalar_t__ free; void* len; void* start_addr; int access_flags; int qpn_mkey; } ;
struct mlx5_qp {int dummy; } ;
struct ibv_mw_bind_info {int mw_access_flags; scalar_t__ length; scalar_t__ addr; } ;
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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx5_qp *VAR_11, enum ibv_mw_type VAR_12,
        int32_t VAR_13, struct ibv_mw_bind_info *VAR_14,
        uint32_t VAR_15, void **VAR_16, int *VAR_17)
{
 struct mlx5_wqe_mkey_context_seg *VAR_18 = *VAR_16;

 VAR_18->qpn_mkey = FUNC_0((VAR_13 & 0xFF) |
       ((VAR_12 == VAR_5 || !VAR_14->length) ?
        0xFFFFFF00 : VAR_15 << 8));
 if (VAR_14->length) {

  VAR_18->access_flags = 0;
  VAR_18->free = 0;
  if (VAR_14->mw_access_flags & VAR_0)
   VAR_18->access_flags |=
    VAR_7;
  if (VAR_14->mw_access_flags & VAR_3)
   VAR_18->access_flags |=
    VAR_9;
  if (VAR_14->mw_access_flags & VAR_2)
   VAR_18->access_flags |=
    VAR_8;
  if (VAR_14->mw_access_flags & VAR_1)
   VAR_18->access_flags |=
    VAR_6;
  if (VAR_14->mw_access_flags & VAR_4)
   VAR_18->start_addr = 0;
  else
   VAR_18->start_addr = FUNC_1(VAR_14->addr);
  VAR_18->len = FUNC_1(VAR_14->length);
 } else {
  VAR_18->free = VAR_10;
 }

 *VAR_16 += sizeof(struct mlx5_wqe_mkey_context_seg);
 *VAR_17 += (sizeof(struct mlx5_wqe_mkey_context_seg) / 16);
}
