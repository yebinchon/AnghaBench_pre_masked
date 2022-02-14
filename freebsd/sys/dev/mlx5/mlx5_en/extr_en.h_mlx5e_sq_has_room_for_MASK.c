
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ sz_m1; } ;
struct mlx5e_sq {scalar_t__ cc; scalar_t__ pc; TYPE_1__ wq; } ;



__attribute__((used)) static inline bool
FUNC_0(struct mlx5e_sq *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = VAR_0->cc;
 u16 VAR_3 = VAR_0->pc;

 return ((VAR_0->wq.sz_m1 & (VAR_2 - VAR_3)) >= VAR_1 || VAR_2 == VAR_3);
}
