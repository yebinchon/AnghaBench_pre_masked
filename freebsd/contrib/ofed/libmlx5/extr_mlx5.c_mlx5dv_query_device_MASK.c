
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mlx5dv_context {int comp_mask; int cqe_comp_caps; int flags; scalar_t__ version; } ;
struct mlx5_context {scalar_t__ cqe_version; int vendor_cap_flags; int cqe_comp_caps; } ;
struct ibv_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct mlx5_context* FUNC_0 (struct ibv_context*) ;

int FUNC_1(struct ibv_context *VAR_5,
    struct mlx5dv_context *VAR_6)
{
 struct mlx5_context *VAR_7 = FUNC_0(VAR_5);
 uint64_t VAR_8 = 0;

 VAR_6->version = 0;
 VAR_6->flags = 0;

 if (VAR_7->cqe_version == VAR_3)
  VAR_6->flags |= VAR_0;

 if (VAR_7->vendor_cap_flags & VAR_4)
  VAR_6->flags |= VAR_1;

 if (VAR_6->comp_mask & VAR_2) {
  VAR_6->cqe_comp_caps = VAR_7->cqe_comp_caps;
  VAR_8 |= VAR_2;
 }

 VAR_6->comp_mask = VAR_8;

 return 0;
}
