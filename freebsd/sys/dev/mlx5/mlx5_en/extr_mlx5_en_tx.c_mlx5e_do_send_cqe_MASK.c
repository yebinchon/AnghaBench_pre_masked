
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq {scalar_t__ cev_counter; scalar_t__ cev_factor; } ;



__attribute__((used)) static inline bool
FUNC_0(struct mlx5e_sq *VAR_0)
{
 VAR_0->cev_counter++;

 if (VAR_0->cev_counter >= VAR_0->cev_factor) {
  VAR_0->cev_counter = 0;
  return (1);
 }
 return (0);
}
