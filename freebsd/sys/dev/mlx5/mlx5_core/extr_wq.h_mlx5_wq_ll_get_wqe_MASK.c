
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_wq_ll {void* buf; int log_stride; } ;



__attribute__((used)) static inline void *FUNC_0(struct mlx5_wq_ll *VAR_0, u16 VAR_1)
{
 return VAR_0->buf + (VAR_1 << VAR_0->log_stride);
}
