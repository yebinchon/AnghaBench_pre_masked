
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx4_wqe_local_inval_seg {scalar_t__* reserved3; scalar_t__ reserved2; scalar_t__ reserved1; int mem_key; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct mlx4_wqe_local_inval_seg *VAR_0,
  uint32_t VAR_1)
{
 VAR_0->mem_key = FUNC_0(VAR_1);

 VAR_0->reserved1 = 0;
 VAR_0->reserved2 = 0;
 VAR_0->reserved3[0] = 0;
 VAR_0->reserved3[1] = 0;
}
