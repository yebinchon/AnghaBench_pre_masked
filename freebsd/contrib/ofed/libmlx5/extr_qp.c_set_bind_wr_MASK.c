
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {void* qend; } ;
struct mlx5_qp {TYPE_1__ sq; } ;
struct ibv_mw_bind_info {int mw_access_flags; long length; TYPE_3__* mr; scalar_t__ addr; } ;
typedef int int32_t ;
typedef enum ibv_mw_type { ____Placeholder_ibv_mw_type } ibv_mw_type ;
struct TYPE_6__ {void* addr; int length; } ;
struct TYPE_5__ {int alloc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct mlx5_qp*,int ) ;
 int FUNC_1 (struct mlx5_qp*,int,int ,struct ibv_mw_bind_info*,int ,void**,int*) ;
 int FUNC_2 (struct mlx5_qp*,int,int ,struct ibv_mw_bind_info*,int ,void**,int*) ;
 int FUNC_3 (struct mlx5_qp*,int,int ,struct ibv_mw_bind_info*,int ,void**,int*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct mlx5_qp *VAR_7, enum ibv_mw_type VAR_8,
         int32_t VAR_9, struct ibv_mw_bind_info *VAR_10,
         uint32_t VAR_11, void **VAR_12, int *VAR_13)
{
 void *VAR_14 = VAR_7->sq.qend;
 if (VAR_10->length > 1UL << 31)
  return VAR_1;

 FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 if (FUNC_5((*VAR_12 == VAR_14)))
  *VAR_12 = FUNC_0(VAR_7, 0);

 FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 if (!VAR_10->length)
  return 0;

 if (FUNC_5((VAR_12 == VAR_14)))
  *VAR_12 = FUNC_0(VAR_7, 0);

 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 return 0;
}
