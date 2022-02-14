
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_cqwq {int cc; int log_sz; } ;



__attribute__((used)) static inline u32 FUNC_0(struct mlx5_cqwq *VAR_0)
{
 return VAR_0->cc >> VAR_0->log_sz;
}
