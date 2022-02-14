
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_spinlock {int dummy; } ;


 int FUNC_0 (struct mlx5_spinlock*) ;
 int FUNC_1 (struct mlx5_spinlock*) ;

__attribute__((used)) static inline void FUNC_2(uint32_t VAR_0[2], void *VAR_1, struct mlx5_spinlock *VAR_2)
{
 FUNC_0(VAR_2);
 *(volatile uint32_t *)VAR_1 = VAR_0[0];
 *(volatile uint32_t *)(VAR_1 + 4) = VAR_0[1];
 FUNC_1(VAR_2);
}
