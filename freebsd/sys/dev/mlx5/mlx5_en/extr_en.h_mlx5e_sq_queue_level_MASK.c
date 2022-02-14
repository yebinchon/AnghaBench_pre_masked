
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int sz_m1; } ;
struct mlx5e_sq {int cc; int pc; TYPE_1__ wq; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32
FUNC_0(struct mlx5e_sq *VAR_1)
{
 u16 VAR_2;
 u16 VAR_3;

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_2 = VAR_1->cc;
 VAR_3 = VAR_1->pc;

 return (((VAR_1->wq.sz_m1 & (VAR_3 - VAR_2)) *
     VAR_0) / VAR_1->wq.sz_m1);
}
