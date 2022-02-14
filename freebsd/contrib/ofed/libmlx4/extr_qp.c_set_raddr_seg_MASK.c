
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct mlx4_wqe_raddr_seg {scalar_t__ reserved; int rkey; int raddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct mlx4_wqe_raddr_seg *VAR_0,
     uint64_t VAR_1, uint32_t VAR_2)
{
 VAR_0->raddr = FUNC_1(VAR_1);
 VAR_0->rkey = FUNC_0(VAR_2);
 VAR_0->reserved = 0;
}
